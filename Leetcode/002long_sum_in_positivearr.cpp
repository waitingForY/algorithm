#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;

int find_target(vector<int>&arr,int k)
{
	int left=0;
	int right=0;
	int sum=0;
	int result=0;
	while(right<arr.size()-1){
		if(sum==k)
		{
			result=max(result,right-left+1);
			sum+=arr[right++];
		}
		else if(sum<k)
		  sum+=arr[right++];
		else
		  sum-=arr[left++];
	}
	return result;
}
int main(void)
{
	int n;
	return 0;
}
