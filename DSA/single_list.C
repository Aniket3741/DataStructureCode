#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;
struct node *temp = NULL;

int create()
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the number = ");
    scanf("%d",&newnode->data);
    if (head == NULL)
    {
        head = temp = newnode;
        newnode->next = NULL;
    }
    else
    {
        temp->next = newnode;
        temp = newnode;
        newnode->next = NULL;
    }
}

int display()
{
    struct node *AB;
    AB = head;
    if (AB == NULL)
    {
        printf("List is Empty");
    }
    else
    {
        while (AB != NULL)
        {
            printf("%d ", AB->data);
            AB = AB->next;
        }
    }
}

int frontdelete()
{
    //1struct node *temp;
    temp = head;
    head = head->next;
    free(temp);
}

int main()
{
    int a = 1;
    printf("1.create\n2.display\n3.front delete");
    do
    {
        printf("\nEnter the choice = ");
        scanf("%d", &a);
        switch (a)
        {
        case 1:
            create();
            break;
        case 2:
            display();
            break;
        case 3:
            frontdelete();
            break;
        default:
            printf("Enter the valid choice");
        }

    } while (a);
}
