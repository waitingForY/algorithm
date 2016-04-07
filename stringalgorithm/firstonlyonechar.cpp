#include <iostream>
#include <string>
#include <unistd.h>
#include <errno.h>
using namespace std;
char firstonlyonechar(char *str)
{
	if(!str)
	{
		return '\0';
	}
	else
	{
		char *strp=str;
		int count[256]={0};
		while(*strp!='\0')
		{
			count[*(strp++)]++;
		}
		while(*str!='\0')
		{
			if(count[*str]==2)
			  return *str;
			str++;
		}
		return '\0';
	}
}
int main(void)
{
	char str[]="wjibwmjbbikm";
	cout<<str<<endl;
	cout<<firstonlyonechar(str)<<endl;
	return 0;
}
