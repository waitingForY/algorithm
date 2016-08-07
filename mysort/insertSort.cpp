#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void insertSort(vector<int> &arr,int size)
{
	for(int i=1;i<size;i++)
	{
		for(int j=i;j>0;j--)
		  if(arr[j-1]>arr[j])
			swap(arr[j-1],arr[j]);
		  else
			break;
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
		insertSort(arr,arr.size());
		for(vector<int>::size_type i=0;i<arr.size();i++)
		  cout<<arr[i]<<" ";
		cout<<endl;
	}
	return 0;
}
