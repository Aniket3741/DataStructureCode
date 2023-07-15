#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *createnode(int data)
{
    struct node *n;
    n = (struct node *)malloc(sizeof(struct node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}
void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}
void preorder(struct node *root)
{
    if (root != NULL)
    {
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
void postorder(struct node *root)
{
    if (root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->data);
    }
}
int isBST(struct node *root)
{
    static struct node *prev = NULL;
    if (root != NULL)
    {
        if (!isBST(root->left))
        {
            return 0;
        }
        if (prev != NULL && root->data <= prev->data)
        {
            return 0;
        }
        prev = root;
        return isBST(root->right);
    }
    else
    {
        return 1;
    }
}
struct node *search(struct node *root, int key)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (key == root->data)
    {
        return root;
    }
    else if (key < root->data)
    {
        return search(root->left, key);
    }
    else
    {
        return search(root->right, key);
    }
}
//                            55
//                          /     \
//                       50       60
//                     /  \      /   \
//                    25   52   58     62
//                  /  \   / \  / \    /  \
//               12     28 51 54 56  59  61  100

int main()
{
    struct node *p = createnode(55);
    struct node *p2 = createnode(50);
    struct node *p3 = createnode(60);
    struct node *p4 = createnode(25);
    struct node *p5 = createnode(52);
    struct node *p6 = createnode(58);
    struct node *p7 = createnode(62);
    struct node *p8 = createnode(12);
    struct node *p9 = createnode(28);
    struct node *p10 = createnode(51);
    struct node *p11 = createnode(54);
    struct node *p12 = createnode(56);
    struct node *p13 = createnode(59);
    struct node *p14 = createnode(61);
    struct node *p15 = createnode(100);

    // linking the root node with left and right children
    p->left = p2;
    p->right =p3;
    p2->left=p4;
    p2->right=p5;
    p3->left=p6;
    p3->right=p7;
    p4->left=p8;
    p4->right=p9;
    p5->left=p10;
    p5->right=p11;
    p6->left=p12;
    p6->right=p13;
    p7->left=p14;
    p8->right=p15;

    inorder(p);
    printf("\n");
    preorder(p);
    printf("\n");
    postorder(p);
    printf("\n");

    struct node *n = search(p, 15);
    if (n != NULL)
    {
        printf("Found : %d", n->data);
    }
    else
    {
        printf("Element are not found");
    }
    return 0;
}