#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void depart(int arr[],int len)
{
	for(int i=0,j=0;i<len;i++)
	{
		if(arr[i]==1)
		  swap(arr[i],arr[j++]);
		else if(arr[i]==2)
		  swap(arr[i--],arr[--len]);
	}
}

int main(void)
{
	int len;
	int arr[len];
	while(cin>>len)
	{
		for(int i=0;i<len;i++)
		  cin>>arr[i];
		depart(arr,len);
		for(int i=0;i<len;i++)
		  cout<<arr[i]<<" ";
		cout<<endl;
	}
	return 0;
}
