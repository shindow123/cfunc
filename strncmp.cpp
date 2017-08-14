int strncmp(const char *s, const char *t, unsigned int count) 
{
	assert(s != NULL && t != NULL);
	while (count-- && *s != '\0' && *t != '\0' && *s == *t)
	{
		s++;
		t++;
	}

	return *s - *t;
}
