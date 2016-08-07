#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void popSort(vector<int> &arr,int size)
{
	for(int i=size-1;i>=0;i--)
	{
		for(int j=0;j<i;j++)
		{
			if(arr[j]>arr[j+1])
			  swap(arr[j],arr[j+1]);
		}
	}
}
int main(void)
{
	int n;
	while(cin>>n)
	{
		vector<int>arr;
		int data;
		for(int i=0;i<n;i++)
		{
			cin>>data;
			arr.push_back(data);
		}
		popSort(arr,arr.size());
		for(vector<int>::size_type i=0;i<arr.size();i++)
		  cout<<arr[i]<<" ";
		cout<<endl;
	}
	return 0;
}
