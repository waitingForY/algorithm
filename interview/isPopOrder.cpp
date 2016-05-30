#include <iostream>
#include <stack>
using namespace std;


bool isPopOrder(const int *push,const int *pop,int length)
{
	bool istrue=false;
	if(push!=NULL&&pop!=NULL&&length>0)
	{
		const int *nextpush=push;
		const int *nextpop=pop;
		stack<int> stack_data;
		while(nextpop-pop<length)
		{
			while(stack_data.empty()||stack_data.top()!=*nextpop)
			{
				if(nextpush-push==length)
				  break;
				stack_data.push(*nextpush);
				nextpush++;
			}
			if(stack_data.top()!=*nextpop)
			  break;
			stack_data.pop();
			nextpop++;
		}
		if(stack_data.empty()&&nextpop-pop==length)
		  istrue=true;
	}
	return istrue;
}

int main(void)
{

	int push[]={1,2,3,4,5};
	int pop[]={4,3,5,1,2};
	bool istrue=isPopOrder(push,pop,5);
	cout<<istrue<<endl;
	return 0;
}
