#include <iostream>
using namespace std;

//找出一个数组中出现次数超过一半的那个数
void moreThanHalfNum(int arr[],int len,int* result)
{
	if(arr==NULL||len<=0)
	  return;
	*result=arr[0];
	int sumNum=1;
	for(int i=1;i<len;i++)
	{
		if(sumNum==0)
		{
			*result=arr[i];
			sumNum=1;
		}
		else if(arr[i]==*result)
		{
			sumNum++;
		}
		else
		  sumNum--;
		
	}
}

int main(void)
{
	int arr[9]={1,2,3,2,2,2,5,4,2};
	int result;
	moreThanHalfNum(arr,9,&result);
	cout<<result<<endl;
	return 0;
}
