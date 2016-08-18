#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

void getdp(vector<vector<int> >&arr,vector<vector<int> > &dp)
{
	for(int i=1;i<arr[0].size();i++)
	  dp[0][i]+=dp[0][i-1];
	for(int i=1;i<arr.size();i++)
	  dp[i][0]+=dp[i-1][0];
	for(int i=1;i<arr[0].size();i++)
	{
		for(int j=1;j<arr.size();j++)
		  dp[i][j]+=min(dp[i-1][j],dp[i][j-1]);
	}
}

int main(void)
{
	int n,m;
	while(cin>>n>>m)
	{
		vector<vector<int> > arr,dp;
		for(int i=0;i<n;i++)
		{
			vector<int>tmp(m);
			for(int j=0;j<m;j++)
				cin>>tmp[j];
			arr.push_back(tmp);
			dp.push_back(tmp);
		}
		getdp(arr,dp);
		cout<<endl;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				cout<<dp[i][j]<<" ";
			}
			cout<<endl;
		}
		cout<<dp[n-1][m-1]<<endl;
	}
	return 0;
}
