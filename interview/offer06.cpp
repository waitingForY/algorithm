#include <iostream>
using namespace std;
int main(void)
{
	int sum=1;
	int max=1;
	int first,next;
	int n;
	cout<<"please input the number of array:";
	cin>>n;
	int *arr=new int[n];
	for(int i=0;i<n;i++)
	  cin>>arr[i];
	for(int i=0;i<n-1;i++)
	{
		first=arr[i];
		next=arr[i+1];
		if(first>next)
		{
			sum=1;
			continue;
		}
		else
		{
			sum++;
			if(max<sum)
				max=sum;
		}
	}
	cout<<max<<endl;
	return 0;
}
