// #include <stdio.h>
// #define size 5
// int stack[size];
// int top = -1;
// void show()
// {
//     printf("your stack is : ");
//     for (int i = 0; i <= top; i++)
//     {
//         printf("%d ", stack[i]);
//     }
//     printf("\n");
// }
// int IsFull()
// {
//     if (top == size - 1)
//     {
//         return 1;
//     }
//     else
//     {
//         return 0;
//     }
// }
// int IsEmpty()
// {
//     if (top == -1)
//     {
//         return 1;
//     }
//     else
//     {
//         return 0;
//     }
// }
// void push(int value)
// {
//     if (IsFull())
//     {
//         printf("Stack is overflow!\n");
//     }
//     else
//     {
//         top++;
//         stack[top] = value;
//     }
// }
// void pop()
// {
//     if (IsEmpty())
//     {
//         printf("Stack is underflow!\n");
//     }
//     else
//     {
//         printf("Pop element is : %d", stack[top]);
//         top--;
//     }
// }
// int main() 
// {
//     int value, choice = 1;
//     printf("1) push\n2) Pop\n3) Display\n4) Exit\n");
//     while (choice)
//     {
//         printf("\nEnter your choice : ");
//         scanf("%d", &choice);
//         switch (choice)
//         {
//         case 1:
//             printf("Enter your value : ");
//             scanf("%d", &value);
//             push(value);
//             break;
//         case 2:
//             pop();
//             break;
//         case 3:
//             show();
//             break;
//         case 4:
//             choice = 0;
//             break;
//         }
//     }
//     return 0;
// }


#include<stdio.h>
#define size 5
int top=-1;
int stack[size];
void show(){
    printf("Your stack is");
    for(int i=0; i<=top; i++){
        printf("%d",stack[i]);
    }
    printf("\n");
}
int isFull(){
    if(top=size-1){
        return 1;
    }
    else{
        return 0;
    }
}
int isEmpty(){
    if(top==-1){
        return 0;
    }
    else{
        return 0;
    }
}
void push(int value){
    if(isFull){
        printf("stack is overflow");
    }
    else{
        top++;
        stack[top]=value;
    }
}
void pop(){
    if(isEmpty){
        printf("stack is underflow");
    }
    else{
        printf("pop element is %d",stack[top]);
        top--;
    }
}