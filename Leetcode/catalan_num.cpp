#include <iostream>

using namespace std;

int catalan_num(int n)
{
	if(n==0)
	{
		return 1;
	}
	else
	{
		return catalan_num(n-1)*(4*n-2)/(n+1);
	}
}

int main(void)
{
	int num;
	cout<<"please input the num:"<<endl;
	cin>>num;
	int res=catalan_num(num);
	cout<<"第"<<num<<"catalan number ="<<res<<endl;
	return 0;
}
