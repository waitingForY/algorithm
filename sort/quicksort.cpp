#include <iostream>
#include <vector>
using namespace std;
template <typename T>
void quicksort(vector<T> &a,int first,int last)
{
	if(first<last)
	{
		int i=first,j=last;
		T temp=a[i];
		while (i<j)
		{
			while(i<j&&a[j]>=temp)
			  j--;
			if(i<j)
			  a[i++]=a[j];
			while(i<j&&a[i]<temp)
			  i++;
			if(i<j)
			  a[j--]=a[i];
		}
		a[i]=temp;
		quicksort(a,first,i-1);
		quicksort(a,i+1,last);
	}
}
template <typename T>
void display(vector<T>&a)
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
	quicksort(test,0,test.size());
	display(test);
	return 0;
}
		
