#include <iostream>
#include <vector>
#include <algorithm>
#define MAX_VERTEX 301
using namespace std;
typedef struct treeNode
{
	int val;
	struct treeNode* next;
}Node;

Node *rootList[MAX_VERTEX];
vector<int>leafs;
vector<int>result;
void initRootList(Node *rootList[],int n)
{
	for(int i=0;i<n;i++)
	{
		Node* node=(Node*)malloc(sizeof(Node));
		node->next=NULL;
		node->val=i+1;
		rootList[i]=node;
	}
}

void tableToList(int table[][MAX_VERTEX],Node *rootList[],int n,int currentnodeval)
{
	if(currentnodeval==1)
	  return;
	for(int i=0;i<n;i++)
	{
		if(table[i][currentnodeval-1]==1)
		{
			Node* p=rootList[i];
			Node* ptail=rootList[i];
			while(p)
			{
				if(p->val==currentnodeval)
				  break;
				ptail=p;
				p=p->next;
			}
			if(p==NULL)
			{
				Node* node=(Node*)malloc(sizeof(Node));
				node->next=NULL;
				node->val=currentnodeval;
				ptail->next=node;
			}
			tableToList(table,rootList,n,i+1);
			break;
		}
	}
}


void findPath(int root)
{
	result.push_back((*(rootList+root-1))->val);
	if((*rootList+root-1)->val==*leafs.begin())
	  leafs.erase(leafs.begin());
	Node* p=(*rootList+root-1)->next;
	while(p)
	{
		findPath(p->val);
		result.push_back((*rootList+root-1)->val);
		if((*rootList+root-1)->val==*leafs.begin())
		  leafs.erase(leafs.begin());
		p=p->next;
	}
}



void makeTree()
{
	int n=5;
	//while(cin>>n)
	//{
		int tmp[MAX_VERTEX][MAX_VERTEX];
		for(int i=0;i<n;i++)
		  for(int j=0;j<n;j++)
			tmp[i][j]=0;
		/*for(int i=0;i<n-1;i++)
		{
			int ver1,ver2;
			cin>>ver1>>ver2;
			ver1<ver2?tmp[ver1-1][ver2-1]=1:tmp[ver2-1][ver1-1]=1;
		}*/
		tmp[0][1]=tmp[0][2]=tmp[1][3]=tmp[1][4]=1;
		initRootList(rootList,n);
		/*int leafcount=0;
		for(int i=1;i<n;i++)
		{
			int j;
			for(j=1;j<n;j++)
			  if(tmp[i][j]==1)
				break;
			if(j==n)
			{
				leafcount=n-i;
				break;
			}
		}*/
		/*
		int leaf;
		for(int i=0;i<leafcount;i++)
		{
			cin>>leaf;
			leafs.push_back(leaf);
			tableToList(tmp,rootList,n,leaf);
		}*/
		leafs.push_back(3);
		leafs.push_back(4);
		leafs.push_back(5);
		tableToList(tmp,rootList,n,3);
		tableToList(tmp,rootList,n,4);
		tableToList(tmp,rootList,n,5);
		
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			  cout<<tmp[i][j]<<" ";
			cout<<endl;
		}

		for(int i=0;i<n;i++)
		{
			cout<<rootList[i]->val<<"->";
			Node* p=rootList[i]->next;
			while(p)
			{	
				cout<<p->val<<"->";
				p=p->next;
			}
			cout<<"NULL"<<endl;

		}
		findPath(1);
	//}
}


int main(void)
{
	makeTree();
	//findPath(rootList);
	if(leafs.size()==0)
	  cout<<-1<<endl;
	else
	{
		for(vector<int>::iterator it=result.begin();it!=result.end();++it)
		  cout<<*it<<"->";
		cout<<endl;
	}
	return 0;
}
