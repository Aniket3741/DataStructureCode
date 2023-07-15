// #include <stdio.h>
// #include <stdlib.h>
// struct node
// {
//     int data;
//     struct node *left;
//     struct node *right;
// };
// struct node *CreatNode(int data)
// {
//     struct node *newnode;                                 // creating a node pointer
//     newnode = (struct node *)malloc(sizeof(struct node)); // Allocating memory in the heap
//     newnode->data = data;                                 // setting the data
//     newnode->left = NULL;                                 // setting the left children to NULL
//     newnode->right = NULL;                                // setting the right children to NULL
//     return newnode;                                       // finally returning the created node
// }
// void inorder(struct node *root)
// {
//     if (root != NULL)
//     {
//         inorder(root->left);
//         printf("%d ", root->data);
//         inorder(root->right);
//     }
// }
// void preOrder(struct node *root)
// {
//     if (root != NULL)
//     {
//         printf("%d", root->data);
//         preOrder(root->left);
//         preOrder(root->right);
//     }
// }
// void postOrder(struct node *root)
// {
//     if (root != NULL)
//     {
//         postOrder(root->left);
//         postOrder(root->right);
//         printf("%d", root->data);
//     }
// }
// int main()
// {
//     // constructing the root node
//     struct node *RootNode = CreatNode(10);
//     struct node *newnode2 = CreatNode(5);
//     struct node *newnode3 = CreatNode(13);

//     // linking the root node with left and right children
//     RootNode->left = newnode2;
//     RootNode->right = newnode3;

//     inorder(RootNode);
//     preOrder(RootNode);
//     postOrder(RootNode);
//     return 0;
// }

// is BST or not
// #include <stdio.h>
// #include <malloc.h>

// struct node
// {
//     int data;
//     struct node *left;
//     struct node *right;
// };

// struct node *createNode(int data)
// {
//     struct node *n;                                 // creating a node pointer
//     n = (struct node *)malloc(sizeof(struct node)); // Allocating memory in the heap
//     n->data = data;                                 // Setting the data
//     n->left = NULL;                                 // Setting the left and right children to NULL
//     n->right = NULL;                                // Setting the left and right children to NULL
//     return n;                                       // Finally returning the created node
// }

// void preOrder(struct node *root)
// {
//     if (root != NULL)
//     {
//         printf("%d ", root->data);
//         preOrder(root->left);
//         preOrder(root->right);
//     }
// }

// void postOrder(struct node *root)
// {
//     if (root != NULL)
//     {
//         postOrder(root->left);
//         postOrder(root->right);
//         printf("%d ", root->data);
//     }
// }

// void inOrder(struct node *root)
// {
//     if (root != NULL)
//     {
//         inOrder(root->left);
//         printf("%d ", root->data);
//         inOrder(root->right);
//     }
// }

// int isBST(struct node *root)
// {
//     static struct node *prev = NULL;
//     if (root != NULL)
//     {
//         if (!isBST(root->left))
//         {
//             return 0;
//         }
//         if (prev != NULL && root->data <= prev->data)
//         {
//             return 0;
//         }
//         prev = root;
//         return isBST(root->right);
//     }
//     else  
//     {
//         return 1;
//     }
// }
// int main()
// {

//     // Constructing the root node - Using Function (Recommended)
//     struct node *p = createNode(5);
//     struct node *p1 = createNode(3);
//     struct node *p2 = createNode(6);
//     struct node *p3 = createNode(1);
//     struct node *p4 = createNode(4);
//     // Finally The tree looks like this:
//     //      5
//     //     / \
//     //    3   6
//     //   / \
//     //  1   4

//     // Linking the root node with left and right children
//     p->left = p1;
//     p->right = p2;
//     p1->left = p3;
//     p1->right = p4;

//     // preOrder(p);
//     // printf("\n");
//     // postOrder(p);
//     // printf("\n");
//     inOrder(p);
//     printf("\n");
//     // printf("%d", isBST(p));
//     if (isBST(p))
//     {
//         printf("This is a bst");
//     }
//     else
//     {
//         printf("This is not a bst");
//     }
//     return 0;
// }

// //for searching
// #include<stdio.h>
// #include<malloc.h>

// struct node{
//     int data;
//     struct node* left;
//     struct node* right;
// };

// struct node* createNode(int data){
//     struct node *n; // creating a node pointer
//     n = (struct node *) malloc(sizeof(struct node)); // Allocating memory in the heap
//     n->data = data; // Setting the data
//     n->left = NULL; // Setting the left and right children to NULL
//     n->right = NULL; // Setting the left and right children to NULL
//     return n; // Finally returning the created node
// }

