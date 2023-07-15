#include <stdio.h>
#define size 5
int queue[5];
int front = -1;
int rear = -1;
void enqueue(int x)
{
    if (rear == size - 1)
    {
        printf("overFlow");
    }
    else if (front == -1 && rear == -1)
    {
        front = rear = 0;
        queue[rear] = x;
    }
    else
    {
        rear++;
        queue[rear] = x;
    }
}
void dequeue()
{
    if (front == -1 && rear == -1)
    {
        printf("underFlow");
    }
    else if (front == rear)
    {
        front == rear == -1;
    }
    else
    {
        printf("Pop value is : %d\n", queue[front]);
        front++;
    }
}
void display()
{
    int i;
    if (front == -1 && rear == -1)
    {
        printf("Empty");
    }
    else
    {
        printf("Your Queue is : ");
        for (i = front; i < rear + 1; i++)
        {
            printf("%d ", queue[i]);
        }
    }
    printf("\n");
}
void peek()
{
    int i;
    if (front == -1 && rear == -1)
    {
        printf("Empty");
    }
    else
    {
        printf("The data at front is %d", queue[front]);
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