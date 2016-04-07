#include <iostream>
#include <vector>
using namespace std;
template<typename T>
void shellsort(vector<T>&a)
{
	for(int gap=a.size()/2;gap>0;gap/=2)
	{
		for(int i=gap;i<a.size();i++)
		{
			T temp=a[i];
			int j;
			for(j=i;j>0&&a[j-gap]>temp;j-=gap)
			  a[j]=a[j-gap];
			a[j]=temp;
		}
	}
}
template <typename T>
void display(vector<T>&a)
{
	for(int i=0;i<a.size();i++)
	  cout<<a[i]<<" ";
	cout<<endl;
}
int main(void)
{
	int a[]={2,3,6,4,5,7,0,1,9,8};
	vector<int>test(a,a+10);
	shellsort(test);
	display(test);
	return 0;
}