// void preOrder(struct  node* root){
//     if(root!=NULL){
//         printf("%d ", root->data);
//         preOrder(root->left);
//         preOrder(root->right);
//     }
// }

// void postOrder(struct  node* root){
//     if(root!=NULL){
//         postOrder(root->left);
//         postOrder(root->right);
//         printf("%d ", root->data);
//     }
// }

// void inOrder(struct  node* root){
//     if(root!=NULL){
//         inOrder(root->left);
//         printf("%d ", root->data);
//         inOrder(root->right);
//     }
// }

// int isBST(struct  node* root){
//     static struct node *prev = NULL;
//     if(root!=NULL){
//         if(!isBST(root->left)){
//             return 0;
//         }
//         if(prev!=NULL && root->data <= prev->data){
//             return 0;
//         }
//         prev = root;
//         return isBST(root->right);
//     }
//     else{
//         return 1;
//     }
// }

// struct node * search(struct node* root, int key){
//     if(root==NULL){
//         return NULL;
//     }
//     if(key==root->data){
//         return root;
//     }
//     else if(key<root->data){
//         return search(root->left, key);
//     }
//     else{
//         return search(root->right, key);
//     }
// }

// int main(){

//     // Constructing the root node - Using Function (Recommended)
//     struct node *p = createNode(5);
//     struct node *p1 = createNode(3);
//     struct node *p2 = createNode(6);
//     struct node *p3 = createNode(1);
//     struct node *p4 = createNode(4);
//     // Finally The tree looks like this:
//     //      5
//     //     / \
//     //    3   6
//     //   / \
//     //  1   4

//     // Linking the root node with left and right children
//     p->left = p1;
//     p->right = p2;
//     p1->left = p3;
//     p1->right = p4;

//     struct node* n = search(p, 3);
//     if(n!=NULL){
//     printf("Found: %d", n->data);
//     }
//     else{
//         printf("Element not found");
//     }
//     return 0;
// }

// Iterative Search in a Binary Search Tree
//  #include<stdio.h>
//  #include<malloc.h>

// struct node{
//     int data;
//     struct node* left;
//     struct node* right;
// };

// struct node* createNode(int data){
//     struct node *n; // creating a node pointer
//     n = (struct node *) malloc(sizeof(struct node)); // Allocating memory in the heap
//     n->data = data; // Setting the data
//     n->left = NULL; // Setting the left and right children to NULL
//     n->right = NULL; // Setting the left and right children to NULL
//     return n; // Finally returning the created node
// }

// void preOrder(struct  node* root){
//     if(root!=NULL){
//         printf("%d ", root->data);
//         preOrder(root->left);
//         preOrder(root->right);
//     }
// }

// void postOrder(struct  node* root){
//     if(root!=NULL){
//         postOrder(root->left);
//         postOrder(root->right);
//         printf("%d ", root->data);
//     }
// }

// void inOrder(struct  node* root){
//     if(root!=NULL){
//         inOrder(root->left);
//         printf("%d ", root->data);
//         inOrder(root->right);
//     }
// }

// int isBST(struct  node* root){
//     static struct node *prev = NULL;
//     if(root!=NULL){
//         if(!isBST(root->left)){
//             return 0;
//         }
//         if(prev!=NULL && root->data <= prev->data){
//             return 0;
//         }
//         prev = root;
//         return isBST(root->right);
//     }
//     else{
//         return 1;
//     }
// }

// struct node * searchIter(struct node* root, int key){
//     while(root!=NULL){
//         if(key == root->data){
//             return root;
//         }
//         else if(key<root->data){
//             root = root->left;
//         }
//         else{
//             root = root->right;
//         }
//     }
//     return NULL;
// }

// int main(){

//     // Constructing the root node - Using Function (Recommended)
//     struct node *p = createNode(5);
//     struct node *p1 = createNode(3);
//     struct node *p2 = createNode(6);
//     struct node *p3 = createNode(1);
//     struct node *p4 = createNode(4);
//     // Finally The tree looks like this:
//     //      5
//     //     / \
//     //    3   6
//     //   / \
//     //  1   4

//     // Linking the root node with left and right children
//     p->left = p1;
//     p->right = p2;
//     p1->left = p3;
//     p1->right = p4;

//     struct node* n = searchIter(p, 6);
//     if(n!=NULL){
//     printf("Found: %d", n->data);
//     }
//     else{
//         printf("Element not found");
//     }
//     return 0;
// }

