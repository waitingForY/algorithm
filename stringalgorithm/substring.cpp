#include <iostream>
#include <string.h>
using namespace std;
bool substring(char *strSrc,char *strDes,int &index)
{
	int i=0;
	char *p1=strSrc;
	char *p2=strDes;
	for(;*strSrc!='\0';strSrc++)
	{
		i++;
		p1=strSrc;
		p2=strDes;
		while(*p2!='\0'&&*p1==*p2)
		{
			p1++;
			p2++;
		}
		if(*p2=='\0')
		{
			index=i;
			return true;
		}
	}
	index=0;
	return false;
}
int main(void)
{
	char str1[]="abcdefghijklmnopqrstuvwxyz";
	char str2[]="fghijk";
	cout<<"first string is:"<<endl;
	cout<<str1<<endl;
	cout<<"second string is:"<<endl;
	cout<<str2<<endl;
	int index=0;
	substring(str1,str2,index);
	cout<<index<<endl;
	return 0;
}
