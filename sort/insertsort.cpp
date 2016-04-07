#include <iostream>
#include <vector>
using namespace std;
template <typename T>
void insertsort(vector<T> &a)
{
	for(int i=1;i<a.size();i++)
	{
		int j;
		T temp=a[i];
		for(j=i;j>0&&a[j-1]>temp;j--)
		{
			a[j]=a[j-1];
		}
		a[j]=temp;
	}
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
	int a[]={2,3,6,4,5,7,0,1,9,8};
	vector<int>test(a,a+10);
	insertsort(test);
	display(test);
	return 0;
}
