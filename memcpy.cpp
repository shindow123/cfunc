void *memcpy(void *dest, const void *src, unsigned int count)  
{
	assert(dest != NULL && src != NULL);
	char* d = (char* )dest;
	const char* s = (const char*)src;
	while (count--)
		*d++ = *s++;

	return dest;
}
