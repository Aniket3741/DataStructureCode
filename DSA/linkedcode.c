#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
void linkedListTraversal(struct Node *ptr){
    while(ptr!=0){
        printf("Element : %d\n",ptr->data);
        ptr=ptr->next;
    }
}
int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    // allocate memory for node in the linked list in heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    // link first and second node
    head->data = 7;
    head->next = second;

    // link second and third node
    second->data = 15;
    second->next = third;

    // link third and fouth node
    third->data = 21;
    third->next = fourth;

    // Terminated the list at the third node
    fourth->data = 37;
    fourth->next = NULL;

    linkedListTraversal(head);
    return 0;
}

// #include <stdio.h>
// #include <stdlib.h>
// struct node
// {
//     int data;
//     struct node *next;
// };
// void linkedlistTraversal(struct node *ptr)
// {
//     while (ptr != 0)
//     {
//         printf("Element %d\n",ptr->data);
//         ptr = ptr->next;
//     }
// }
// int main()
// {
//     struct node *head;
//     struct node *second;
//     struct node *third;
//     struct node *fourth;

//     // linked list first node and second node
//     head->data = 12;
//     head->next = second;

//     // linked list second node and third node
//     second->data = 13;
//     second->next = third;

//     // linked list third node and fourth node
//     third->data = 15;
//     third->next = fourth;

//     // Terminate the fourth node
//     fourth->data = 17;
//     fourth->next = NULL;

//     linkedlistTraversal(head);
//     return 0;
// }



// Insertion at first linked list
// #include <stdio.h>
// #include <stdlib.h>
// struct Node
// {
//     int data;
//     struct Node *next;
// };
// void linkedListTraversal(struct Node *ptr)
// {
//     while (ptr != NULL)
//     {
//         printf("Element : %d\n", ptr->data);
//         ptr = ptr->next;
//     }
// }

// struct Node *insertAtFirst(struct Node *head, int data)
// {
//     struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
//     ptr->next = head;
//     ptr->data = data;
//     return ptr;
// }
// int main()
// {
// struct Node *head;
// struct Node *second;
// struct Node *third;
// struct Node *fourth;

// // allocate memory for node in the linked list in heap
// head = (struct Node *)malloc(sizeof(struct Node));
// second = (struct Node *)malloc(sizeof(struct Node));
// third = (struct Node *)malloc(sizeof(struct Node));
// fourth = (struct Node *)malloc(sizeof(struct Node));

// // link first and second node
// head->data = 7;
// head->next = second;

// // link second and third node
// second->data = 15;
// second->next = third;

//     // link third and fouth node
//     third->data = 21;
//     third->next = fourth;

//     // Terminated the list at the third node
//     fourth->data = 37;
//     fourth->next = NULL;

//     linkedListTraversal(head);
//     head = insertAtFirst(head, 19);
//     linkedListTraversal(head);
//     return 0;
// }

// insert at b\w
// #include <stdio.h>
// #include <stdlib.h>
// struct Node
// {
//     int data;
//     struct Node *next;
// };
// void linkedListTraversal(struct Node *ptr)
// {
//     while (ptr != NULL)
//     {
//         printf("Element : %d\n", ptr->data);
//         ptr = ptr->next;
//     }
// }

// struct Node *insertAtFirst(struct Node *head, int data)
// {
//     struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
//     ptr->next = head;
//     ptr->data = data;
//     return ptr;
// }

// struct Node *insertAtIndex(struct Node *head, int data, int index)
// {
//     struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
//     struct Node *p = head;
//     int i = 0;

//     while (i != index - 1)
//     {
//         p = p->next;
//         i++;
//     }
//     ptr->data = data;
//     ptr->next = p->next;
//     p->next = ptr;
//     return head;
// }

// int main()
// {
//     struct Node *head;
//     struct Node *second;
//     struct Node *third;
//     struct Node *fourth;

