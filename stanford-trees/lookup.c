#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

typedef struct Node
{
  int data;
  struct Node* right;
  struct Node* left;
}Node_t;


Node_t*  insert(Node_t* node,int data)
{
	Node_t* temp;
	if(node == NULL)
	{
		temp  =(Node_t*) malloc(sizeof(Node_t));
		temp->data = data;
		temp->left=temp->right = NULL;
		return temp;	
	}
	if(node->data >=  data)
	{
		node->left=insert(node->left,data);
	}
	else
	{
		node->right=insert(node->right,data);
	}	
	return node;
}

void inorder(Node_t* node)
{
	if(node !=NULL)
	{
		inorder(node->left);
		printf("%d \n", node->data);
		inorder(node->right);	
	}
}
void maketree(Node_t** node)
{
	*node=insert(*node,50);
	insert(*node,30);
	insert(*node,20);
	insert(*node,40);
	insert(*node,70);
	insert(*node,60);
	insert(*node,80);
}

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

	lookup(root,1090)?printf("Gotcha \n"):printf("Fail \n");
//	inorder(root);
	return 1;
}


