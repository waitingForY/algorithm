#include <iostream>
#include <vector>
using namespace std;
/*
 *
 *一个从左到右递增，从上到下也是递增的矩阵，找一个数在不在其中
 */
template<typename T>
bool find_target(T **arr,T target,int row,int col)
{
	int i,j;
	for(i=row-1,j=0;i>=0&&j<col;)
	{
		if(arr[i][j]==target)
		  return true;
		else if(target>arr[i][j])
		{
			j++;
			continue;
		}
		else 
		{
			i--;
			continue;
		}
	}
	return false;
}
int main(void)
{
	int rownum,colnum;
	cout<<"please input row:";
	cin>>rownum;
	cout<<"please input col:";
	cin>>colnum;
	int **arr=new int*[rownum];
	for(int i=0;i<rownum;++i)
	  arr[i]=new int[colnum];
	for(int i=0;i<rownum;i++)
	{
		for(int j=0;j<colnum;j++)
		{
			cin>>arr[i][j];
		}
	}
	cout<<"pleses input target:";
	int target;
	cin>>target;
	bool found=find_target(arr,target,rownum,colnum);
	if(found)
	  cout<<"true"<<endl;
	else
	  cout<<"false"<<endl;
	for(int i=0;i<rownum;i++)
	  delete []arr[i];
	delete []arr;
	return 0;
}
