#include <iostream>
#include <string>
using namespace std;
int main(void)
{
	char str1[]="abcdefghajkcdfilmopqrsd";
	char str2[]="cdfjz";
	int count[26]={0};
	for(int i=0;i<sizeof(str1);i++)
	{
		int index=str1[i]-'a';
		count[index]++;
	}
	for(int j=0;j<sizeof(str2);j++)
	{
		int index=str2[j]-'a';
		if(!count[index])
		{
			cout<<"false"<<endl;
			return 0;
		}
	}
	cout<<"true"<<endl;
	return 0;
}
