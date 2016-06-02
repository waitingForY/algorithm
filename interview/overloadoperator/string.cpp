#include "string.h"
#include <iostream>
#include <string.h>
using namespace std;

char* String::mallocAndCopy(char* str)
{
	int len=strlen(str)+1;
	char* newstr=new char[len];
	memset(newstr,0,len);
	strcpy(newstr,str);
	return newstr;
}

String::String(char* str)
{
	str_=mallocAndCopy(str);
}

String::String(const String& other)
{
	str_=mallocAndCopy(other.str_);
}

String& String::operator=(const String& other)
{
	if(&other==this)
	  return *this;
	delete []str_;
	str_=mallocAndCopy(other.str_);
	return *this;
}

void String::display() const
{
	cout<<str_<<endl;
}

String::~String()
{
	delete []str_;

}
