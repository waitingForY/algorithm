#include <iostream>
#include <vector>
#include <map>
#include <stdlib.h>
#include <numeric>
#include <utility>
using namespace std;
typedef struct treeNode
{
	int val;
	struct treeNode* next;
}Node;
map<int,Node*>rootset;
vector<int>result;
void makelist(vector<int> &arr)
{
	int len=arr.size();
	int i=0;
	int kroot=0;
	rootset.insert(map<int,Node*>::value_type(arr[0],NULL));
	while(i<len-1)
	{
		map<int,Node*>::iterator pfather=rootset.find(arr[kroot]);
		int j=0;
		while(j<2&&i<len-1)
		{
			i++;
			rootset.insert(map<int,Node*>::value_type(arr[i],NULL));
			Node* child=(Node*)malloc(sizeof(Node));
			child->val=arr[i];
			child->next=NULL;
			Node* p=pfather->second;
			if(p==NULL)
			  pfather->second=child;
			else
			  p->next=child;
			j++;
		}
		kroot++;
	}
}
void findpath(int root,int target)
{
	map<int,Node*>::iterator it=rootset.find(root);
	result.push_back(root);
	Node* p=it->second;
	while(p)
	{
		findpath(p->val,target);
		if(accumulate(result.begin(),result.end(),0)==target)
		{
			for(vector<int>::size_type i=0;i<result.size();i++)
			  cout<<result[i]<<" ";
			cout<<endl;
		}
		result.erase(result.end()-1);
		p=p->next;
	}
}
int main(void)
{
	int n,target;
	while(cin>>n>>target)
	{
		vector<int>arr;
		for(int i=0;i<n;i++)
		{
			int val;
			cin>>val;
			arr.push_back(val);
		}
		makelist(arr);
		findpath(arr[0],target);
		rootset.clear();
		arr.clear();
		result.clear();
	}
	return 0;
}
