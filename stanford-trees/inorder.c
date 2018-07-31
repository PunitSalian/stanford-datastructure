#include<stdio.h>
#include "maketree.h"
#include<stdbool.h>

bool hasPathSum(Node_t * root, int value)
{

     if(root == NULL)
	return  value==0;

      return  hasPathSum(root->left,value-(root->data)) || hasPathSum(root->right,value-(root->data)) ; 

}

int  main()
{
	Node_t* root = NULL;
	maketree(&root);
	hasPathSum(root,100)? printf("yes \n"): printf("no \n");

}
