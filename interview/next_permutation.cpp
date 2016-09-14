#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

void print_permutation1(string &str)
{
	sort(str.begin(),str.end());
	do
	{
		cout<<str<<endl;
	}while(next_permutation(str.begin(),str.end()));
}

void print_permutation2(string &str,int begin)
{
	if(begin==str.size()-1)
	  cout<<str<<endl;
	else
	{
		for(int i=begin;i<str.size();i++)
		{
			swap(str[i],str[begin]);
			print_permutation2(str,begin+1);
			swap(str[i],str[begin]);
		}
	}
}

int main(void)
{
	string str;
	while(cin>>str)
	{
		int choose;
		cin>>choose;
		if(choose==1)
		  print_permutation1(str);
		else
		  print_permutation2(str,0);
	}
	return 0;
}
