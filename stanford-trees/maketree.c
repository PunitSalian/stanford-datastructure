#include<stdio.h>
#include<stdlib.h>
#include"maketree.h"

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
	insert(*node,90);
}


