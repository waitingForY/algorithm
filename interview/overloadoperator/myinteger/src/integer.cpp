#include "integer.h"
#include <iostream>
using namespace std;
Integer& Integer::operator++()
{
	++n_;
	return *this;
}

Integer Integer::operator++(int i)
{
	Integer temp(n_);
	n_++;
	return temp;
}

void Integer::display()
{
	cout<<n_<<endl;
}
