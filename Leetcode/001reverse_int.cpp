#include <iostream>
#include <climits>

using namespace std;

int solution(int x)
{
	long res=0;
	while(x)
	{
		res=res*10+x%10;
		x/=10;
	}
	return res>INT_MAX?0:res;
}
int main(void)
{
	int x;
	cout<<"x=";
	cin>>x;
	cout<<"result="<<solution(x)<<endl;
	return 0;
}
