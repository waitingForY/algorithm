#include <iostream>
#include <vector>
using namespace std;
template<typename T>
T maxsum(vector<T> &a)
{
	T sum=0;
	T maxsum=a[0];
	for(int i=0;i<a.size();i++)
	{
		if(sum>=0)
			sum+=a[i];
		else
			sum=a[i];
		if(sum>maxsum)
		  maxsum=sum;
	}
	return maxsum;
}
int main(void)
{
	int size;
	cout<<"please input the num of array:";
	cin>>size;
	int elem;
	vector<int>array;
	for(int i=0;i<size;i++)
	{
		cin>>elem;
		array.push_back(elem);
	}
	int max=maxsum(array);
	cout<<"the max sum is:"<<endl;
	cout<<max<<endl;
	return 0;
}
