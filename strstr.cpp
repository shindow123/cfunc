char *strstr(const char *strSrc, const char *str) 
{
	assert(strSrc != NULL && str != NULL);
	const char* pStrSrc = strSrc;
	const char* pStr = str;

	for (; pStrSrc != '\0'; pStr++)
	{
		for (pStr = str, pStrSrc = strStr; *pStr != '\0' && *pStr == *pStrSrc; pStrSrc++, pStr++);

		if (*pStr == '\0')
			return (char* )pStrSrc;
	}

	return NULL;


	//int strSrcLen = strlen(strSrc);	
	//int strLen = strlen(str);
	//int strSrcIdx = 0;
	//int strIdx = 0;

	//while (strSrcIdx < strSrcLen)
	//{
	//	if (strStr[strSrcIdx] == str[strIdx])
	//	{
	//		if (strLen == 1)
	//			return strStr + strSrcIdx;

	//		while (strStr[++strSrcIdx] == str[++strIdx])
	//		{
	//			if (strLen == strIdx)
	//				return strStr + strSrcIdx - strLen; 
	//		}

	//		strSrcIdx -= strIdx;
	//		strIdx = 0;
	//	}
	//	strSrcIdx++;
	//}
}

char *strstr(const char *strSrc, const char *str)     
{     
	assert(strSrc != NULL && str != NULL);     
	const char *s = strSrc;     
	const char *t = str;     
	for (; *strSrc != '\0'; ++ strSrc)     
	{     
		for (s = strSrc, t = str; *t != '\0' && *s == *t; ++s, ++t)     
			NULL;     
		if (*t == '\0')     
			return (char *) strSrc;     
	}     
	return NULL;     
}

