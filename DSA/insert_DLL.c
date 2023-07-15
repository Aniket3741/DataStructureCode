#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head, *tail;
void createDLL()
{
    struct node *newnode, head = 0;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter Your data : ");
    scanf("%d", newnode->data);
    newnode->prev = 0;
    newnode->next = 0;
    if (head == 0)
    {
        head = tail = newnode;
    }
    else
    {
        tail->next = newnode;
        newnode->prev = tail;
        tail = newnode;
    }
}

// // insert at beg
// #include <stdio.h>
// #include <stdlib.h>
// struct node
// {
//     int data;
//     struct node *next;
//     struct node *prev;
// };
// struct node *head = NULL;
// struct node *tail = NULL;
// void *insertatbeg
// {
//     struct node newnode;
//     newnode = (struct node *)malloc(sizeof(struct node));
//     printf("Enter Your data : ");
//     scanf("%d", &newnode->data);
//     newnode->next = 0;
//     newnode->prev = 0;

//     head->prev = newnode;
//     newnode->next = head;
//     head = newnode;
// }
// void Display()
// {
//     struct node *ptr = head;
//     while (ptr != NULL)
//     {
//         printf("%d ", ptr->data);
//         ptr = ptr->next;
//     }
// }
// int main()
// {
//     int ch;
//     do
//     {
//         printf("1) Ensert\n2) Display\n0) stop\n");
//         printf("Enter your choice : ");
//         scanf("%d", &ch);
//         switch (expression)
//         {
//         case 1:
//             insertatbeg();
//             break;
//         case 2:
//             Display();
//             break;
//         default:
//             break;
//         }

//     } while (ch);
// }

// #include <stdio.h>
// #include <stdlib.h>
// struct node
// {
//     int data;
//     struct node *next;
//     struct node *prev;
// };
// struct node *head;
// struct node *tail;
// void insertatend
// {
//     struct node *newnode;
//     newnode = (struct node *)malloc(sizeof(struct node));
//     printf("Enter Your Data : ");
//     scanf("%d", &newnode->next);
//     newnode->next = 0;
//     newnode->prev = 0;

//     tail->next = newnode;
//     newnode->prev = tail;
//     tail = newnode;
// }

// // insert at pos
// #include <stdio.h>
// #include <stdlib.h>
// struct node
// {
//     int data;
//     struct node *next;
//     struct node *prev;
// };
// struct node *head;
// struct node *tail;
// void insertAtposition
// {
//     int pos;
//     int i = 1;
//     printf("Enter Your position : ");
//     scanf("%d", &pos);
//     if (pos < 1 && pos > 1)
//     {
//         invalid position;
//     }
//     else if (pos == 1)
//     {
//         head->prev = newnode;
//         newnode->next = head;
//         head = newnode;
//     }
//     else
//     {
//         struct node *newnode, *temp;
//         newnode = (struct node *)malloc(sizeof(struct node));
//         printf("Enter Your data : ");
//         scanf("%d", &newnode->data);
//         while (i < pos - 1)
//         {
//             temp = temp->next;
//             i++;
//         }

//         newnode = temp->next;

//         newnode->prev = temp;
//         newnode->next = temp->next;
//         temp->next = newnode;
//         newnode->next->prev = newnode;
//         nextnode = temp->next;
//     }
// }

// // insert after pos
// #include <stdio.h>
// #include <stdlib.h>
// struct node
// {
//     int data;
//     struct node *next;
//     struct node *prev;
// };
// struct node *next;
// struct node *prev;
// void inserAfterpos
// {
//     int pos;
//     printf("Enter Your Pos : ");
//     scanf("%d", &pos);

//     if (pos < 1 && pos > 1)
//     {
//         invalid position;
//     }
//     else
//     {
//         struct node *newnode;
//         newnode = (struct node *)malloc(sizeof(structnode));
//         printf("Enter Your data : ");
//         scanf("%d", &newnode->data);
//         while(i<pos){
//             temp=temp->next;
//             i++;
//         }
//         newnode->prev=temp;
//         newnode->next=temp->next;
//         temp->next=newnode;
//         newnode->next->prev=newnode;
//     }
// }
