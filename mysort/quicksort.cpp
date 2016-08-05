#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int partition(vector<int> &arr,int left,int right)
{
	int set=left-1;
	for(int i=left;i<=right;i++)
	  if(arr[i]<=arr[right])
		swap(arr[++set],arr[i]);
	return set;
}

void quicksort(vector<int> &arr,int left,int right)
{
	if(left<right)
	{
		int depart=partition(arr,left,right);
		quicksort(arr,left,depart-1);
		quicksort(arr,depart+1,right);
	}
}

int main(void)
{
	vector<int> arr={9,2,3,1,4,6,8,7,5};
	quicksort(arr,0,8);
	for(int i=0;i<9;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}