//     // allocate memory for node in the linked list in heap
//     head = (struct Node *)malloc(sizeof(struct Node));
//     second = (struct Node *)malloc(sizeof(struct Node));
//     third = (struct Node *)malloc(sizeof(struct Node));
//     fourth = (struct Node *)malloc(sizeof(struct Node));

//     // link first and second node
//     head->data = 7;
//     head->next = second;

//     // link second and third node
//     second->data = 15;
//     second->next = third;

//     // link third and fouth node
//     third->data = 21;
//     third->next = fourth;

//     // Terminated the list at the third node
//     fourth->data = 37;
//     fourth->next = NULL;

//     linkedListTraversal(head);
//     head = insertAtIndex(head, 19, 3);
//     linkedListTraversal(head);
//     return 0;
// }

// insert at end
// #include <stdio.h>
// #include <stdlib.h>
// struct Node
// {
//     int data;
//     struct Node *next;
// };
// void linkedListTraversal(struct Node *ptr)
// {
//     while (ptr != NULL)
//     {
//         printf("Element : %d\n", ptr->data);
//         ptr = ptr->next;
//     }
// }

// struct Node *insertAtFirst(struct Node *head, int data)
// {
//     struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
//     ptr->next = head;
//     ptr->data = data;
//     return ptr;
// }

// struct Node *insertAtEnd(struct Node *head, int data)
// {
//     struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
//     struct Node *p = head;

//     while (p->next != NULL)
//     {
//         p = p->next;
//     }
//     p->next = ptr;
//     ptr->data = data;
//     ptr->next = NULL;
//     return head;
// }

// int main()
// {
//     struct Node *head;
//     struct Node *second;
//     struct Node *third;
//     struct Node *fourth;

//     // allocate memory for node in the linked list in heap
//     head = (struct Node *)malloc(sizeof(struct Node));
//     second = (struct Node *)malloc(sizeof(struct Node));
//     third = (struct Node *)malloc(sizeof(struct Node));
//     fourth = (struct Node *)malloc(sizeof(struct Node));

//     // link first and second node
//     head->data = 7;
//     head->next = second;

//     // link second and third node
//     second->data = 15;
//     second->next = third;

//     // link third and fouth node
//     third->data = 21;
//     third->next = fourth;

//     // Terminated the list at the third node
//     fourth->data = 37;
//     fourth->next = NULL;

//     printf("Linked list before insertion\n");
//     linkedListTraversal(head);
//     head = insertAtEnd(head, 139);
//     printf("Linked list after insertion\n");
//     linkedListTraversal(head);
//     return 0;
// }

// insert after a node
// #include <stdio.h>
// #include <stdlib.h>
// struct Node
// {
//     int data;
//     struct Node *next;
// };
// void linkedListTraversal(struct Node *ptr)
// {
//     while (ptr != NULL)
//     {
//         printf("Element : %d\n", ptr->data);
//         ptr = ptr->next;
//     }
// }

// struct Node *insertAtFirst(struct Node *head, int data)
// {
//     struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
//     ptr->next = head;
//     ptr->data = data;
//     return ptr;
// }

// struct Node *insertAtEnd(struct Node *head, int data)
// {
//     struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
//     ptr->data = data;
//     struct Node *p = head;

//     while (p->next != NULL)
//     {
//         p = p->next;
//     }
//     p->next = ptr;
//     ptr->next = NULL;
//     return head;
// }
// struct Node *insertAtAfterNode(struct Node *head, struct Node *prevNode, int data)
// {
//     struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
//     ptr->data = data;
//     ptr->next = prevNode->next;
//     prevNode->next = ptr;
//     return head;
// }

// int main()
// {
//     struct Node *head;
//     struct Node *second;
//     struct Node *third;
//     struct Node *fourth;

//     // allocate memory for node in the linked list in heap
//     head = (struct Node *)malloc(sizeof(struct Node));
//     second = (struct Node *)malloc(sizeof(struct Node));
//     third = (struct Node *)malloc(sizeof(struct Node));
//     fourth = (struct Node *)malloc(sizeof(struct Node));

