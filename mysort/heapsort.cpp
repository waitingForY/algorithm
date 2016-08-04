#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


template<typename T>
void MinHeapify(T*arry,int size,int element)
{
	int lchild=element*2+1,rchild=lchild+1;
	while(rchild<size)
	{
		if(arry[element]<=arry[lchild]&&arry[element]<=arry[rchild])
		{
			return;
		}
		if(arry[lchild]<=arry[rchild])
		{
			swap(arry[element],arry[lchild]);
			element=lchild;	
		}
		else	
		{
			swap(arry[element],arry[rchild]);
			element=rchild;
		}
		lchild=element*2+1;
		rchild=lchild+1;
	}
	if(lchild<size&&arry[lchild]<arry[element])
	{
		swap(arry[lchild],arry[element]);
	}
	return;
}
template<typename T>
void HeapSort(T*arry,int size)
{
	int i;
	for(i=size-1;i>=0;i--)
	{
		MinHeapify(arry,size,i);
	}
	while(size>0)
	{
		swap(arry[size-1],arry[0]);
		size--;
		MinHeapify(arry,size,0);
	}
	return;
}

int main(void)
{
	vector<int>arr={3,2,6,4,1,5,9,7,8};
	int size=arr.size();
	HeapSort(&arr,size);
	for(vector<int>::iterator it=arr.begin();it!=arr.end();++it)
	{
		cout<<*it<<" ";
	}
	cout<<endl;
	return 0;
}
