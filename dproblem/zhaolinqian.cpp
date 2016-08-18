#include <iostream>
#include <vector>
using namespace std;
int count(vector<int> &arr,int index,int aim)
{
	int result=0;
	if(index==arr.size()){
		result=(aim==0?1:0);
	}
	else
	{
		for(int i=0;i*arr[index]<=aim;i++)
		{
			result+=count(arr,index+1,aim-i*arr[index]);
		}
	}
	return result;
}
int coins(vector<int> &arr,int aim)
{
	if(arr.empty()||aim<0)
	  return 0;
	else
	  return count(arr,0,aim);
}
int main(void)
{

	int n,aim;
	while(cin>>n)
	{
		vector<int>arr(n);
		for(int i=0;i<n;i++)
		  cin>>arr[i];
		cin>>aim;
		cout<<coins(arr,aim)<<endl;
	}
	return 0;
}
