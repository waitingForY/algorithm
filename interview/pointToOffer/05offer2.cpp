#include <stack>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
struct LinkNode{
	int m_nkey;
	struct LinkNode* m_pnext;
};

void printListReverse(struct LinkNode* head)
{
	stack<struct LinkNode*> nodestack;
	struct LinkNode* pNode=head;
	while(pNode)
	{
		nodestack.push(pNode);
		pNode=pNode->m_pnext;
	}
	while(!nodestack.empty())
	{
		struct LinkNode* tmp=nodestack.top();
		printf("%d,",tmp->m_nkey);
		nodestack.pop();
	}
}

int main(void)
{
	struct LinkNode* head=(struct LinkNode*)malloc(sizeof(struct LinkNode));
	struct LinkNode* node1=(struct LinkNode*)malloc(sizeof(struct LinkNode));
	struct LinkNode* node2=(struct LinkNode*)malloc(sizeof(struct LinkNode));
	struct LinkNode* node3=(struct LinkNode*)malloc(sizeof(struct LinkNode));
	head->m_nkey=1;
	head->m_pnext=node1;
	node1->m_nkey=2;
	node1->m_pnext=node2;
	node2->m_nkey=3;
	node2->m_pnext=node3;
	node3->m_nkey=4;
	node3->m_pnext=NULL;
	printListReverse(head);
	while(head)
	{
		struct LinkNode* tmp=head;
		free(head);
		head=tmp->m_pnext;
	}
	return 0;
}
