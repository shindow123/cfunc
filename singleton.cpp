#include <iostream>
#include <mutex>

std::mutex myMutex;

template <typename T>
class Singleton
{
	public:
		static T& getInstance()
		{
			if (inst == NULL)
			{
				if (myMutex.try_lock())
				{
					if (inst == NULL)
					{
						inst = new T;
					}
				}
				myMutex.unlock();
			}
			return *inst;
		}

	private:
		static T* inst;
};

template <typename T>
T* Singleton<T>::inst = NULL;

class kaka
{
	public:
		const char* test() 
		{
			return "hello kaka!";
		}
};


int main()
{
	std::cout << Singleton<kaka>::getInstance().test() << std::endl;
	return 0;
}
