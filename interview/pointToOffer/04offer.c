#include <stdio.h>
#include <stdlib.h>


void replaceBlank(char *str,int len)
{
	if(str==NULL||len<=0)
	  return;
	int blanknum=0;
	int i=0;
	while(str[i]!='\0')
	{
		if(str[i]==' ')
		  blanknum++;
		++i;
	}	
	int newlength=len+2*blanknum;
	int oldindex=len-1;
	int newindex=newlength-1;
	while(oldindex>0&&newindex>oldindex)
	{
		if(str[oldindex]==' ')
		{
		  str[newindex--]='0';
		  str[newindex--]='2';
		  str[newindex--]='%';
		}
		else
		  str[newindex--]=str[oldindex];
		oldindex--;

	}
}

int main(void)
{
	char str[18]="wo ai xiaomin";
	replaceBlank(str,18);
	printf("after replace str=%s\n",str);
	return 0;
}
