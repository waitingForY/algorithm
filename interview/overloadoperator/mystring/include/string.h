#ifndef STRING_H
#define STRING_H


#include <iostream>
using namespace std;
class String 
{
	//以友元函数的方式来重载+运算符
	friend String operator+(const String&str1,const String& str2);//最好以友元的方式来重载，第一个参数可以是一个字符串
	friend ostream& operator<<(ostream& out,const String& str);//流运算符的重载只能用友元函数的方式重载
	friend istream& operator>>(istream& in,String& str);
	public:
	//这里用explicit可以禁止转换构造
		/*explicit*/ String(const char* str="");
		~String();
		String(const String& other);
		String& operator=(const String& other);//赋值运算符的重载
		String& operator=(const char* str);//等号运算符的重载
		char& operator[](unsigned int index);
		const char& operator[](unsigned int index) const;//提供一个const成员函数，就是为了const对象能够调用，	并且为了满足常对象的值是不能修改的，那么就要返回常引用；

		String& operator+=(const String& other);
		void display() const;
	private:
		char* str_;
		char* mallocAndCopy(const char* str);
};

#endif //STRING_H
