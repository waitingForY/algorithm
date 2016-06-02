#include "stack.h"
Stack::Stack():head_(0),size_(0){

};
bool Stack::Empty()
{
	return (size_==0);
}
Stack::~Stack()
{
	while(!Empty())
	{
		List* temp=head_;
		head_=head_->next_;
		delete temp;
		--size_;
	}
}

void Stack::Push(int data)
{
	List* node=new List(data,head_);
	head_=node;
	++size_;
}

void Stack::Pop(int& data)
{
	if(!Empty())
	{
		List* temp=head_;
		data=head_->val_;
		head_=head_->next_;
		delete temp;
		--size_;
	}
}


