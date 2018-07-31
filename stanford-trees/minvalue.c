#include<stdio.h>
#include"maketree.h"


int minValue(Node_t* node)
{
	if(node->left == NULL)
		 return node->data;
	

	return minValue(node->left);
}

int  main()
{
	Node_t * root =NULL;

	maketree(&root);

	printf("%d \n",minValue(root));
	
	return 1;
}
