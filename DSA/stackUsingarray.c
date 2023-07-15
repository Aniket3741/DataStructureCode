#include <stdio.h>
#define size 5
int stack[size];
int top = -1;

int isFull()
{
    if (top = size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isEmpty()
{
    if (top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void push()
{
    int x;
    printf("Enter data");
    scanf("%d", &x);

    if (top == size - 1)
    {
        printf("overflow");
    }
    else
    {
        top++;
        stack[top] = x;
    }
}

void pop()
{
    int item;
    if (top == -1)
    {
        printf("underflow");
    }
    else
    {
        item = stack[top];
        top--;
        printf("%d", item);
    }
}

void peek()
{
    if (top == -1)
    {
        printf("stack is empty");
    }
    else
    {
        printf("%d", stack[top]);
    }
}
void display()
{
    int i;
    for (i = top; i >= 0; i--)
    {
        printf("%d", stack[i]);
    }
    printf("\n");
}
void main()
{
    int value, choice = 1;
    printf("1 push\n2 pop\n3 peek\n4 display\n5 exit\n");
    while (choice)
    {
        printf("\nEnter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        case 5:
            choice = 0;
            break;
        }
    }
}