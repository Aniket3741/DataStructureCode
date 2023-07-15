//  Write a program in C to insert a new node at the first of a doubly linked list.
// #include <stdio.h>
// #include <stdlib.h>
// struct node
// {
//     int data;
//     struct node *next;
//     struct node *prev;
// };
// void show(struct node *head, struct node *ptr)
// {
//     while (head != NULL)
//     {
//         printf("%d ", head->data);
//         head = head->next;
//     }
//     printf("\n");
//     while (ptr != NULL)
//     {
//         printf("%d ", ptr->data);
//         ptr = ptr->prev;
//     }
// }
// struct node *insert(struct node *head)
// {
//     struct node *ptr = (struct node *)malloc(sizeof(struct node));
//     ptr->next = head;
//     head->prev = ptr;
//     ptr->prev = NULL;
//     ptr->data = 9;
//     return ptr;
// }
// int main()
// {
//     int num, i, data;
//     printf("Enter your number of nodes : ");
//     scanf("%d", &num);
//     struct node *fnode, *temp, *head, *ptr;
//     head = (struct node *)malloc(sizeof(struct node));
//     printf("Enter your data : ");
//     scanf("%d", &data);
//     head->data = data;
//     temp = head;
//     head->next = NULL;
//     head->prev = NULL;
//     for (i = 1; i < num; i++)
//     {
//         fnode = (struct node *)malloc(sizeof(struct node));
//         scanf("%d", &data);
//         fnode->next = NULL;
//         fnode->data = data;
//         fnode->prev = temp;
//         temp->next = fnode;
//         temp = temp->next;
//     }
//     ptr = fnode;
//     show(head, ptr);
//     head = insert(head);
//     printf("\n\n");
//     show(head, ptr);
//     return 0;
// }


// Write a program in C to delete a node middle in a doubly linked list.
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
void show(struct node *head)
{
    while (head != NULL)
    {
        printf("%d ", head->data);
        head = head->next;
    }
}
struct node *insert(struct node *head, int num)
{
    struct node *p = head, *temp, *temp2;
    int i = 0;
    while (i != (num / 2) - 1)
    {
        p = p->next;
        i++;
    }
    temp2 = p->next->next;
    temp = p->next;
    p->next = temp->next;
    temp2->prev = p;
    free(temp);
    return head;
}
int main()
{
    int num, i, data;
    printf("Enter your number of nodes : ");
    scanf("%d", &num);
    struct node *fnode, *temp, *head, *ptr;
    head = (struct node *)malloc(sizeof(struct node));
    printf("Enter your data : ");
    scanf("%d", &data);
    head->data = data;
    temp = head;
    head->next = NULL;
    head->prev = NULL;
    for (i = 1; i < num; i++)
    {
        fnode = (struct node *)malloc(sizeof(struct node));
        scanf("%d", &data);
        fnode->next = NULL;
        fnode->data = data;
        fnode->prev = temp;
        temp->next = fnode;
        temp = temp->next;
    }
    show(head);
    head = insert(head, num);
    printf("\n\n");
    show(head);
    return 0;
}