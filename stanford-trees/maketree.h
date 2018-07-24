#ifndef MAKETREE_H
#define MAKETREE_H

typedef struct Node
{
int data;
struct Node* left;
struct Node* right;
}Node_t;

void maketree(Node_t ** node);
void inorder(Node_t* node);

#endif
