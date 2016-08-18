#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> split(string &str,string &parten)
{
	vector<int> result;
	str+=parten;
	vector<string>::size_type size=str.length();
	vector<string>::size_type pos;
	for(string::size_type i=0;i<size;i++)
	{
		pos=str.find(parten,i);
		if(pos<size)
		{
			string tmp=str.substr(i,pos-i);
			int data=stoi(tmp);
			result.push_back(data);
			i=pos+parten.length()-1;
		}
	}
	return result;
}

int main(void)
{
	string inputstr;
	string parten;
	cout<<"input str:";
	getline(cin,inputstr);
	cout<<"input parten";
	getline(cin,parten);
	vector<int> result;
	result=split(inputstr,parten);
	for(vector<int>::iterator it=result.begin();it!=result.end();++it)
	{
		cout<<*it<<endl;
	}
	return 0;
}
