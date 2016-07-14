#include <stdio.h>
#include <stdlib.h>

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

int main(int argc,char **argv)
{
	if(argc!=2)
	{
		printf("Usage:%s targetnum\n",argv[0]);
		exit(EXIT_FAILURE);
	}
	int targetnum=atoi(argv[1]);
	int arr[4][4]={{1,2,8,9},{2,4,9,12},{4,7,10.13},{6,8,11,15}};
	int res=find((int **)arr,4,4,targetnum);
	char *p=(res==1?"true":"false");
	printf("result=%s\n",p);
	return 0;
}
