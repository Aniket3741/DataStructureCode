#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void show(struct node *head)
{
    struct node *ptr = head;
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}
int main()
{
    int size, data;
    printf("Enter your size of linked list : ");
    scanf("%d", &size);
    struct node *head, *temp, *fnode;
    head = (struct node *)malloc(sizeof(struct node));
    printf("Enter your data : ");
    scanf("%d", &data);
    head->data = data;
    temp = head;
    head->next = NULL;
    for (int i = 1; i < size; i++)
    {
        fnode = (struct node *)malloc(sizeof(struct node));
        scanf("%d", &data);
        fnode->data = data;
        temp->next = fnode;
        fnode->next = NULL;
        temp = temp->next;
    }
    printf("Your Linked list is : ");
    show(head);
    return 0;
}