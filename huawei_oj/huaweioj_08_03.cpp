#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<int> split(string &str,string &parten)
{
	vector<int>result;
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

void findPath(vector<int> &arr,int i,vector<int> &path,int expectedsum,int currentsum,int *found)
{
	int lchild=2*i+1;
	int rchild=lchild+1;
	currentsum+=arr[i];
	path.push_back(arr[i]);
	bool isleaf=lchild>=arr.size()&&rchild>=arr.size();
	if(currentsum==expectedsum&&isleaf)
	{
		*found=1;
		int i;
		for(i=0;i<path.size()-1;i++)
		  cout<<path[i]<<",";
		cout<<arr[i]<<endl;
	}
	if(lchild<arr.size())
	  findPath(arr,lchild,path,expectedsum,currentsum,found);
	if(rchild<arr.size())
	  findPath(arr,rchild,path,expectedsum,currentsum,found);
	path.pop_back();
}

int main(void)
{
	int expectedsum;
	string str;
	while(cin>>expectedsum>>str)
	{
		string parten=",";
		vector<int>arr=split(str,parten);
		int currentsum=0;
		vector<int>path;
		int found=0;
		findPath(arr,0,path,expectedsum,currentsum,&found);
		if(found==0)
			cout<<"error"<<endl;
	}
	return 0;
}

