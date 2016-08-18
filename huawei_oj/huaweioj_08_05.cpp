#include <iostream>
#include <vector>
using namespace std;
int main(void)
{
	vector<vector<int> >arr;
	for(int i=0;i<3;i++)
	{
		vector<int>tmp;
		int data;
		for(int j=0;j<3;j++)
		{
			cin>>data;
			tmp.push_back(data);
		}
		arr.push_back(tmp);
	}
	for(int i=0;i<3;i++)
	{
		for(int j=i;j<3;j++)
		{
			arr[i][j]=0;
		}
	}
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		  cout<<arr[i][j];
	}
	return 0;
}
