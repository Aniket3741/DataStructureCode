#include<stdio.h>
#define size 4
int stack[size];
int top=-1;

void display(){
    printf("Enter Your stack\n");
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
void push(int value){
    if(isFull){
        printf("stack is overflow");
    }
    else{
        top++;
        stack[top]=value;
    }
}
int isEmpty(){
    if(top=-1){
        return 1;
    }
    else{
        return 0;
    }
}
void pop(){
    if(isEmpty){
        printf("stack is underFlow");
    }
    else{
        printf("Element is %d",stack[top]);
        top--;
    }
}
int main(){
    int value, choice=-1;
    printf("1)push2)pop\n3)display\n4)exist");
    while(choice){
        printf("Enter Your choice");
        scanf("%d "&choice);
        switch(choice){
            
        }
    }
}
int main()
{
    int value, choice = 1;
    printf("1)push\n2)pop\n3)display\n4)exist\n");
    while (choice)
    {
        printf("Enter Your choice");
        scanf("%d", &choice);
        switch (choice)
        {
        case1:
            printf("Enter Your value");
            scanf("%d", &value);
            push(value);
            break;
        case2:
            pop();
            break;
        case3:
            display();
            break;
        case4:
            choice = 0;
            break;
        }
    }
    return 0;
}