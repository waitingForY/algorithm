#include <iostream>
using namespace std;
double powerWithExponent(double base,unsigned int exponent)
{
	if(exponent==0)
	  return 0;
	if(exponent==1)
	  return base;
	double result=powerWithExponent(base,exponent >> 1);
	result*=result;
	if(exponent & 0x1 == 1)
	  result*=base;
	return result;
}
int main(void)
{
	double base;
	unsigned int exponent;
	cout<<"base:";
	cin>>base;
	cout<<"exponent:";
	cin>>exponent;

	double result=powerWithExponent(base,exponent);
	cout<<"result:"<<result<<endl;
	return 0;
}
