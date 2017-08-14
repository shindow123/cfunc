int strcmp(const char *s, const char *t)
{
	assert(s!=NULL && t != NULL);

	if (s == t)
		return 0;

	while((*s == *t) && (*s != '\0') && (*t != '\0'))
	{
		s++;
		t++;
	}
	
	return *s - *t;
}
