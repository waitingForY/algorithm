#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string bignum_sum(string &str1,string &str2)
{
	reverse(str1.begin(),str1.end());
	reverse(str2.begin(),str2.end());
	int n=str1.length()>str2.length()?str1.length():str2.length();
	string result;
	int carry=0;
	for(int i=0;i<n;i++)
	{
		int a=i<str1.length()?str1[i]-'0':0;
		int b=i<str2.length()?str2[i]-'0':0;
		int val=(a+b+carry)%10;
		carry=(a+b+carry)/10;
		result.insert(result.begin(),val+'0');
	}
	if(carry==1)
	  result.insert(result.begin(),'1');
	return result;
}

int main(void)
{
	string str1,str2;
	while(cin>>str1>>str2)
	{
		cout<<bignum_sum(str1,str2)<<endl;
	}
	return 0;
}
