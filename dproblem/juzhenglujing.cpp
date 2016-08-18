#include <iostream>
#include <vector>
using namespace std;
int count(int i,int j)
{
	if(i==0||j==0)
	  return 1;
	else
	  return count(i-1,j)+count(i,j-1);
}
int main(void)
{
	int n,m;
	while(cin>>n>>m)
	{
		cout<<count(n-1,m-1)<<endl;
	}
	return 0;
}