//     // link first and second node
//     head->data = 7;
//     head->next = second;

//     // link second and third node
//     second->data = 15;
//     second->next = third;

//     // link third and fouth node
//     third->data = 21;
//     third->next = fourth;

//     // Terminated the list at the third node
//     fourth->data = 37;
//     fourth->next = NULL;

//     printf("Linked list before insertion\n");
//     linkedListTraversal(head);
//     head = insertAtAfterNode(head, third, 45);
//     printf("Linked list before insertion\n");
//     linkedListTraversal(head);
//     return 0;
// }

// deletion in linked list
//  #include <stdio.h>
//  #include <stdlib.h>
//  struct Node
//  {
//      int data;
//      struct Node *next;
//  };
//  void linkedListTraversal(struct Node *ptr)
//  {

//     while (ptr != 0)
//     {
//         printf("Element : %d\n", ptr->data);
//         ptr = ptr->next;
//     }
// }
// // case 1: Deleting the first element from the Linked list
// struct Node *deleteFirst(struct Node *head)
// {
//     struct node *ptr = head;
//     head = head->next;
//     free(ptr);
//     return head;
// }
// int main()
// {
//     struct Node *head;
//     struct Node *second;
//     struct Node *third;
//     struct Node *fourth;

//     // allocate memory for node in the linked list in heap
//     head = (struct Node *)malloc(sizeof(struct Node));
//     second = (struct Node *)malloc(sizeof(struct Node));
//     third = (struct Node *)malloc(sizeof(struct Node));
//     fourth = (struct Node *)malloc(sizeof(struct Node));

//     // link first and second node
//     head->data = 7;
//     head->next = second;

//     // link second and third node
//     second->data = 5;
//     second->next = third;

//     // link third and fouth node
//     third->data = 1;
//     third->next = fourth;

//     // Terminated the list at the third node
//     fourth->data = 37;
//     fourth->next = NULL;

//     printf("Linked list before deletion\n");
//     linkedListTraversal(head);
//     head = deleteFirst(head);
//     printf("Linked list after deletion\n");
//     linkedListTraversal(head);
//     return 0;
// }

// // deletion at b/w
// #include <stdio.h>
// #include <stdlib.h>
// struct Node
// {
//     int data;
//     struct Node *next;
// };
// void linkedListTraversal(struct Node *ptr)
// {
//     while (ptr != 0)
//     {
//         printf("Element : %d\n", ptr->data);
//         ptr = ptr->next;
//     }
// }
// // case 1: Deleting the first element from the Linked list
// struct Node *deleteFirst(struct Node *head)
// {
//     struct node *ptr = head;
//     head = head->next;
//     free(ptr);
//     return head;
// }
// // case 2: Deleting the element at a given from the Linked list
// struct Node *deleteAtIndex(struct Node *head, int index)
// {
//     struct Node *p = head;
//     struct Node *q = head->next;
//     for (int i = 0; i < index - 1; i++)
//     {
//         p = p->next;
//         q = q->next;
//     }
//     p->next = q->next;
//     free(q);
//     return head;
// }
// int main()
// {
//     struct Node *head;
//     struct Node *second;
//     struct Node *third;
//     struct Node *fourth;

//     // allocate memory for node in the linked list in heap
//     head = (struct Node *)malloc(sizeof(struct Node));
//     second = (struct Node *)malloc(sizeof(struct Node));
//     third = (struct Node *)malloc(sizeof(struct Node));
//     fourth = (struct Node *)malloc(sizeof(struct Node));

//     // link first and second node
//     head->data = 7;
//     head->next = second;

//     // link second and third node
//     second->data = 5;
//     second->next = third;

//     // link third and fouth node
//     third->data = 1;
//     third->next = fourth;

//     // Terminated the list at the third node
//     fourth->data = 37;
//     fourth->next = NULL;

//     printf("Linked list before deletion\n");
//     linkedListTraversal(head);

//     head = deleteAtIndex(head, 2);
//     printf("Linked list after deletion\n");
//     linkedListTraversal(head);
//     return 0;
// }

