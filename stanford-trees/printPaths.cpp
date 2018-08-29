#include<stdio.h>
#include "maketree.h"
#include<iostream>
#include<vector>
using namespace std;


void print_vector()
{



}

void printPaths(Node_t * node, vector<int> &temp)
{
	
	if(node == NULL)
		return;

	temp.push_back(node->data);


	if((node->left == NULL) && (node->right == NULL))
	{
		for(int i=0 ; i< temp.size();i++)
			cout<<temp[i]<<" ";
		
		temp.pop_back();

		cout <<endl;
	}
	else
	{

		printPaths(node->left, temp);

		printPaths(node->right, temp);	
	}
}


int main(void)
{
	vector<int> v;

	Node_t *root = NULL;

	maketree(&root);
	
	printPaths(root,v);


	return 1;
}
