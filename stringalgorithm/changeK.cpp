#include<iostream>
#include<string>
using namespace std;
//将字符串旋转k
void changeK(char str[],int first,int last)
{
	int i=first,j=last;
	while(i<j)
	{
		char temp=str[i];
		str[i]=str[j];
		str[j]=temp;
		i++;
		j--;
	}
}
int main(void)
{
	char str[]="wo shi wangjiangbo";
	cout<<str<<endl;
	changeK(str,0,5);
	changeK(str,6,sizeof(str)-2);
	changeK(str,0,sizeof(str)-2);
	cout<<str<<endl;
	return 0;
}
