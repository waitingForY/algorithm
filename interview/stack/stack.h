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
				List(int val,List* next):val_(val),next_(next){};
		};
		Stack();
		~Stack();
		void Push(int data);
		void Pop(int& data);
		bool Empty();
	private:
		List* head_;
		int size_;
		
};



#endif //STACK_H
