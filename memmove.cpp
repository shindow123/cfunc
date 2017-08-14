#include <iostream>
using namespace std;
void *memmove(void *dest, const void *src, unsigned int count) 
{
//	assert(dest != NULL && src != NULL);
	char* tmpDest = (char*)dest;
	char* tmpSrc = (char*)src;
	// overlapping
	if (tmpDest > tmpSrc && (tmpDest - tmpSrc) < count)
	{
		while (count--)
		{
			*(tmpDest + count) = *(tmpSrc + count);
		}
	}
	else
	{
		while (count--)
		{
			*tmpDest++ = *tmpSrc++;
		}
	}

	return dest;
}

int main()
{
	char* p = new char[5];
	cout << "char 0:" << static_cast<const void *>(p) << ", char 1:" << static_cast<const void *>(p+1) << endl;
	return 0;
}
