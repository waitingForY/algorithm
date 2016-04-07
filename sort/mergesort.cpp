#include <iostream>
#include <vector>
using namespace std;
template <typename T>
void mergearry(vector<T> &a,int first,int mid,int last,vector<T> &temp)
{
	int n=last,m=mid;
	int i=first,j=mid+1;
	int k=0;
	while(i<=m&&j<=n)
	{
		if(a[i]<=a[j])
		  temp[k++]=a[i++];
		else
		  temp[k++]=a[j++];
	}
	while(i<=m)
	{
		temp[k++]=a[i++];
	}
	while(j<=n)
	{
		temp[k++]=a[j++];
	}
	for(i=0;i<k;i++)
	{
		a[first+i]=temp[i];
	}
}
template<typename T>
void mergesort(vector<T> &a,int first,int last,vector<T> &temp)
{
	if(first<last)
	{
		int mid=(first+last)/2;
		mergesort(a,first,mid,temp);
		mergesort(a,mid+1,last,temp);
		mergearry(a,first,mid,last,temp);
	}
}
template<typename T>
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
	int a[]={2,3,6,4,5,7,0,1,9,8};
	vector<int>test(a,a+10);
	vector<int>temp(10,0);
	mergesort(test,0,10,temp);
	display(test);
	return 0;
}
