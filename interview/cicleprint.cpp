#include <iostream>
using namespace std;
static int value=1;
void print_one_cicle(int first,int last,int **arr)
{
	int i,j;
	for(i=first;i<=last;i++)
	{
		arr[first][i]=value;
		value++;
	}
	for(j=first+1;j<=last;++j)
	{
		arr[j][last]=value;
		value++;
	}
	for(i=last-1;i>=first;--i)
	{
		arr[last][i]=value;
		value++;
	}
	for(j=last-1;j>first;--j)
	{
		arr[j][first]=value;
		value++;
	}
}
int main(void)
{
	int n;
	cin>>n;
	int **arr=new int *[n];
	for(int i=0;i<n;++i)
		arr[i]=new int[n];
	for(int i=0,j=n-1;i<=j;i++,j--)
	  print_one_cicle(i,j,arr);
	for(int i=0;i<n;i++)
	  for(int j=0;j<n;j++)
		cout<<arr[i][j]<<" ";
	cout<<endl;
	for(int i=0;i<n;i++)
	  delete []arr[i];
	delete []arr;
	return 0;
}
