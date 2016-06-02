#ifndef STRING_H
#define STRING_H

class String 
{
	public:
		explicit String(const char* str);
		~String();
		String(const String& other);
		String& operator=(const String& other);//赋值运算符的重载
		String& operator=(const char* str);//等号运算符的重载
		void display() const;
	private:
		char* str_;
		char* mallocAndCopy(const char* str);
};

#endif //STRING_H
