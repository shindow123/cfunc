#include <cstddef>

char * strncat(char * destination, const char * source, size_t num)
{
	assert(destination != NULL && source != NULL);
	char * pAddr = destination;
	while (*destination != '\0') destination++; 
	while (num-- > 0 && (*destination = *source) != '\0')
	{
		destination++;
		source++;
	}
	
	*destination = '\0';
	return pAddr;
}
