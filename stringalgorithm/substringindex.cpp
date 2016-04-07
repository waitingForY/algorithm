#include <iostream>
#include <string>
#include <errno.h>
#include <stdlib.h>
#include <unistd.h>
using namespace std;
int substrindex(char strSrc[],char strDes[])
{
	int p1=0;
	int p2=0;
	for(int i=0;i<sizeof(strSrc);++i)
	{
		p1=i;
		p2=0;
		while(strDes[p2]!='\0'&&strDes[p2]==strSrc[p1])
		{
			p1++;
			p2++;
		}
		if(strDes[p2]=='\0')
		  return i;
	}
	return -1;
}
int main(void)
{
	char str1[]="abcdefghijklmnopqrstuvwxyz";
	char str2[]="fghijk";
	cout<<"first string is:"<<endl;
	cout<<str1<<endl;
	cout<<"second string is:"<<endl;
	cout<<str2<<endl;
	int index=substrindex(str1,str2);
	cout<<index<<endl;
	return 0;
}


