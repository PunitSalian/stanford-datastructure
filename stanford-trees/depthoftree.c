
#include<stdio.h>
#include"maketree.h"



int depth(Node_t* node)
{
	int ldepth,rdepth=0;
	if(node == NULL)
		return 0;


	ldepth=depth(node->left)+1;

	rdepth=depth(node->right)+1;
	
	if(ldepth>rdepth)
	{
		return ldepth;
	}	
		

	return rdepth;
}

int main()
{
	Node_t* root = NULL;
	maketree(&root);
	printf("depth %d \n",depth(root));
	return 1; 
}
