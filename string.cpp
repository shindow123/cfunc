#include <iostream>
#include <string.h>

class MyString
{
	public:
		MyString(const char* pChar);
		MyString(const MyString& str);
		MyString& operator=(const MyString& str);
		~MyString();

	private:
		char* m_pData;

};

MyString::MyString(const char* pChar)
{
	if (pChar == NULL)
	{
		//m_pData = NULL;
		m_pData = new char[1];
		m_pData[0] = '\0';
		return;
	}
	
	int len = strlen(pChar) + 1;
	m_pData = new char[len];
	strcpy(m_pData, pChar);
}

MyString::MyString(const MyString& str)
{
	int len = strlen(str.m_pData) + 1;
	m_pData = new char[len];
	strcpy(m_pData, str.m_pData);
}

//MyString& MyString::operator=(const MyString& str)
//{
//	if (&str == this)
//	{
//		return *this;
//	}
//
//	delete []m_pData;
//
//	int len = strlen(str.m_pData) + 1;
//	m_pData = new char[len]; // 会new失败
//	strcpy(m_pData, str.m_pData);
//
//	return *this;
//}

MyString& MyString::operator=(const MyString& str)
{
	if (&str == this)
	{
		return *this;
	}

	MyString tmpStr(str);
	char* pTemp = m_pData;;
	m_pData = tmpStr.m_pData;
	tmpStr.m_pData = pTemp;
	return *this;
}

int main()
{
}
