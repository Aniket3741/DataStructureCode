#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};
int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(struct stack *ptr, int val)
{
    if (isFull(ptr))
    {
        printf("stack is overflow\n");
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}
int isEmpty(struct stack *ptr)
{
    if (ptr->top = -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void pop(struct stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("stack is under flow! cannot pop from the stack\n");
    }
    else
    {
        int val = ptr->arr[ptr->top];
    }
};
int main()
{
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->top = -1;
    sp->size = 10;
    sp->arr = (int *)malloc(sp->size * sizeof(int));
    printf("stack has been created successfully\n");
    printf("before pusing %d\n", isFull(sp));
    printf("before pusing %d\n", isEmpty(sp));
    push(sp, 34);
    push(sp, 35);
    push(sp, 36);
    push(sp, 37);
    push(sp, 38);
    push(sp, 39);
    // push(sp, 45);
    // push(sp, 41);
    // push(sp, 42);
    // push(sp, 43);
    // push(sp, 39);
    // push(sp, 45);
    // push(sp, 41);
    // push(sp, 42);
    // push(sp, 43);
    printf("after pusing %d\n", isFull(sp));
    printf("after pusing%d\n", isEmpty(sp));

    //check if stack is empty if (isEmpty(sp))
    if (isEmpty(sp))
    {
        printf("The Stack is Empty");
    }
    else
    {
        printf("The Stack is not Empty");
    }
    return 0;
}