#include <iostream>
using namespace std;

struct ListNode
{
	int val;
	struct ListNode *next;
	ListNode(int _val):val(_val),next(NULL){};
};
struct ListNode *mergeTwoSortedList(struct ListNode *list1,struct ListNode *list2)
{
	if(list1==NULL)
	  return list2;
	if(list2==NULL)
	  return list1;
	if(list1->val<=list2->val)
	{
		list1->next=mergeTwoSortedList(list1->next,list2);
		return list1;
	}
	else
	{
		list2->next=mergeTwoSortedList(list2->next,list1);
		return list2;
	}
}

struct ListNode *mergeTwo(struct ListNode *list1,struct ListNode *list2)
{
	bool isfirst=false;
	if(list1==NULL)return list2;
	if(list2==NULL)return list1;
	struct ListNode *l1=list1;
	struct ListNode *l2=list2;
	while(l1&&l2)
	{	
		while(l1->val<=l2->val)
		{ 
			l1=l1->next;
			isfirst=true;
		}
		l1->next=l2;
		while(l2->val<=l1->val)
		  l2=l2->next;
		l2->next=l1;
	}
	if(isfirst)
	  return list1;
	else
	  return list2;
}


int main(void)
{
	struct ListNode *list1=new ListNode(4);
	struct ListNode *node2=new ListNode(5);
	struct ListNode *node3=new ListNode(6);
	struct ListNode *node4=new ListNode(9);
	struct ListNode *list2=new ListNode(1);
	struct ListNode *node5=new ListNode(3);
	struct ListNode *node6=new ListNode(7);
	struct ListNode *node7=new ListNode(8);
	list1->next=node2;
	node2->next=node3;
	node3->next=node4;
	list2->next=node5;
	node5->next=node6;
	node6->next=node7;
	struct ListNode *p=mergeTwoSortedList(list1,list2);
	//struct ListNode *p=mergeTwo(list1,list2);
	while(p)
	{
		cout<<p->val<<",";
		p=p->next;
	}
	return 0;	
	
}
