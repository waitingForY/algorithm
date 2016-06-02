#ifndef STRING_H
#define STRING_H

class String 
{
	public:
		String(char* str);
		~String();
		String(const String& other);
		String& operator=(const String& other);
		void display() const;
	private:
		char* str_;
		char* mallocAndCopy(char* str);
};

#endif //STRING_H
