#include <iostream>
#include <stack>
using namespace std;
int getAndRemoveTail(stack<int> &tmp_stack)
{
	int tail;
	int result=tmp_stack.top();
	tmp_stack.pop();
	if(tmp_stack.empty())
	  return result;
	else
	{
		tail=getAndRemoveTail(tmp_stack);
		tmp_stack.push(result);
	}
	return tail;

}
void reverseStack(stack<int> &tmp_stack)
{
	int tail=getAndRemoveTail(tmp_stack);
	if(tmp_stack.empty())
	{
		tmp_stack.push(tail);
		return;
	}
	else{
		reverseStack(tmp_stack);
		tmp_stack.push(tail);
	}
}
int main(void)
{
	int n;
	while(cin>>n){
		int data;
		stack<int>tmp;
		for(int i=0;i<n;i++)
		{
			cin>>data;
			tmp.push(data);
		}
		cout<<"after reverse:";
		reverseStack(tmp);
		while(!tmp.empty())
		{
			cout<<tmp.top()<<" ";
			tmp.pop();
		}
		cout<<endl;
	}
	return 0;
}
