#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;
int main(void)
{
	int t,n;
	while(cin>>t>>n){
		int dp[100][100];
		vector<int>wight;
		vector<int>value;
		for(int i=0;i<n;i++)
		{
			int w,v;
			cin>>w>>v;
			wight.push_back(w);
			value.push_back(v);
		}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<t;j++)
			{
				if(j>=wight[i])
				  dp[i][j]=max(dp[i-1][j],dp[i-1][j-wight[i]]+value[i]);
				else
				  dp[i][j]=dp[i-1][j];
			}
		}
		cout<<dp[n][t]<<endl;
	}
	return 0;
}
