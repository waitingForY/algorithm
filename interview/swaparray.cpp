#include <iostream>
#include <algorithm>
using namespace std;

void swaparr(int arr[],int n)
{
	if(!arr||n<=0)
	  return;
	int i=0,partition=-1;
	while(i<n)
	{
		if(arr[i]%2)
		  swap(arr[++partition],arr[i]);
		i++;
	}
}

int main(void)
{
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	swaparr(arr,10);
	for(int i=0;i<10;i++)
	  cout<<arr[i]<<",";
	cout<<endl;
	return 0;
}
