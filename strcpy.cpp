char* strcpy(char* dest, const char* src)
{
	if (dest == src)
		return dest;

	assert((dest !=NULL) && (src != NULL));
	char* pAdd = dest;
	while((*dest++ = *src++) != '\0');
	return pAdd;
}
