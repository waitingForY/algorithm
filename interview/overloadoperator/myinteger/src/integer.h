#ifndef INTEGER_H
#define INTEGER_H

class Integer
{
	public:
		Integer(int n):n_(n){};
		Integer& operator++();//前置++
		Integer operator++(int i);//后++
		void display();
	private:
		int n_;
			
};


#endif //INTEGER_H
