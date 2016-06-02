#ifndef STRING_H
#define STRING_H

class String 
{
	public:
		explicit String(const char* str="");
		~String();
		String(const String& other);
		String& operator=(const String& other);//赋值运算符的重载
		String& operator=(const char* str);//等号运算符的重载
		char& operator[](unsigned int index);
		const char& operator[](unsigned int index) const;//提供一个const成员函数，就是为了const对象能够调用，	并且为了满足常对象的值是不能修改的，那么就要返回常引用；

		void display() const;
	private:
		char* str_;
		char* mallocAndCopy(const char* str);
};

#endif //STRING_H
