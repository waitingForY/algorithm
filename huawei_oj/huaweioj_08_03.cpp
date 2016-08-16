#include <iostream>
#include <vector>

using namespace std;

void findPath(vector<int> &arr,int i,vector<int> &path,int expectedsum,int currentsum)
{
	int lchild=2*i+1;
	int rchild=lchild+1;
	currentsum+=arr[i];
	path.push_back(arr[i]);
	bool isleaf=lchild>=arr.size()&&rchild>=arr.size();
	if(currentsum==expectedsum&&isleaf)
	{
		cout<<"A path is found:";
		for(int i=0;i<path.size();i++)
		  cout<<path[i]<<" ";
		cout<<endl;
	}
	if(lchild<arr.size())
	  findPath(arr,lchild,path,expectedsum,currentsum);
	if(rchild<arr.size())
	  findPath(arr,rchild,path,expectedsum,currentsum);
	path.pop_back();
}

int main(void)
{
	int n,expectedsum;
	while(cin>>n>>expectedsum)
	{
		vector<int>arr(n);
		int currentsum=0;
		vector<int>path;
		for(int i=0;i<n;i++)
		  cin>>arr[i];
		findPath(arr,0,path,expectedsum,currentsum);
	}
	return 0;
}

