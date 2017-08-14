char *strcat(char *strDes, const char *strSrc)
{
	assert(!strDes && !strSrc);
	char * pAddr = strDes;
	while (*strDes != '\0') strDes++;
	while ((*strDes++ = *strSrc++) != '\0');
	return pAddr; 
}
