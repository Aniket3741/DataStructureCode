#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int key;
    struct Node *left;
    struct Node *right;
    int height;
};
int getHeight(struct Node *n)
{
    if (n == NULL)
    {
        return 0;
    }
    else
    {
        return n->height;
    }
}
struct node *createNode(int key){
    struct Node* node=(struct Node*)malloc(sizeof(struct Node));
    node->key=key;
    node->right=NULL;
    node->left=NULL;
    node->height=1;
    return node;
}
int getBalanceFactor(struct node *n){
    if(n==NULL){
        return 0;
    }
    else{
        return getHeight(n->left)-getHeight(n->right);
    }
    struct Node* leftRotate(struct node *y){
        struct node* x=y->left;
        struct node* t2=x->right;

        x->right=y;
        y->left=t2;

        
    }
}