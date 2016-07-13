#include <stdio.h>


int find(int **parr,int rows,int columns,int target)
{
	int row=0;
	int column=columns-1;
	int found=0;
	if(parr!=NULL&&rows>0&&columns>0)
	{
		while(row<rows&&column>0)
		{
			int temp=*((int *)parr+columns*row+column);
			if(temp==target)
			{
				found=1;
				break;
			}
			else if(temp>target)
			  column--;
			else
			  row++;
		}
	}
	return found;
}

int main(void)
{
	int arr[4][4]={{1,2,8,9},{2,4,9,12},{4,7,10.13},{6,8,11,15}};
	int i,j;
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d,",arr[i][j]);
		}
		printf("\n");
	}
	int res=find((int **)arr,4,4,5);
	printf("result=%d\n",res);
	return 0;
}
