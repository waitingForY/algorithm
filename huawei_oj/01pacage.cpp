#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(void)
{
	int n,m;
	while(cin>>n>>m)
	{
		vector<int> v(m),vp(m),q(m);
		int dp[100][3000];
		for(int i=0;i<m;i++)
		{
			int tmp;
			cin>>v[i]>>tmp>>q[i];
			vp[i]=v[i]*tmp;
		}
		memset()
	}
}
