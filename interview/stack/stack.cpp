#include <iostream>
#include "stack.h"

Stack::Stack():head_(NULL),size_(0){

};

Stack::~Stack()
{
	while(!empty())
	{
		List* temp=head_;
		head_=head_->next_;
		delete temp;
		--size_;
	}
}

Stack::push(int data)
{
	List* node=new List(data);
	node->next_=head_;
	head_=node;
	++size_;

}

Stack::pop(int& data)
{
	while(!empty())
	{
		List* temp=head_;
		data=head_->val_;
		head_=head_->next_;
		delete temp;
		--size_;
	}
}

bool Stack::empty()
{
	return (size_==0);
}
