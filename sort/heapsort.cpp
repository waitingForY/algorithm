#include <iostream>
#include <vector>
#include <errno.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
using namespace std;
template <typename T>
void insertheap(vector<T> &a,T elem)
{
	a.push_back(elem);
	int i=a.size()-1;
	int f=(i-1)/2;
	while(f>=0&&i!=0)
	{
		if(a[f]<=elem)
		{
			break;
		}
		a[i]=a[f];
		i=f;
		f=(i-1)/2;
	}
	a[i]=elem;
}
template <typename T>
T deleteheap(vector<T> &a)
{
	if(a.size())
	{
		T top=a[0];
		a[0]=a[a.size()-1];
		a.pop_back();
		int f=0;
		int child=2*f+1;
		while(child<a.size())
		{
			T temp=a[f];
			if(child+1<a.size()&&a[child+1]<a[child])
			  child++;
			if(a[child]>=temp)
			  break;
			a[f]=a[child];
			a[child]=temp;
			f=child;
			child=2*f+1;
		}
		return top;
	}
	cout<<"empty heap"<<endl;
	exit(EXIT_SUCCESS);
}
template <typename T>
void display(vector<T> &a)
{
	for(int i=0;i<a.size();i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
int main(void)
{
	int n,elem;
	vector<int>heap;
	cout<<"please input the num of heap:";
	cin>>n;
	cout<<"please input the elem:"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>elem;
		insertheap(heap,elem);
	}
	cout<<endl;
	display(heap);
	while(heap.size())
	{
		cout<<deleteheap(heap)<<" ";
	}
	cout<<endl;
	return 0;
}
