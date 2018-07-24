#include<stdio.h>
#include"maketree.h"
int size(Node_t* node)
{
	int lcount=0;
	int rcount=0;
	if(node == NULL)
		return 0;

	 lcount=size(node->left);
	 rcount=size(node->right);
	 
	return lcount+rcount+1;
}
int main()
{
	Node_t* root = NULL;
	maketree(&root);
	printf("%d\n",size(root));
//	inorder(root);
	return 1;
}
