#include <iostream>
#include <algorithm>

using namespace std;

int maxSumOfSubarray(int arr[],int len)
{
	int benefited=0;
	int max=arr[0];
	for(int i=1;i<len;i++)
	{
		benefited=std::max(arr[i],arr[i]+benefited);
		max=std::max(max,benefited);
	}
	return max;
}

int main(void)
{
	int arr[8]={-1,-2,-3,-10,-4,-7,-2,-5};
	cout<<maxSumOfSubarray(arr,8)<<endl;
	return 0;
}
