#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <stdlib.h>
using namespace std;
typedef struct treeNode
{
	int val;
	struct treeNode* next;
}Node;
map<int,Node*>rootset;
multimap<int,int>edgemap;
set<int>leafs;
vector<int>leafsvec;
vector<int>result;
void constructList(int leaf)
{
	for(multimap<int,int>::iterator it=edgemap.begin();it!=edgemap.end();++it)
	{
		if(leaf==1)
		  break;
		if((it->second==leaf&&leafs.find(it->first)==leafs.end())||(it->first==leaf&&leafs.find(it->second)==leafs.end()))
		{
			int father;
			it->second==leaf?father=it->first:father=it->second;
			map<int,Node*>::iterator pfather=rootset.find(father);
			Node* p=pfather->second;
			Node* ptail=p;
			while(p)
			{
				if(p->val==leaf)
				  break;
				ptail=p;
				p=p->next;
			}
			if(p==NULL)
			{
				Node *node=(Node*)malloc(sizeof(Node));
				node->next=NULL;
				node->val=leaf;
				if(pfather->second==NULL)
				  pfather->second=node;
				else
				  ptail->next=node;

			}
			edgemap.erase(it);
			constructList(father);
			break;
		}
	}
}
void findPath(int root)
{
	map<int,Node*>::iterator it=rootset.find(root);
	result.push_back(it->first);
	if(it->first==*(leafsvec.begin()))
	  leafsvec.erase(leafsvec.begin());
	Node *p=it->second;
	while(p)
	{
		findPath(p->val);
		result.push_back(it->first);
		if(it->first==*(leafsvec.begin()))
		  leafsvec.erase(leafsvec.begin());
		p=p->next;
	}
}
int main(void)
{
	int n;
	while(cin>>n){
		map<int,int>leaf_count;
		for(int i=0;i<n-1;i++){
			int ver1,ver2;
			cin>>ver1>>ver2;
			ver1<ver2?edgemap.insert({ver1,ver2}):edgemap.insert({ver2,ver1});
			rootset.insert({ver1,NULL});
			rootset.insert({ver2,NULL});
			leaf_count[ver1]++;
			leaf_count[ver2]++;
			
		}
		int leafcount=0;
		int leaf;
		for(map<int,int>::iterator it=leaf_count.begin();it!=leaf_count.end();++it)
		  if(it->first!=1&&it->second==1)
			leafcount++;
		for(int i=0;i<leafcount;i++)
		{
			cin>>leaf;
			leafs.insert(leaf);
			leafsvec.push_back(leaf);
			constructList(leaf);
		}
		for(map<int,Node*>::iterator it=rootset.begin();it!=rootset.end();++it)
		{
			cout<<it->first<<"->";
			Node* p=it->second;
			while(p)
			{
				cout<<p->val<<"->";
				p=p->next;
			}
			cout<<"NULL"<<endl;
		}
		findPath(1);
		if(leafsvec.size()!=0)
		  cout<<-1<<endl;
		else
		{
			for(vector<int>::iterator it=result.begin();it!=result.end();++it)
			  cout<<*it<<" ";
			cout<<endl;
		}
		result.clear();
		edgemap.clear();
		rootset.clear();
		leafs.clear();
		leafsvec.clear();
	}
	return 0;
}