// Insertion in a Binary Search Tree
// #include <stdio.h>
// #include <malloc.h>

// struct node
// {
//     int data;
//     struct node *left;
//     struct node *right;
// };

// struct node *createNode(int data)
// {
//     struct node *n;                                 // creating a node pointer
//     n = (struct node *)malloc(sizeof(struct node)); // Allocating memory in the heap
//     n->data = data;                                 // Setting the data
//     n->left = NULL;                                 // Setting the left and right children to NULL
//     n->right = NULL;                                // Setting the left and right children to NULL
//     return n;                                       // Finally returning the created node
// }

// void preOrder(struct node *root)
// {
//     if (root != NULL)
//     {
//         printf("%d ", root->data);
//         preOrder(root->left);
//         preOrder(root->right);
//     }
// }

// void postOrder(struct node *root)
// {
//     if (root != NULL)
//     {
//         postOrder(root->left);
//         postOrder(root->right);
//         printf("%d ", root->data);
//     }
// }

// void inOrder(struct node *root)
// {
//     if (root != NULL)
//     {
//         inOrder(root->left);
//         printf("%d ", root->data);
//         inOrder(root->right);
//     }
// }

// int isBST(struct node *root)
// {
//     static struct node *prev = NULL;
//     if (root != NULL)
//     {
//         if (!isBST(root->left))
//         {
//             return 0;
//         }
//         if (prev != NULL && root->data <= prev->data)
//         {
//             return 0;
//         }
//         prev = root;
//         return isBST(root->right);
//     }
//     else
//     {
//         return 1;
//     }
// }

// struct node *searchIter(struct node *root, int key)
// {
//     while (root != NULL)
//     {
//         if (key == root->data)
//         {
//             return root;
//         }
//         else if (key < root->data)
//         {
//             root = root->left;
//         }
//         else
//         {
//             root = root->right;
//         }
//     }
//     return NULL;
// }

// void insert(struct node *root, int key)
// {
//     struct node *prev = NULL;
//     while (root != NULL)
//     {
//         prev = root;
//         if (key == root->data)
//         {
//             printf("Cannot insert %d, already in BST", key);
//             return;
//         }
//         else if (key < root->data)
//         {
//             root = root->left;
//         }
//         else
//         {
//             root = root->right;
//         }
//     }
//     struct node *new = createNode(key);
//     if (key < prev->data)
//     {
//         prev->left = new;
//     }
//     else
//     {
//         prev->right = new;
//     }
// }

// int main()
// {

//     // Constructing the root node - Using Function (Recommended)
//     struct node *p = createNode(5);
//     struct node *p1 = createNode(3);
//     struct node *p2 = createNode(6);
//     struct node *p3 = createNode(1);
//     struct node *p4 = createNode(4);
//     // Finally The tree looks like this:
//     //      5
//     //     / \
//     //    3   6
//     //   / \
//     //  1   4

//     // Linking the root node with left and right children
//     p->left = p1;
//     p->right = p2;
//     p1->left = p3;
//     p1->right = p4;

//     insert(p, 9);
//     printf("%d", p->right->right->data);
//     return 0;
// }

// Deletion in a Binary Search Tree
// #include <stdio.h>
// #include <malloc.h>

// struct node
// {
//     int data;
//     struct node *left;
//     struct node *right;
// };

// struct node *createNode(int data)
// {
//     struct node *n;                                 // creating a node pointer
//     n = (struct node *)malloc(sizeof(struct node)); // Allocating memory in the heap
//     n->data = data;                                 // Setting the data
//     n->left = NULL;                                 // Setting the left and right children to NULL
//     n->right = NULL;                                // Setting the left and right children to NULL
//     return n;                                       // Finally returning the created node
// }

// void preOrder(struct node *root)
// {
//     if (root != NULL)
//     {
//         printf("%d ", root->data);
//         preOrder(root->left);
//         preOrder(root->right);
//     }
// }

// void postOrder(struct node *root)
// {
//     if (root != NULL)
//     {
//         postOrder(root->left);
//         postOrder(root->right);
//         printf("%d ", root->data);
//     }
// }

// void inOrder(struct node *root)
// {
//     if (root != NULL)
//     {
//         inOrder(root->left);
//         printf("%d ", root->data);
//         inOrder(root->right);
//     }
// }

// int isBST(struct node *root)
// {
//     static struct node *prev = NULL;
//     if (root != NULL)
//     {
//         if (!isBST(root->left))
//         {
//             return 0;
//         }
//         if (prev != NULL && root->data <= prev->data)
//         {
//             return 0;
//         }
//         prev = root;
//         return isBST(root->right);
//     }
//     else
//     {
//         return 1;
//     }
// }

