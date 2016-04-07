#include <iostream>

using namespace std;
/*
 *
 *模拟乘方运算，
 */
double power(double base,int exponent)
{
	double res=1;
	if(exponent==0)
	  return 1;
	else if(exponent>0)
	{
		for(int i=1;i<=exponent;i++)
		  res*=base;
		return res;
	}
	else
	{
		int flag=-1*exponent;
		for(int i=1;i<flag;i++)
		  res*=base;
		return 1/res;
	}

}


int main(void)
{
	double base;
	int exponent;
	cout<<"plese input the base:";
	cin>>base;
	cout<<"please input the exponent:";
	cin>>exponent;
	double result=power(base,exponent);
	cout<<"the result is:"<<result<<endl;
	return 0;
}