// //  deletion at last
// #include <stdio.h>
// #include <stdlib.h>
// struct Node
// {
//     int data;
//     struct Node *next;
// };
// void linkedListTraversal(struct Node *ptr)
// {

//     while (ptr != 0)
//     {
//         printf("Element : %d\n", ptr->data);
//         ptr = ptr->next;
//     }
// }
// // case 1: Deleting the first element from the Linked list
// struct Node *deleteFirst(struct Node *head)
// {
//     struct node *ptr = head;
//     head = head->next;
//     free(ptr);
//     return head;
// }
// // case 2: Deleting the element at a given from the Linked list
// struct Node *deleteAtIndex(struct Node *head, int index)
// {
//     struct Node *p = head;
//     struct Node *q = head->next;
//     while (q->next != Null)
//     {
//         p = p->next;
//         q = q->next;
//     }
//     p->next = q->next;
//     free(q);
//     return head;
// }

// // case 3: Deleting the last element
// struct Node *deleteAtLast(struct Node *head)
// {
//     struct Node *p = head;
//     struct Node *q = head->next;
//     for (int i = 0; i < index - 1; i++)
//     {
//         p = p->next;
//         q = q->next;
//     }
//     p->next = NULL;
//     free(q);
//     return head;
// }
// int main()
// {
//     struct Node *head;
//     struct Node *second;
//     struct Node *third;
//     struct Node *fourth;

//     // allocate memory for node in the linked list in heap
//     head = (struct Node *)malloc(sizeof(struct Node));
//     second = (struct Node *)malloc(sizeof(struct Node));
//     third = (struct Node *)malloc(sizeof(struct Node));
//     fourth = (struct Node *)malloc(sizeof(struct Node));

//     // link first and second node
//     head->data = 7;
//     head->next = second;

//     // link second and third node
//     second->data = 5;
//     second->next = third;

//     // link third and fouth node
//     third->data = 1;
//     third->next = fourth;

//     // Terminated the list at the third node
//     fourth->data = 37;
//     fourth->next = NULL;

//     printf("Linked list before deletion\n");
//     linkedListTraversal(head);

//     head = deleteAtLast(head);
//     printf("Linked list after deletion\n");
//     linkedListTraversal(head);
//     return 0;
// }

// circularlinkedlist
//  #include <stdio.h>
//  #include <stdlib.h>

// struct Node
// {
//     int data;
//     struct Node *next;
// };

// void linkedListTraversal(struct Node *head)
// {
//     struct Node *ptr = head;
//     do
//     {
//         printf("Element is %d\n", ptr->data);
//         ptr = ptr->next;
//     } while (ptr != head);
// }

// struct Node *insertAtFirst(struct Node *head, int data)
// {
//     struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
//     ptr->data = data;

//     struct Node *p = head->next;
//     while (p->next != head)
//     {
//         p = p->next;
//     }
//     // At this point p points to the last node of this circular linked list

//     p->next = ptr;
//     ptr->next = head;
//     head = ptr;
//     return head;
// }

// int main()
// {

//     struct Node *head;
//     struct Node *second;
//     struct Node *third;
//     struct Node *fourth;

//     // Allocate memory for nodes in the linked list in Heap
//     head = (struct Node *)malloc(sizeof(struct Node));
//     second = (struct Node *)malloc(sizeof(struct Node));
//     third = (struct Node *)malloc(sizeof(struct Node));
//     fourth = (struct Node *)malloc(sizeof(struct Node));

//     // Link first and second nodes
//     head->data = 4;
//     head->next = second;

//     // Link second and third nodes
//     second->data = 3;
//     second->next = third;

//     // Link third and fourth nodes
//     third->data = 6;
//     third->next = fourth;

//     // Terminate the list at the third node
//     fourth->data = 1;
//     fourth->next = head;

//     linkedListTraversal(head);
//     head=insertAtFirst(head, 34);
//     linkedListTraversal(head);

//     return 0;
// }