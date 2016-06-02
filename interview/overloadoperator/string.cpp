#include "string.h"
#include <iostream>
#include <string.h>
using namespace std;

char* String::mallocAndCopy(const char* str)
{
	int len=strlen(str)+1;
	char* newstr=new char[len];
	memset(newstr,0,len);
	strcpy(newstr,str);
	return newstr;
}

String::String(const char* str)
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


String& String::operator=(const char* str)
{
	delete []str_;
	str_=mallocAndCopy(str);
	return *this;
}


char& String::operator[](unsigned int index)
{
	return const_cast<char&>(static_cast<const String&>(*this)[index]);//这一段代码很经典，当const成员函数和非const成员函数代码基本一样的时候，我们在非const成员函数内调用const成员函数；
}



const char& String::operator[](unsigned int index) const
{
	return str_[index];
}

void String::display() const
{
	cout<<str_<<endl;
}

String::~String()
{
	delete []str_;

}
