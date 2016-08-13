#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

vector<int> getdp(vector<int> &arr,int size)
{
	vector<int>dp;
	for(int i=0;i<size;i++)
	{
		dp.push_back(1);
	}
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<i;j++)
		{
			if(arr[j]<arr[i])
			  dp[i]=max(dp[i],dp[j]+1);
		}
	}
	return dp;
}

void getsubarr(vector<int> &arr,vector<int> &dp,int size)
{
	int len=0;
	int index=0;
	for(int i=0;i<size;i++)
	{
		if(dp[i]>len)
		{
			len=dp[i];
			index=i;
		}
	}
	vector<int>result;
	result.push_back(arr[index]);
	for(int i=index;i>=0;i--)
	{
		if(arr[i]<arr[index]&&dp[i]==dp[index]-1){
			result.push_back(arr[i]);
			index=i;
		}
	}
	for(int i=result.size()-1;i>=0;i--)
	  cout<<result[i]<<" ";
	cout<<endl;
}
int main(void)
{
	int n;
	while(cin>>n){
		int data;
		vector<int> arr,dp;
		for(int i=0;i<n;i++)
		{
			cin>>data;
			arr.push_back(data);
		}
		dp=getdp(arr,n);
		getsubarr(arr,dp,n);
	}
	return 0;
}
