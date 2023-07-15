#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};
struct node *top = 0;
void push(int x)
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = x;
    newnode->link = top;
    top = newnode;
    newnode->link = 0;
}
// struct node*top=0;
void display()
{
    struct node *temp;
    temp = top;
    if (top == 0)
    {
        printf("list is empty");
    }
    else
    {
        while (temp != 0)
        {
            printf("%d", temp->data);
            temp = temp->link;
        }
    }
}
// struct node *top=0;
void peek()
{
    if (top == 0)
    {
        printf("stack is empty");
    }
    else
    {
        printf("Top element is %d", top->data);
    }
}
// struct node *top=0;
void pop()
{
    struct node *temp;
    temp = top;
    if (top == 0)
    {
        printf("underflow");
    }
    else
    {
        printf("%d", top->data);
        top = top->link;
        free(temp);
    }
}
int main()
{
    int choice = 1, value;
    while (choice)
    {
        printf("\nEnter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter your data : ");
            scanf("%d", &value);
            push(value);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            peek();
            break;
        case 0:
            choice = 0;
        }
    }
}