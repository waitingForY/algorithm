#include <iostream>
#include <vector>
using namespace std;


void fibonacci(vector<int> &arr,int n)
{
	arr.push_back(0);
	arr.push_back(1);
	for(int i=2;i<n;i++)
	  arr.push_back(arr[i-1]+arr[i-2]);
	for(int i=0;i<n;i++)
	  cout<<arr[i]<<" ";
}

int find_nof_fibonacci(int n)
{
	if(n==1)
	  return 0;
	else if(n==2)
	  return 1;
	else 
	  return find_nof_fibonacci(n-1)+find_nof_fibonacci(n-2);
}
int main(void)
{
	vector<int> arr;
	int n;
	cout<<"please input n:";
	cin>>n;
	fibonacci(arr,n);
	cout<<endl;
	int result=find_nof_fibonacci(n);
	cout<<"the result of n is:"<<result<<endl;
	return 0;
}
