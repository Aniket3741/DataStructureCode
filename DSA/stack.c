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
void push(struct stack *ptr, int value)
{
    if (isFull(ptr))
    {
        printf("stack is overflow\n", value);
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = value;
    }
}

int main()
{
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size = 10;
    sp->top = -1;
    sp->arr = (int *)malloc(sp->size * (sizeof(int)));
    printf("stack has been created successfully");

    printf("before %d\n", isFull(sp));
    printf("before%d\n", isEmpty(sp));
    push(sp, 56);
    push(sp, 56);
    push(sp, 56);
    push(sp, 56);
    push(sp, 56);
    push(sp, 56);
    push(sp, 56);
    push(sp, 56);
    push(sp, 56);
    push(sp, 56);
    printf("after %d\n", isFull(sp));
    printf("after%d\n", isEmpty(sp));

    return 0;
}