// #include <stdio.h>
// #include <stdlib.h>
// struct Node
// {
//     int data;
//     struct Node *next;
// };
// void linkedlistTraversal(struct Node *ptr)
// {
//     while (ptr != 0)
//     {
//         printf("Element : %d\n", ptr->data);
//         ptr = ptr->next;
//     }
// }
// int main()
// {
//     struct Node *head;
//     struct Node *second;
//     struct Node *third;
//     struct Node *fourth;

//     head = (struct Node *)malloc(sizeof(struct Node));
//     second = (struct Node *)malloc(sizeof(struct Node));
//     third = (struct Node *)malloc(sizeof(struct Node));
//     fourth = (struct Node *)malloc(sizeof(struct Node));

//     // linked first Node to secondlist
//     head->data = 12;
//     head->next = second;

//     // linked secondlist into thirdlist
//     second->data = 13;
//     second->next = third;

//     // linked thirdnode into fourth node
//     third->data = 14;
//     third->next = fourth;

//     // Terminating the third list
//     fourth->data = 15;
//     fourth->next = NULL;

//     linkedlistTraversal(head);
//     return 0;
// }

// // Insertion at first linked list
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

