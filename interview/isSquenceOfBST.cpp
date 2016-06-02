#include <iostream>
using namespace std;


bool isSquenceOfBST(int squence[],int length)
{
	if(!squence||length<=0)
	  return false;
	int root=squence[length-1];
	int i=0;
	for(;i<length-1;i++)
	{
		if(squence[i]>root)
		  break;
	}
	for(int j=i;j<length-1;j++)
	{
		if(squence[j]<root)
		  return false;
	}
	bool left=true;
	if(i>0)
	{
		left=isSquenceOfBST(squence,i);
	}
	bool right=true;
	if(i<length-1)
	{
		right=isSquenceOfBST(squence+i,length-1-i);
	}
	return (left&&right);
}

int main(void)
{

	int squence[]={5,7,6,9,11,10,8};
	cout<<isSquenceOfBST(squence,7)<<endl;
	return 0;
}
