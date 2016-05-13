#include <iostream>
#include <string>

using namespace std;
bool isNumber(string str)
{
	int i=0;
	int n=str.size();
	//skip space;
	while(str[i]==' ')
	  i++;
	//get sign;
	if(str[i]=='+'||str[i]=='-')
	  i++;
	int c1=0;
	while(i<n&&str[i]>='0'&&str[i]<='9')
	{
		c1++;
		i++;
	}
	if(i<n&&str[i]=='.')
	  i++;
	while(i<n&&str[i]>='0'&&str[i]<='9')
	{
		c1++;
		i++;
	}
	if(c1==0)
	  return false;
	if(str[i]=='e')
	{
		i++;
		if(str[i]=='+'||str[i]=='-')
		  i++;
		c1=0;
		while(str[i]>='0'&&str[i]<='9')
		{
			i++;
			c1++;
		}
		if(c1<1)
		  return false;
	}
	while(str[i]==' ')
	  i++;
	return i==n;

}
int main(void)
{
	string str;
	getline(cin,str);
	cout<<isNumber(str)<<endl;
	return 0;
}
