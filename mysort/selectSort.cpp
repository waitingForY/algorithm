#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void selectSort(vector<int> &arr,int size)
{
	for(int i=0;i<size;i++)
	{
		int min=i;
		for(int j=i+1;j<size;j++)
		{
			if(arr[min]>arr[j])
			  min=j;
		}
		if(min!=i)
		  swap(arr[min],arr[i]);
	}
}
int main(void)
{
	int n;
	while(cin>>n)
	{
		int data;
		vector<int>arr;
		for(int i=0;i<n;i++)
		{
			cin>>data;
			arr.push_back(data);
		}
		selectSort(arr,arr.size());
		for(vector<int>::size_type i=0;i<arr.size();i++)
		  cout<<arr[i]<<" ";
		cout<<endl;
	}
	return 0;
}