// struct node *searchIter(struct node *root, int key)
// {
//     while (root != NULL)
//     {
//         if (key == root->data)
//         {
//             return root;
//         }
//         else if (key < root->data)
//         {
//             root = root->left;
//         }
//         else
//         {
//             root = root->right;
//         }
//     }
//     return NULL;
// }

// void insert(struct node *root, int key)
// {
//     struct node *prev = NULL;
//     while (root != NULL)
//     {
//         prev = root;
//         if (key == root->data)
//         {
//             printf("Cannot insert %d, already in BST", key);
//             return;
//         }
//         else if (key < root->data)
//         {
//             root = root->left;
//         }
//         else
//         {
//             root = root->right;
//         }
//     }
//     struct node *new = createNode(key);
//     if (key < prev->data)
//     {
//         prev->left = new;
//     }
//     else
//     {
//         prev->right = new;
//     }
// }

// struct node *inOrderPredecessor(struct node *root)
// {
//     root = root->left;
//     while (root->right != NULL)
//     {
//         root = root->right;
//     }
//     return root;
// }

// struct node *deleteNode(struct node *root, int value)
// {

//     struct node *iPre;
//     if (root == NULL)
//     {
//         return NULL;
//     }
//     if (root->left == NULL && root->right == NULL)
//     {
//         free(root);
//         return NULL;
//     }

//     // searching for the node to be deleted
//     if (value < root->data)
//     {
//         root->left = deleteNode(root->left, value);
//     }
//     else if (value > root->data)
//     {
//         root->right = deleteNode(root->right, value);
//     }
//     // deletion strategy when the node is found
//     else
//     {
//         iPre = inOrderPredecessor(root);
//         root->data = iPre->data;
//         root->left = deleteNode(root->left, iPre->data);
//     }
//     return root;
// }

// int main()
// {

//     // Constructing the root node - Using Function (Recommended)
//     struct node *p = createNode(5);
//     struct node *p1 = createNode(3);
//     struct node *p2 = createNode(6);
//     struct node *p3 = createNode(1);
//     struct node *p4 = createNode(4);
//     // Finally The tree looks like this:
//     //      5
//     //     / \
//     //    3   6
//     //   / \
//     //  1   4

//     // Linking the root node with left and right children
//     p->left = p1;
//     p->right = p2;
//     p1->left = p3;
//     p1->right = p4;

//     inOrder(p);
//     printf("\n");
//     deleteNode(p, 5);
//     inOrder(p);

//     return 0;
// }







#include<stdio.h>
#include<malloc.h>
struct node{
    int data;
    struct node *left;
    struct node *right;
};
struct node *createNode(int data){
    struct node *n;
    n=(struct node *)malloc(sizeof(struct node));
    n->data=data;
    n->left=NULL;
    n->right=NULL;
    return n;
}
void inorder(struct node *root){
    if(root!=NULL){
        inorder(root->left);
        printf("%d",root->data);
        inorder(root->right);
    }
}
void preorder(struct node *root){
    if(root!=NULL){
        printf("%d",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
void postorder(struct node *root){
    if(root!=NULL){
        postorder(root->left);
        postorder(root->right);
        postorder("%d",root->data);
    }
}
int isBST(struct node *root){
    static struct node *prev=NULL;
    if(root!=NULL){
        if(!isBST(root->left)){
            return 0;
        }
        if(prev!=NULL && root->data<=prev->data){
            return 0;
        }
        prev=root;
        return isBST(root->right);
    }
    else{
        return 1;
    }
}

int main(){
    struct node *p = createNode(5);
    struct node *p1 = createNode(3);
    struct node *p2 = createNode(6);
    struct node *p3 = createNode(1);
    struct node *p4 = createNode(4);
}
int main()
{

    // Constructing the root node - Using Function (Recommended)
    struct node *p = createNode(5);
    struct node *p1 = createNode(3);
    struct node *p2 = createNode(6);
    struct node *p3 = createNode(1);
    struct node *p4 = createNode(4);
    
    p->left=p1;
    p->right=p2;
    p1->left=p3;
    p1->right=p4;

    inorder(p);
    printf("\n");
    preorder(p);
    printf("\n");
    postorder("\n");
    printf("\n");

    if(isBST(p)){
        printf("This is BST");
    }
    else{
        printf("This is not BST");
    }
    return 0;
    
}
