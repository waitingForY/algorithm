#include <iostream>
using namespace std;

int main(void)
{
	int n;
	cout<<"please input:";
	cin>>n;
	int count=0;
	while(n)
	{
		n=n&(n-1);
		count++;
	}
	cout<<"the number of 1 is :"<<count<<endl;
	return 0;
}
