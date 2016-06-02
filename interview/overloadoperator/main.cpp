#include "integer.h"
#include <iostream>

using namespace std;

int main(void)
{
	Integer n1(100);
	n1.display();
	Integer n2=++n1;
	n2.display();
	Integer n3=n1++;
	n3.display();
	return 0;

}
