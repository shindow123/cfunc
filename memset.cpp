void *memset(void *str, int c, unsigned int count)  
{
	//assert(str != NULL);

	unsigned char* tmpStr = (unsigned char*)str;
	while(count--)
	{
		*tmpStr++ = c;
	}

	return str;
}

int main()
{
	return 0;
}
