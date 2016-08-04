#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<string> split(string &str,string &parten)
{
	vector<string> result;
	str+=parten;
	vector<string>::size_type size=str.length();
	vector<string>::size_type pos;
	for(string::size_type i=0;i<size;i++)
	{
		pos=str.find(parten,i);
		if(pos<size)
		{
			string tmp=str.substr(i,pos-i);
			result.push_back(tmp);
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
	vector<string> result;
	result=split(inputstr,parten);
	for(vector<string>::iterator it=result.begin();it!=result.end();++it)
	{
		cout<<*it<<endl;
	}
	return 0;
}
