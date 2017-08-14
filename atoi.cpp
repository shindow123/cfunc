#include <cctype>
#define INT_MAX ((int)0x7fffffff) 
#define INT_MIN ((int)0x80000000)

int atoi (const char * str)
{
	// assert(str);
	if (str)
		return 0;

	while (isspace(*str))
		str++;

	int firstChar = 1;
	if(*str == '+')
	{
		str++;
	}
	else if(*str == '-')
	{
		str++;
		firstChar = -1;
	}

	int returnNum = 0;
	while (*str >= '0' && *str <= '9')
	{
		returnNum += returnNum * 10 + (*str - '0');
		if (firstChar == 1 && returnNum > INT_MAX)
			return 0;
		if (firstChar == -1 && -returnNum < INT_MIN)
			return 0;

		str++;
	}

	return returnNum * firstChar;
}

int main()
{
	return 1;
}
