#include <iostream>
#define MAXSIZE 50
using namespace std;

int arr[MAXSIZE][MAXSIZE];
int begin_num=1;
void func(int x1,int y1,int x2,int y2)
{
	for(int i=y1;i<=y2;i++)
	  arr[x1][i]=begin_num++;
	for(int i=x1+1;i<=x2;i++)
	  arr[i][y2]=begin_num++;
	for(int i=y2-1;i>=y1;i--)
	  arr[x2][i]=begin_num++;
	for(int i=x2-1;i>x1;i--)
	  arr[i][y1]=begin_num++;
}

int main(void)
{
	int n;
	while(cin>>n)
	{
		int x1=0,y1=0,x2=n-1,y2=n-1;
		while(x1<=x2&&y1<=y2)
		{
			func(x1,y1,x2,y2);
			x1++;
			y1++;
			x2--;
			y2--;
		}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			  cout<<arr[i][j]<<" ";
			cout<<endl;
		}
		begin_num=1;
	}
	return 0;
}
