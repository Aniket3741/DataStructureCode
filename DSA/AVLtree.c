// #include <stdio.h>
// #include <stdlib.h>
// struct node
// {
//     int key;
//     struct node *left;
//     struct node *right;
//     int height;
// };

// int getHeight(struct node *n)
// {
//     if (n = NULL)
//     {
//         return 0;
//     }
//     else
//     {
//         return n->height;
//     }
// }
// struct node *createNode(int data)
// {
//     struct node *n = (struct node *)malloc(sizeof(struct node));
//     node->key = key;
//     node->left = NULL;
//     node->right = NULL;
//     node->height = 1;

//     return node;
// }
// int getBalanceFactor(struct Node *n)
// {
//     if (n == NULL)
//     {
//         return 0;
//     }
//     return getHeight(n->left) - getHeight(n->right);
// }
// struct Node *rightRotate(struct node *y)
// {
//     struct Node *x = y->left;
//     struct Node *T2 = x->right;

//     x->right = y;
//     y->left = T2;

//     y->height = max(getHeight(y->right), getHeight(y->left)) + 1;
//     x->height = max(getHeight(x->right), getHeight(x->left)) + 1;

//     return x;
// }
// struct Node *leftRotate(struct node *x)
// {
//     struct Node *y = x->left;
//     struct Node *T2 = y->right;

//     y->left = x;
//     x->left = T2;

//     y->height = max(getHeight(y->right), getHeight(y->left)) + 1;
//     x->height = max(getHeight(x->right), getHeight(x->left)) + 1;

//     return y;
// }
// struct node *insert(struct Node *node, int key)
// {
//     if (node == NULL)
//         return (createNode(key));

//     if (key < node->key)
//     {
//         node->left = insert(node->left, key);
//     }
//     else if (key > node->key)
//         node->right = insert(node->right, key);
//     return node;

//     node->height = 1 + max(getheight(node->left), getheight(node->right));
//     int bf = getBalanceFactor(node);

//     // left left case
//     // right right case
//     // right left case
// }
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
    int height;
};
int getHeight(struct node *n)
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
struct node *createNode(int key)
{
    struct Node *node = (struct node *)malloc(sizeof(struct node));
    node->key = key;
    node->left = NULL;
    node->right = NULL;
    node->height = 1;

    return node;
}
int getBalanceFactorHeight(struct node *n)
{
    if (n == NULL)
    {
        return 0;
    }
    else
    {
        return getHeight(n->left) - getHeight(n->right);
    }
}
struct node *rightRotate(struct node *y)
{
    struct node *x = y->left;
    struct node *T2 = x->right;

    x->right = y;
    y->left = T2;

    y->height = max(getHeight(y->right), getHeight(y->left)) + 1;
    x->height = max(getHeight(x->right), getHeight(x->left)) + 1;

    return x;
}
struct node *leftRotate(struct node *x)
{
    struct node *y = x->right;
    struct node *T2 = y->left;

    y->left = x;
    x->right = T2;

    y->height = max(getHeight(y->right), getHeight(y->left)) + 1;
    x->height = max(getHeight(x->right), getHeight(x->left)) + 1;

    return y;
}
struct Node *insert(struct node *node, int key)
{
    if (node == NULL)
        return (createNode(key));

    if (key < node->key)
    {
        node->left = insert(node->left, key);
    }
    else
    {
        node->right = insert(node->right, key);
        return node;
    }
    node->height = 1 + max(getHeight(node->left), getheight(node->right));
    int bf = getBalancedFactor(node);

    // left left case
    if (bf > 1 && key < node->left->key)
    {
        return rightRotate(node);
    }
    // right right case
    if (bf < -1 && key > node->right->key)
    {
        return leftRotate(node);
    }
    // left right case
    if (bf > 1 && key > node->left->key)
    {
        node->left = leftRotate(node->left);
        return rightRotate(node);
    }

    // right left caase
    if (bf > 1 && key < node->left->key)
    {
        node->right = rightRotate(node->rightt);
        return leftRotate(node);
    }
    return node;
}
int main()
{
    struct node *root = NULL;
    root = insert(root, 45);
    root = insert(root, 4);
    root = insert(root, 5);
    root = insert(root, 8);
    root = insert(root, 9);

    return 0;
}