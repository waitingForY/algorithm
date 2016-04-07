#include <iostream>
#include <string>
using namespace std;
/*
 *
 *将一个字符串中指定的字符，替换为给定的字符串，以“%20”为例
 *
 */
string replace_char(string str,char ch)
{
	if(str.size()==0)
	  return str;
	int oldlen=str.size();
	int charnum=0;
	for(int i=0;i<oldlen;i++)
	{
		if(str[i]==ch)
		  charnum++;
	}
	int newlen=oldlen+2*charnum;
	str.resize(newlen);
	while(oldlen>=0&&oldlen<newlen)
	{
		if(str[--oldlen]==ch)
		{
			str[--newlen]='0';
			str[--newlen]='2';
			str[--newlen]='%';
		}
		else
		  str[--newlen]=str[oldlen];
	}
	return str;
}

int main()
{
	string test;
	cout<<"please input string:"<<endl;
	getline(cin,test);
	cout<<"please input char:"<<endl;
	char target;
	cin>>target;
	string output=replace_char(test,target);
	cout<<"the result:"<<endl;
	cout<<output<<endl;
	return 0;
}
