#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void heapAdjust(vector<int> &arr,int elemi,int size)
{
	int lchild=2*elemi+1;
	int rchild=lchild+1;
	while(rchild<size)
	{
		if(arr[elemi]<=arr[lchild]&&arr[elemi]<=arr[rchild])
		  return;
		if(arr[rchild]<arr[lchild])
		{
			swap(arr[elemi],arr[rchild]);
			elemi=rchild;
		}
		else
		{
			swap(arr[elemi],arr[lchild]);
			elemi=lchild;
		}
		lchild=2*elemi+1;
		rchild=lchild+1;
	}
	if(lchild<size&&arr[elemi]>arr[lchild])
	  swap(arr[elemi],arr[lchild]);
	return;
}
void heapSort(vector<int> &arr,int size)
{
	for(int i=size/2-1;i>=0;i--)
		heapAdjust(arr,i,size);
	while(size>0)
	{
		swap(arr[0],arr[size-1]);
		size--;
		heapAdjust(arr,0,size);
	}
}
int main(void)
{
	vector<int>arr={3,2,4,5,1,9,7,8,6};
	heapSort(arr,arr.size());
	for(int i=0;i<arr.size();i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}
