#include <stdio.h>
#include <stdlib.h>

struct LinkNode{
	int m_nkey;
	struct LinkNode* m_pnext;
};

void printListReverse(struct LinkNode* head)
{
	if(head!=NULL)
	{
		if(head->m_pnext!=NULL)
		  printListReverse(head->m_pnext);
		printf("%d,",head->m_nkey);
	}
}

int main(void)
{
	struct LinkNode* head=malloc(sizeof(struct LinkNode));
	struct LinkNode* node1=malloc(sizeof(struct LinkNode));
	struct LinkNode* node2=malloc(sizeof(struct LinkNode));
	struct LinkNode* node3=malloc(sizeof(struct LinkNode));
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
