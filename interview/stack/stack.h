#ifndef STACK_H
#define STACK_H

class Stack
{
	public:
		class List
		{
			public:
				int val_;
				List* next_;
				List(int val):val_(val),next_(NULL){};
		};
		Stack();
		~Stack();
		Push(int data);
		Pop(int& data);
		bool Empty();
	private:
		List* head_;
		int size_;
		
};



#endif //STACK_H
