#ifndef STRING_H
#define STRING_H

class String 
{
	public:
		explicit String(const char* str);
		~String();
		String(const String& other);
		String& operator=(const String& other);
		String& operator=(const char* str);
		void display() const;
	private:
		char* str_;
		char* mallocAndCopy(const char* str);
};

#endif //STRING_H
