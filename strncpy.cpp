char *strncpy(char *strDes, const char *strSrc, unsigned int count)  
{
	assert((strDes != NULL) && (strStr != NULL));

	char* pAddr = strDes;
	do
	{
		*strDes++ = *strSrc++;
	}
	while (--count && *strSrc != '\0');

	do
	{
		*strDes = '\0';
	}
	while (--count);
	return pAddr;
}
