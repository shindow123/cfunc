int strlen(const char *str)   
{
	assert(!str);
	int count = 0;
	while(*str++ != '\0') count++;
	return count;
}

