#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

struct List
{
	int val;
	struct List* next;
};


struct Stack
{
	struct List* head;
	int size;
};

void stackInit(struct Stack* stack)
{
	stack->head=NULL;
	stack->size=0;
}

void stackPush(struct Stack* stack,const int data)
{
	struct List* node=(struct List*)malloc(sizeof(struct List));
	node->val=data;
	node->next=stack->head;
	stack->head=node;
	++stack->size;
}

int stackEmpty(struct Stack* stack)
{
	return (stack->size==0);
}

int stackPop(struct Stack* stack,int* data)
{
	if(!stackEmpty(stack))
	{
		struct List* temp=stack->head;
		*data=stack->head->val;
		stack->head=stack->head->next;
		free(temp);
		--stack->size;
		return 1;
	}
	return 0;

}

int main(void)
{
	struct Stack stack;
	int i;
	stackInit(&stack);
	for(i=0;i<5;i++)
	{
		stackPush(&stack,i);
	}
	while(!stackEmpty(&stack))
	{
		stackPop(&stack,&i);
		printf("%d ",i);
	}
	printf("\n");
	return 0;
}
