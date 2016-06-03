#include "../include/stack.h"
#include <iostream>

using namespace std;

int main(void)
{
	Stack *s=new Stack();
	int i;
	for(i=0;i<5;i++)
	{
		s->Push(i);
	}
	while(!s->Empty())
	{
		s->Pop(i);
		cout<<i<<" ";
	}
	cout<<endl;
	return 0;
}
