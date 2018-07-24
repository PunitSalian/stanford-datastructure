#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include"maketree.h"

bool  lookup(Node_t* node,int data)
{
	if(node == NULL)
	{
		return false;
	}
	if(data<(node->data))
	{
		return lookup(node->left,data);
	}
	else
	{
		if(data>(node->data))
		{
			return lookup(node->right,data);
		}
		else
		{
			return true;
		}
	}
	return false;
}
int  main()
{
	Node_t* root = NULL;

	maketree(&root);

	lookup(root,20)?printf("Gotcha \n"):printf("Fail \n");
//	inorder(root);
	return 1;
}


