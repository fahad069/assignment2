#include "String.h"

int String::length()
{
	int length = 0;
	for (int i = 0; myChar[length] != '\0'; i++)
	{
		length++;
	}
	return length;
}
String::String()
{
	myChar = '\0';
}
String::~String()
{
	delete[]myChar;
	myChar = nullptr;
}
String::String(const String& str)
{
	int l = length(); 
	if (myChar != nullptr)
	{
		delete[] myChar;
		myChar = NULL;
	}
	myChar = new char [l+1];
	for (int i = 0; myChar != '\0'; i++)
	{
		myChar[i] = str.myChar[i];
	}
	myChar[l] = '\0';
}
String::String(const String& str, int pos, int len)
{
	int l = length();
	if (myChar != nullptr)
	{
		delete[] myChar;
		myChar = nullptr;
	}
	myChar = new char[l + 1];
	for (int i = pos; i < pos + len; i++)
	{
		int j = 0;
		myChar[j] = str.myChar[j];
		j++;
	}
	myChar[l] = '\0';
}
String::String(const char* s)
{
	int l = length();
	if (myChar != nullptr)
	{
		delete[] myChar;
		myChar = nullptr;
	}
	myChar = new char[l + 1];
	for (int i = 0; i < l; i++)
	{
		myChar[i] = s[i];
	}
	myChar[l] = '\0';
}
String::String(const char* s, int n)
{

}
String::String(int n, char c)
{

}
char String::at (int i)
{
	return myChar[i];
}
String String::substr(int pos, int len) const
{

}
ostream& operator<< (ostream& os, const String& str)
{

}