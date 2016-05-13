#include "binarryTree.h"

void printer(struct TreeNode *root)
{
	queue<struct TreeNode *>que;
	struct TreeNode *last=root;
	struct TreeNode *nlast=root;
	que.enqueue(root);
	while(!que.empty())
	{
		struct TreeNode *temp=que.top();
		que.dequeue();//出队列;
		cout<<temp->value<<" ";
		if(temp->left)
		{
			que.enqueue(temp->left);
			nlast=temp->left;
		}
		if(temp->right)
		{
			que.enqueue(temp->right);
			nlast=temp->right;
		}
		if(temp==last)
		{
			last=nlast;
			cout<<endl;//换行;
		}
	}
}
