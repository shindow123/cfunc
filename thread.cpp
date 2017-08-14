#include <iostream>       // std::cout
#include <thread>         // std::thread
#include <mutex>          // std::mutex
#include <unistd.h>

volatile int counter(0); // non-atomic counter
std::mutex mtx;           // locks access to counter

void attempt_10k_increases(int idx) {
    for (int j=0; j<500; ++j) {
       // if (mtx.try_lock()) {   // only increase if currently not locked:
			mtx.lock();
            ++counter;
	//		std::cout << "idx:" << idx << ", " << counter << std::endl;
            mtx.unlock();
        //}
    }
}

int main () {
    std::thread threads[2];
    for (int i=0; i<2; ++i)
	{
        threads[i] = std::thread(attempt_10k_increases, i);
	}

	threads[0].join();
	threads[1].join();
	
//    for (auto& th : threads)
//	{
//		th.join();
//	}

    std::cout << counter << " successful increases of the counter.\n";

    return 0;
}
