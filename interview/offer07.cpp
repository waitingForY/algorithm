#include <iostream>
#define MAXSIZE 50
using namespace std;
int arr[MAXSIZE][MAXSIZE];
int begin_num=1;
void func(int x1,int y1,int x2,int y2,bool upper)
{
	int i,j;
	if(upper)
	  for(i=x1,j=y1;i>=x2&&j<=y2;i--,j++)
		arr[i][j]=begin_num++;
	else
	  for(i=x2,j=y2;i<=x1&&j>=y1;i++,j--)
		arr[i][j]=begin_num++;
}
int main(void)
{
	int n;
	while(cin>>n){
		int x1=0,y1=0,x2=0,y2=0;
		bool upper=false;
		for(int i=1;i<2*n;i++)
		{
			func(x1,y1,x2,y2,upper);
			upper=!upper;
			if(x1==n-1)
			  y1++;
			else
			  x1++;
			if(y2==n-1)
			  x2++;
			else
			  y2++;
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
