#include <iostream>
#include <vector>
using namespace std;

int getmin(vector<int> &arr)
{
	int min=arr[0];
	for(int i=1;i<arr.size();i++)
	  if(arr[i]<min)
		min=arr[i];
	return min;
}

void getdp(vector<int> &dp,vector<int> &arr,int aim)
{
	for(int i=1;i<=aim;i++)
	{
		vector<int>tmp;
		for(int j=0;j<arr.size()&&arr[j]<=i;j++)
		{
			tmp.push_back(dp[i-arr[j]]);
		}
		if(!tmp.empty())
		  dp[i]=getmin(tmp)+1;
	}
}

int main(void)
{
	int n,aim;
	while(cin>>n)
	{
		vector<int>arr(n);
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		cin>>aim;
		vector<int>dp(aim+1);
		getdp(dp,arr,aim);
		cout<<dp[aim]<<endl;
	}
	return 0;
}
