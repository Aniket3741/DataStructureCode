//doublylinkedlist reverse, insertion, deletion
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head = NULL;
struct node *temp = NULL;
void show()
{
    struct node *ptr = head;
    if (ptr == NULL)
    {
        printf("NO Element : ");
    }
    else
    {
        while (ptr != NULL)
        {
            printf("%d", ptr->data);
            ptr = ptr->next;
        }
    }
    printf("\n");
}
void create(int data)
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    if (newnode == NULL)
    {
        printf("OverFlow");
    }
    else
    {
        newnode->data = data;
        newnode->next = NULL;
        if (head == NULL)
        {
            head = temp = newnode;
            newnode->prev = head;
            temp = newnode;
        }
    }
    printf("\n");
}
void delete ()
{
    if (head == NULL)
    {
        printf("underflow\n");
    }
    else if (head == temp)
    {
        head = temp = NULL;
    }
    else
    {
        struct node *p = head, *q = head->next;
        while (q->next != NULL)
        {
            q = q->next;
            p = p->next;
        }
        printf("Deleted value is : %d\n", q->data);
        p->next = NULL;
        q->prev = p;
        free(q);
        temp = p;
    }
}
void reverse()
{
    struct node *currnode, *nextnode;
    currnode = head;
    nextnode = currnode->prev = NULL;
    while (currnode != NULL)
    {
        nextnode = currnode->next;
        currnode->next = currnode->prev;
        currnode->prev = nextnode;
    }
    currnode = head;
    head = temp;
    temp = currnode;
    temp->next = nextnode;
}
int main()
{
    int data, choice;
    do
    {
        printf("Enter Your data : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case1:
            printf("Enter Your data : ");
            scanf("%d", &data);
            create(data);
            break;
        case2:
            delete ();
            break;
        case3:
            reverse();
            break;
        case4:
            show();
            break;
        }
    } while (choice);
    return 0;
}