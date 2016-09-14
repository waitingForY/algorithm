#include<iostream>
#include<vector>
#include<cstring>
#include<assert.h>
#include <string>

using namespace std;

void Combination(const char *str ,int number,string &result);

void Combination(const char *str)
{
	assert(string != NULL);
	string result;
	int i , length = strlen(str);
	for(i = 1 ; i <= length ; ++i)
		Combination(str , i ,result);
}

void Combination(const char *str ,int number , string &result)
{
	assert(str != NULL);
	if(number == 0)
	{
		cout<<result<<endl;
		return ;
	}
	if(*str == '\0')
		return ;
	result.push_back(*str);
	Combination(str + 1 , number - 1 , result);
	result.pop_back();
	Combination(str + 1 , number , result);
}

int main(void)
{
	string input;
	while(cin>>input)
	{
		const char *str=input.c_str();
		Combination(str);
	}
	return 0;
}
