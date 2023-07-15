#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *front = 0;
struct node *rear = 0;

void enqueue(int x)
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = x;
    newnode->next = 0;
    if (front == 0 && rear == 0)
    {
        front = rear = newnode;
    }
    else
    {
        rear->next = newnode;
        rear = newnode;
    }
}

void display()
{
    struct node *temp;
    if (front == 0 && rear == 0)
    {
        printf("queue is empty\n");
    }
    else
    {
        printf("Your Queue is : ");
        temp = front;
        while (temp != 0)
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
    }
    printf("\n");
}

void dequeue()
{
    struct node *temp;
    temp = front;
    if (front == 0 && rear == 0)
    {
        printf("queue is empty");
    }
    else
    {
        printf("%d", front->data);
        front = front->next;
        free(temp);
    }
}
void peek()
{
    if (front == 0 && rear == 0)
    {
        printf("queue is empty");
    }
    else
    {
        printf("%d", front->data);
    }
}
int main()
{
    int choice = 1, value;
    printf("1) Enqueue\n2) Dequeue\n3) Display\n4) Peek\n5) Exit\n");
    while (choice)
    {
        printf("\nEnter your choice : ");
        scanf("%d", &choice);
        switch ((choice))
        {
        case 1:
            printf("Enter your number : ");
            scanf("%d", &value);
            enqueue(value);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            peek();
            break;
        case 5:
            choice = 0;
            break;
        }
    }
}