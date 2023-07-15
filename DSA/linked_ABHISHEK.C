// #include <stdio.h>
// #include <string.h>
// struct node
// {
//     int num;
//     char c;
//     float f;
//     struct node *link1;
//     struct node *link2;
// };
// int main()
// {
//     struct node s1, s2;
//     scanf("%d %c %f %d %c %f", &s1.num, &s1.c, &s1.f, &s2.num, &s2.c, &s2.f);
//     s1.link1 = NULL;
//     s2.link2 = NULL;
//     s1.link1 = &s2;
//     s2.link2 = &s1;
//     printf("%d %c %.2f", s1.link1->num, s1.link1->c, s1.link1->f);
//     printf("\n%d %c %.2f", s2.link2->num, s2.link2->c, s2.link2->f);
//     return 0;
// }

//////////////////////////////////////// double circuler linked list//////////////////////////////////////
#include <stdio.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
// };

// int main()
// {
//     struct node s1, s2, s3, s4;
//     struct node *ptr;
//     printf("Enter your s1 : ");
//     scanf("%d", &s1.data);
//     printf("\nEnter your s2 : ");
//     scanf("%d", &s2.data);
//     printf("\nEnter your s3 : ");
//     scanf("%d", &s3.data);
//     printf("\nEnter your s4 : ");
//     scanf("%d", &s4.data);
//     ptr = &s1;
//     ptr->next = &s2;
//     s1.next = &s2;
//     s2.next = &s3;
//     s3.next = &s4;
//     s4.next = &s1;
//     s4.prev = &s3;
//     s3.prev = &s2;
//     s2.prev = &s1;
//     s1.prev = &s4;
//     printf("\n%d", (ptr->prev->data));
//     return 0;
// }

//////////////////////////////////////// Travel in linkedlist in c//////////////////////////////////////
// #include <stdio.h>
// #include <stdlib.h>
// struct node
// {
//     int data;
//     struct node *next;
// };
// void Travel(struct node *ptr)
// {
//     while (ptr != NULL)
//     {
//         printf("%d\t", ptr->data);
//         ptr = ptr->next;
//     }
// }
// int main()
// {
//     struct node *head, *second, *third, *four;
//     head = (struct node *)malloc(sizeof(struct node));
//     second = (struct node *)malloc(sizeof(struct node));
//     third = (struct node *)malloc(sizeof(struct node));
//     four = (struct node *)malloc(sizeof(struct node));
//     // head and second linked
//     printf("Enter your head data : ");
//     scanf("%d", &head->data);
//     head->next = second;
//     // second and third linked
//     second->data = 10;
//     second->next = third;
//     // second and third linked
//     (*third).data = 15;
//     third->next = four;
//     // link third and fourth pointer
//     four->data = 20;
//     four->next = NULL;
//     Travel(head); // by function
//     while (head != NULL) // by itration
//     {
//         printf("%d\t", head->data);
//         head = head->next;
//     }
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// struct node
// {
//     int data;
//     struct node *next;
// };
// void Travel(struct node *ptr)
// {
//     while (ptr != NULL)
//     {
//         printf("%d ", ptr->data);
//         ptr = ptr->next;
//     }
// }

// insert first last and middle
// struct node *insert(struct node *ptr)
// {
//     int data;
//     printf("Enter your data : ");
//     struct node *temp = (struct node *)malloc(sizeof(struct node));
//     scanf("%d", &data);
//     temp->next = ptr;
//     temp->data = data;
//     return temp;
// }

// struct node *insert(struct node *ptr)
// {
//     int data;
//     printf("\nEnter your data : ");
//     struct node *temp = (struct node *)malloc(sizeof(struct node)), *p = ptr->next, *r = ptr;
//     scanf("%d", &data);
//     while (p != NULL)
//     {
//         p = p->next;
//         r = r->next;
//     }
//     r->next = temp;
//     temp->data = data;
//     temp->next = NULL;
//     return ptr;
// }

// struct node *insert(struct node *ptr)
// {
//     int data, i = 0;
//     printf("\nEnter your data : ");
//     struct node *temp = (struct node *)malloc(sizeof(struct node)), *p = ptr;
//     scanf("%d", &data);
//     while (i != 4 - 1)
//     {
//         p = p->next;
//         i++;
//     }
//     temp->next = p->next;
//     p->next = temp;
//     temp->data = data;
//     return ptr;
// }

// struct node *insert(struct node *ptr)
// {
//     int data;
//     printf("\nEnter your data : ");
//     struct node *temp = (struct node *)malloc(sizeof(struct node)), *p = ptr->next, *r = ptr;
//     scanf("%d", &data);
//     while (p != NULL)
//     {
//         p = p->next;
//         r = r->next;
//     }
//     r->next = temp;
//     temp->data = data;
//     temp->next = NULL;
//     return ptr;
// }

// delete first last and middle
// struct node *delete (struct node *head)
// {
//     struct node *ptr = head;
//     head = head->next;
//     free(ptr);
//     return head;
// }

// struct node *delete (struct node *head)
// {
//     struct node *ptr = head, *p = head->next;
//     while (p->next != NULL)
//     {
//         p = p->next;
//         ptr = ptr->next;
//     }
//     ptr->next = NULL;
//     free(p);
//     return head;
// }
// struct node *delete (struct node *head)
// {
//     int i = 0;
//     struct node *ptr = head, *p = head->next;
//     while (i != 3 - 1)
//     {
//         p = p->next;
//         ptr = ptr->next;
//         i++;
//     }
//     ptr->next = p->next;
//     free(p);
//     return head;
// }
// int main()
// {
//     int num, i, data;
//     printf("Enter your size of linked list : ");
//     scanf("%d", &num);
//     struct node *head, *temp, *ptr;
//     head = (struct node *)malloc(sizeof(struct node));
//     printf("Enter your data : ");
//     scanf("%d", &data);
//     head->data = data;
//     temp = head;
//     head->next = NULL;
//     for (i = 1; i < num; i++)
//     {
//         ptr = (struct node *)malloc(sizeof(struct node));
//         scanf("%d", &data);
//         ptr->data = data;
//         temp->next = ptr;
//         temp = temp->next;
//         ptr->next = NULL;
//     }
//     Travel(head);
//     head = delete (head);
//     printf("\n");
//     Travel(head);
//     return 0;
// }

//////////////////////////////////////insert in between in c linked list//////////////////////////////////////
// #include <stdio.h>
// #include <stdlib.h>
// struct node
// {
//     int data;
//     struct node *next;
// };
// void Travers(struct node *ptr)
// {
//     while (ptr != NULL)
//     {
//         printf("%d ", ptr->data);
//         ptr = ptr->next;
//     }
// }
// struct node *insertindex(struct node *head, int data, int index)
// {
//     struct node *ptr = (struct node *)malloc(sizeof(struct node));
//     struct node *p = head;
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
//     struct node *head, *second, *third, *fouth;
//     head = (struct node *)malloc(sizeof(struct node));
//     second = (struct node *)malloc(sizeof(struct node));
//     third = (struct node *)malloc(sizeof(struct node));
//     fouth = (struct node *)malloc(sizeof(struct node));
//     head->data = 4;
//     head->next = second;
//     second->data = 6;
//     second->next = third;
//     third->data = 8;
//     third->next = fouth;
//     fouth->data = 10;
//     fouth->next = NULL;
//     Travers(head);
//     printf("\n");
//     head = insertindex(head, 34, 1);
//     Travers(head);
//     return 0;
// }

//////////////////////////////////////insert in end of the linked list//////////////////////////////////////
// #include <stdio.h>
// #include <stdlib.h>
// struct node
// {
//     int data;
//     struct node *next;
// };
// void Travers(struct node *ptr)
// {
//     while (ptr != NULL)
//     {
//         printf("%d ", ptr->data);
//         ptr = ptr->next;
//     }
// }
// struct node *insertend(struct node *head, int data)
// {
//     struct node *ptr = (struct node *)malloc(sizeof(struct node));
//     struct node *p = head;
//     while (p->next != NULL)
//     {
//         p = p->next;
//     }
//     ptr->data = data;
//     p->next = ptr;
//     ptr->next = NULL;
// }
// int main()
// {
//     struct node *head, *second, *third, *four;
//     head = (struct node *)malloc(sizeof(struct node));
//     second = (struct node *)malloc(sizeof(struct node));
//     third = (struct node *)malloc(sizeof(struct node));
//     four = (struct node *)malloc(sizeof(struct node));
//     head->data = 4;
//     head->next = second;
//     second->data = 6;
//     second->next = third;
//     third->data = 8;
//     third->next = four;
//     four->data = 10;
//     four->next = NULL;
//     Travers(head);
//     printf("\n");
//     insertend(head, 45);
//     Travers(head);
//     return 0;
// }

//////////////////////////////////////insert node after node//////////////////////////////////////
// #include <stdio.h>
// #include <stdlib.h>
// struct node
// {
//     int data;
//     struct node *next;
// };
// void Travers(struct node *ptr)
// {
//     while (ptr != NULL)
//     {
//         printf("%d ", ptr->data);
//         ptr = ptr->next;
//     }
// }
// struct node *insertend(struct node *prevnode, int data)
// {
//     struct node *ptr = (struct node *)malloc(sizeof(struct node));
//     ptr->data = data;
//     ptr->next = prevnode->next;
//     prevnode->next = ptr;
// }
// int main()
// {
//     char str[20];
//     struct node *head, *second, *third, *four, *ssss;
//     head = (struct node *)malloc(sizeof(struct node));
//     second = (struct node *)malloc(sizeof(struct node));
//     third = (struct node *)malloc(sizeof(struct node));
//     four = (struct node *)malloc(sizeof(struct node));
//     ssss = (struct node *)malloc(sizeof(struct node));
//     head->data = 4;
//     head->next = second;
//     second->data = 6;
//     second->next = third;
//     third->data = 8;
//     third->next = four;
//     four->data = 10;
//     four->next = NULL;
//     ssss->data = 4;
//     // ssss->next = third->next;
//     // third->next = ssss;
//     // ssss->data = 90;
//     Travers(head);
//     printf("\n");
//     // printf("Enter your node name : ");
//     // gets(str);
//     insertend(third, 45);
//     Travers(head);
//     return 0;
// }

//////////////////////////////////////Deletion in linked list first node//////////////////////////////////////
// #include <stdio.h>
// #include <stdlib.h>
// struct node
// {
//     int data;
//     struct node *next;
// };
// void Travers(struct node *ptr)
// {
//     while (ptr != NULL)
//     {
//         printf("%d ", ptr->data);
//         ptr = ptr->next;
//     }
// }
// struct node *delete (struct node *head)
// {
//     struct node *ptr;
//     ptr = head;
//     head = head->next;
//     free(ptr);
//     return head;
// }
// int main()
// {
//     struct node *head, *second, *third, *four;
//     head = (struct node *)malloc(sizeof(struct node));
//     second = (struct node *)malloc(sizeof(struct node));
//     third = (struct node *)malloc(sizeof(struct node));
//     four = (struct node *)malloc(sizeof(struct node));
//     head->data = 4;
//     head->next = second;
//     second->data = 6;
//     second->next = third;
//     third->data = 8;
//     third->next = four;
//     four->data = 10;
//     four->next = NULL;
//     Travers(head);
//     head = delete (head);
//     printf("\n");
//     Travers(head);
//     return 0;
// }

//////////////////////////////////////Deletion in linked list last node//////////////////////////////////////
// #include <stdio.h>
// #include <stdlib.h>
// struct node
// {
//     int data;
//     struct node *next;
// };
// void Travers(struct node *ptr)
// {
//     while (ptr != NULL)
//     {
//         printf("%d ", ptr->data);
//         ptr = ptr->next;
//     }
// }
// struct node *delete (struct node *head)
// {
//     struct node *p = head, *q = head->next;
//     while (q->next != NULL)
//     {
//         q = q->next;
//         p = p->next;
//     }
//     p->next = NULL;
//     free(q);
// }
// int main()
// {
//     struct node *head, *second, *third, *four;
//     head = (struct node *)malloc(sizeof(struct node));
//     second = (struct node *)malloc(sizeof(struct node));
//     third = (struct node *)malloc(sizeof(struct node));
//     four = (struct node *)malloc(sizeof(struct node));
//     head->data = 4;
//     head->next = second;
//     second->data = 6;
//     second->next = third;
//     third->data = 8;
//     third->next = four;
//     four->data = 10;
//     four->next = NULL;
//     Travers(head);
//     delete (head);
//     printf("\n");
//     Travers(head);
//     return 0;
// }

/////////////////////////////////////Deletion in linked list use of index number//////////////////////////////////////
// #include <stdio.h>
// #include <stdlib.h>
// struct node
// {
//     int data;
//     struct node *next;
// };
// void Travers(struct node *ptr)
// {
//     while (ptr != NULL)
//     {
//         printf("%d ", ptr->data);
//         ptr = ptr->next;
//     }
// }
// struct node *delete (struct node *head, int index)
// {
//     struct node *p = head, *q ;
//     struct node *temp;
//     int i = 0;
// first method develop by me
// while (i != index)
// {
//     p = p->next;
//     i++;
// }
// temp = p->next;
// i = 0;
// while (i != index - 1)
// {
//     q = q->next;
//     i++;
// }
// q->next = temp;
// free(p);
// second method develop by harry
//     while (i != index - 1)
//     {
//         p = p->next;
//         i++;
//     }
//     q = p->next;
//     p->next = q->next;
//     free(q);
// }
// int main()
// {
//     struct node *head, *second, *third, *four;
//     head = (struct node *)malloc(sizeof(struct node));
//     second = (struct node *)malloc(sizeof(struct node));
//     third = (struct node *)malloc(sizeof(struct node));
//     four = (struct node *)malloc(sizeof(struct node));
//     head->data = 4;
//     head->next = second;
//     second->data = 6;
//     second->next = third;
//     third->data = 8;
//     third->next = four;
//     four->data = 10;
//     four->next = NULL;
//     Travers(head);
//     delete (head, 2);
//     printf("\n");
//     Travers(head);
//     return 0;
// }

/////////////////////////////////////Deletion in linked list node after node//////////////////////////////////////
// #include <stdio.h>
// #include <stdlib.h>
// struct node
// {
//     int data;
//     struct node *next;
// };
// void Travers(struct node *ptr)
// {
//     while (ptr != NULL)
//     {
//         printf("%d ", ptr->data);
//         ptr = ptr->next;
//     }
// }
// struct node *delete (struct node *head, struct node *target)
// {
//     struct node *p = target;
//     target = target->next;
//     free(p);
// }
// int main()
// {
//     struct node *head, *second, *third, *four;
//     head = (struct node *)malloc(sizeof(struct node));
//     second = (struct node *)malloc(sizeof(struct node));
//     third = (struct node *)malloc(sizeof(struct node));
//     four = (struct node *)malloc(sizeof(struct node));
//     head->data = 4;
//     head->next = second;
//     second->data = 6;
//     second->next = third;
//     third->data = 8;
//     third->next = four;
//     four->data = 10;
//     four->next = NULL;
//     Travers(head);
//     delete (head, third);
//     printf("\n");
//     Travers(head);
//     return 0;
// }

/////////////////////////////////////Deletion in linked list node after node//////////////////////////////////////
// #include <stdio.h>
// #include <stdlib.h>
// struct node
// {
//     int data;
//     struct node *next;
// };
// void Travers(struct node *ptr)
// {
//     while (ptr != NULL)
//     {
//         printf("%d ", ptr->data);
//         ptr = ptr->next;
//     }
// }
// struct node *delete (struct node *head, int data)
// {
//     struct node *p = head->next, *q = head;
//     while (p->data != data && p->next != NULL)
//     {
//         p = p->next;
//         q = q->next;
//     }
//     q->next = p->next;
//     free(p);
//     return head;
// }
// int main()
// {
//     struct node *head, *second, *third, *four;
//     head = (struct node *)malloc(sizeof(struct node));
//     second = (struct node *)malloc(sizeof(struct node));
//     third = (struct node *)malloc(sizeof(struct node));
//     four = (struct node *)malloc(sizeof(struct node));
//     head->data = 4;
//     head->next = second;
//     second->data = 6;
//     second->next = third;
//     third->data = 8;
//     third->next = four;
//     four->data = 10;
//     four->next = NULL;
//     Travers(head);
//     head = delete (head, 6);
//     printf("\n");
//     Travers(head);
//     return 0;
// }

//////////////////////////////////// doubly linked list/////////////////////////////////////////////////////////////
// #include <stdio.h>
// #include <stdlib.h>
// struct node
// {
//     int data;
//     struct node *next;
// };
// void show(struct node *head)
// {
//     struct node *h = head;
//     do
//     {
//         printf("%d ", h->data);
//         h = h->next;
//     } while (h != head);
// }
// int main()
// {
//     struct node *head, *second, *third, *fourth;
//     head = (struct node *)malloc(sizeof(struct node));
//     second = (struct node *)malloc(sizeof(struct node));
//     third = (struct node *)malloc(sizeof(struct node));
//     fourth = (struct node *)malloc(sizeof(struct node));
//     head->data = 5;
//     head->next = second;
//     second->data = 10;
//     second->next = third;
//     third->data = 15;
//     third->next = fourth;
//     fourth->next = head;
//     fourth->data = 20;
//     show(head);
//     return 0;
// }

////////////////////////////////// insertion in circular linked list at first/////////////////////////////////
// #include <stdio.h>
// #include <stdlib.h>
// struct node
// {
//     int data;
//     struct node *next;
// };
// void show(struct node *head)
// {
//     struct node *ptr = head;
//     do
//     {
//         printf("%d ", ptr->data);
//         ptr = ptr->next;
//     } while (ptr != head);
// }
// struct node *Insert(struct node *head)
// {
//     struct node *ptr, *p = head;
//     ptr = (struct node *)malloc(sizeof(struct node));
//     int data;
//     printf("Enter your data : ");
//     scanf("%d", &data);
//     while (p->next != head)
//     {
//         p = p->next;
//     }
//     p->next = ptr;
//     ptr->data = data;
//     ptr->next = head;
//     return ptr;
// }
// int main()
// {
//     int num, i, data;
//     printf("Enter your number of nodes : ");
//     scanf("%d", &num);
//     struct node *fnode, *temp, *head;
//     head = (struct node *)malloc(sizeof(struct node));
//     printf("Enter your data : ");
//     scanf("%d", &data);
//     head->data = data;
//     temp = head;
//     head->next = NULL;
//     for (i = 1; i < num; i++)
//     {
//         fnode = (struct node *)malloc(sizeof(struct node));
//         scanf("%d", &data);
//         fnode->data = data;
//         temp->next = fnode;
//         temp = temp->next;
//         fnode->next = head;
//     }
//     show(head);
//     printf("\n");
//     head = Insert(head);
//     show(head);
//     return 0;
// }

////////////////////////////////// insertion in circular linked list at last/////////////////////////////////
// #include <stdio.h>
// #include <stdlib.h>
// struct node
// {
//     int data;
//     struct node *next;
// };
// void show(struct node *head)
// {
//     struct node *ptr = head;
//     do
//     {
//         printf("%d ", ptr->data);
//         ptr = ptr->next;
//     } while (ptr != head);
// }
// struct node *Insert(struct node *head)
// {
//     struct node *ptr, *p = head;
//     ptr = (struct node *)malloc(sizeof(struct node));
//     int data;
//     printf("Enter your data : ");
//     scanf("%d", &data);
//     while (p->next != head)
//     {
//         p = p->next;
//     }
//     p->next = ptr;
//     ptr->data = data;
//     ptr->next = head;
//     return head;
// }
// int main()
// {
//     int num, i, data;
//     printf("Enter your number of nodes : ");
//     scanf("%d", &num);
//     struct node *fnode, *temp, *head;
//     head = (struct node *)malloc(sizeof(struct node));
//     printf("Enter your data : ");
//     scanf("%d", &data);
//     head->data = data;
//     temp = head;
//     head->next = NULL;
//     for (i = 1; i < num; i++)
//     {
//         fnode = (struct node *)malloc(sizeof(struct node));
//         scanf("%d", &data);
//         fnode->data = data;
//         temp->next = fnode;
//         temp = temp->next;
//         fnode->next = head;
//     }
//     show(head);
//     printf("\n");
//     head = Insert(head);
//     show(head);
//     return 0;
// }

////////////////////////////////// insertion in circular linked list at between/////////////////////////////////
// #include <stdio.h>
// #include <stdlib.h>
// struct node
// {
//     int data;
//     struct node *next;
// };
// void show(struct node *head)
// {
//     struct node *ptr = head;
//     do
//     {
//         printf("%d ", ptr->data);
//         ptr = ptr->next;
//     } while (ptr != head);
// }
// struct node *Insert(struct node *head, int num)
// {
//     struct node *ptr, *p = head;
//     ptr = (struct node *)malloc(sizeof(struct node));
//     int data, i = 0;
//     printf("Enter your data : ");
//     scanf("%d", &data);
//     while (i != num - 2)
//     {
//         p = p->next;
//         i++;
//     }
//     ptr->next = p->next;
//     ptr->data = data;
//     p->next = ptr;
//     return head;
// }
// int main()
// {
//     int num, i, data;
//     printf("Enter your number of nodes : ");
//     scanf("%d", &num);
//     struct node *fnode, *temp, *head;
//     head = (struct node *)malloc(sizeof(struct node));
//     printf("Enter your data : ");
//     scanf("%d", &data);
//     head->data = data;
//     temp = head;
//     head->next = NULL;
//     for (i = 1; i < num; i++)
//     {
//         fnode = (struct node *)malloc(sizeof(struct node));
//         scanf("%d", &data);
//         fnode->data = data;
//         temp->next = fnode;
//         temp = temp->next;
//         fnode->next = head;
//     }
//     show(head);
//     printf("\n");
//     head = Insert(head, 4);
//     show(head);
//     return 0;
// }

////////////////////////////////// delete in circular linked list at first/////////////////////////////////
// #include <stdio.h>
// #include <stdlib.h>
// struct node
// {
//     int data;
//     struct node *next;
// };
// void show(struct node *head)
// {
//     struct node *ptr = head;
//     do
//     {
//         printf("%d ", ptr->data);
//         ptr = ptr->next;
//     } while (ptr != head);
// }
// struct node *Insert(struct node *head)
// {
//     struct node *ptr, *p = head;
//     ptr = head;
//     while (p->next != head)
//     {
//         p = p->next;
//     }
//     head = head->next;
//     p->next = head;
//     free(ptr);
//     return head;
// }
// int main()
// {
//     int num, i, data;
//     printf("Enter your number of nodes : ");
//     scanf("%d", &num);
//     struct node *fnode, *temp, *head;
//     head = (struct node *)malloc(sizeof(struct node));
//     printf("Enter your data : ");
//     scanf("%d", &data);
//     head->data = data;
//     temp = head;
//     head->next = NULL;
//     for (i = 1; i < num; i++)
//     {
//         fnode = (struct node *)malloc(sizeof(struct node));
//         scanf("%d", &data);
//         fnode->data = data;
//         temp->next = fnode;
//         temp = temp->next;
//         fnode->next = head;
//     }
//     show(head);
//     printf("\n");
//     head = Insert(head);
//     show(head);
//     return 0;
// }

///////////////////////////////// delete in circular linked list at last/////////////////////////////////
// #include <stdio.h>
// #include <stdlib.h>
// struct node
// {
//     int data;
//     struct node *next;
// };
// void show(struct node *head)
// {
//     struct node *ptr = head;
//     do
//     {
//         printf("%d ", ptr->data);
//         ptr = ptr->next;
//     } while (ptr != head);
// }
// struct node *Insert(struct node *head)
// {
//     struct node *ptr, *p = head->next;
//     ptr = head;
//     while (p->next != head)
//     {
//         p = p->next;
//         ptr = ptr->next;
//     }
//     ptr->next = head;
//     free(p);
//     return head;
// }
// int main()
// {
//     int num, i, data;
//     printf("Enter your number of nodes : ");
//     scanf("%d", &num);
//     struct node *fnode, *temp, *head;
//     head = (struct node *)malloc(sizeof(struct node));
//     printf("Enter your data : ");
//     scanf("%d", &data);
//     head->data = data;
//     temp = head;
//     head->next = NULL;
//     for (i = 1; i < num; i++)
//     {
//         fnode = (struct node *)malloc(sizeof(struct node));
//         scanf("%d", &data);
//         fnode->data = data;
//         temp->next = fnode;
//         temp = temp->next;
//         fnode->next = head;
//     }
//     show(head);
//     printf("\n");
//     head = Insert(head);
//     show(head);
//     return 0;
// }

///////////////////////////////// delete in circular linked list at last/////////////////////////////////
// #include <stdio.h>
// #include <stdlib.h>
// struct node
// {
//     int data;
//     struct node *next;
// };
// void show(struct node *head)
// {
//     struct node *ptr = head;
//     do
//     {
//         printf("%d ", ptr->data);
//         ptr = ptr->next;
//     } while (ptr != head);
// }
// struct node *Insert(struct node *head)
// {
//     struct node *ptr, *p = head;
//     int i = 0, num = 4;
//     while (i != num - 1)
//     {
//         p = p->next;
//         i++;
//     }
//     ptr = p->next;
//     p->next = ptr->next;
//     free(ptr);
//     return head;
// }
// int main()
// {
//     int num, i, data;
//     printf("Enter your number of nodes : ");
//     scanf("%d", &num);
//     struct node *fnode, *temp, *head;
//     head = (struct node *)malloc(sizeof(struct node));
//     printf("Enter your data : ");
//     scanf("%d", &data);
//     head->data = data;
//     temp = head;
//     head->next = NULL;
//     for (i = 1; i < num; i++)
//     {
//         fnode = (struct node *)malloc(sizeof(struct node));
//         scanf("%d", &data);
//         fnode->data = data;
//         temp->next = fnode;
//         temp = temp->next;
//         fnode->next = head;
//     }
//     show(head);
//     printf("\n");
//     head = Insert(head);
//     show(head);
//     return 0;
// }

////////////////////////////////////doubly linked list in c dsa///////////////////////////
// #include <stdio.h>
// #include <stdlib.h>
// struct node
// {
//     int data;
//     struct node *next;
//     struct node *prev;
// };
// void show(struct node *head, struct node *ptr)
// {
//     while (head != NULL)
//     {
//         printf("%d ", head->data);
//         head = head->next;
//     }
//     printf("\n");
//     while (ptr != NULL)
//     {
//         printf("%d ", ptr->data);
//         ptr = ptr->prev;
//     }
// }
// int main()
// {
//     int num, i, data;
//     printf("Enter your number of nodes : ");
//     scanf("%d", &num);
//     struct node *fnode, *temp, *head, *ptr;
//     head = (struct node *)malloc(sizeof(struct node));
//     printf("Enter your data : ");
//     scanf("%d", &data);
//     head->data = data;
//     temp = head;
//     head->next = NULL;
//     head->prev = NULL;
//     for (i = 1; i < num; i++)
//     {
//         fnode = (struct node *)malloc(sizeof(struct node));
//         scanf("%d", &data);
//         fnode->next = NULL;
//         fnode->data = data;
//         fnode->prev = temp;
//         temp->next = fnode;
//         temp = temp->next;
//     }
//     ptr = fnode;
//     show(head, ptr);
//     return 0;
// }

//  Write a program in C to insert a new node at the first of a doubly linked list.
// #include <stdio.h>
// #include <stdlib.h>
// struct node
// {
//     int data;
//     struct node *next;
//     struct node *prev;
// };
// void show(struct node *head, struct node *ptr)
// {
//     while (head != NULL)
//     {
//         printf("%d ", head->data);
//         head = head->next;
//     }
//     printf("\n");
//     while (ptr != NULL)
//     {
//         printf("%d ", ptr->data);
//         ptr = ptr->prev;
//     }
// }
// struct node *insert(struct node *head)
// {
//     struct node *ptr = (struct node *)malloc(sizeof(struct node));
//     ptr->next = head;
//     head->prev = ptr;
//     ptr->prev = NULL;
//     ptr->data = 9;
//     return ptr;
// }
// int main()
// {
//     int num, i, data;
//     printf("Enter your number of nodes : ");
//     scanf("%d", &num);
//     struct node *fnode, *temp, *head, *ptr;
//     head = (struct node *)malloc(sizeof(struct node));
//     printf("Enter your data : ");
//     scanf("%d", &data);
//     head->data = data;
//     temp = head;
//     head->next = NULL;
//     head->prev = NULL;
//     for (i = 1; i < num; i++)
//     {
//         fnode = (struct node *)malloc(sizeof(struct node));
//         scanf("%d", &data);
//         fnode->next = NULL;
//         fnode->data = data;
//         fnode->prev = temp;
//         temp->next = fnode;
//         temp = temp->next;
//     }
//     ptr = fnode;
//     show(head, ptr);
//     head = insert(head);
//     printf("\n\n");
//     show(head, ptr);
//     return 0;
// }

// Write a program in C to insert a new node at the middle in a doubly linked list.
// #include <stdio.h>
// #include <stdlib.h>
// struct node
// {
//     int data;
//     struct node *next;
//     struct node *prev;
// };
// void show(struct node *head, struct node *ptr)
// {
//     while (head != NULL)
//     {
//         printf("%d ", head->data);
//         head = head->next;
//     }
//     printf("\n");
//     while (ptr != NULL)
//     {
//         printf("%d ", ptr->data);
//         ptr = ptr->prev;
//     }
// }
// struct node *insert(struct node *head, int num)
// {
//     struct node *temp, *p = head, *ptr = (struct node *)malloc(sizeof(struct node));
//     int i = 0;
//     while (i != (num / 2) - 1)
//     {
//         p = p->next;
//         i++;
//     }
//     temp = p->next;
//     ptr->next = p->next;
//     ptr->prev = p;
//     temp->prev = ptr;
//     p->next = ptr;
//     ptr->data = 9;
// }
// int main()
// {
//     int num, i, data;
//     printf("Enter your number of nodes : ");
//     scanf("%d", &num);
//     struct node *fnode, *temp, *head, *ptr;
//     head = (struct node *)malloc(sizeof(struct node));
//     printf("Enter your data : ");
//     scanf("%d", &data);
//     head->data = data;
//     temp = head;
//     head->next = NULL;
//     head->prev = NULL;
//     for (i = 1; i < num; i++)
//     {
//         fnode = (struct node *)malloc(sizeof(struct node));
//         scanf("%d", &data);
//         fnode->next = NULL;
//         fnode->data = data;
//         fnode->prev = temp;
//         temp->next = fnode;
//         temp = temp->next;
//     }
//     ptr = fnode;
//     show(head, ptr);
//     insert(head, num);
//     printf("\n\n");
//     show(head, ptr);
//     return 0;
// }

// Write a program in C to insert a new node at the end in a doubly linked list.
// #include <stdio.h>
// #include <stdlib.h>
// struct node
// {
//     int data;
//     struct node *next;
//     struct node *prev;
// };
// void show(struct node *head)
// {
//     while (head != NULL)
//     {
//         printf("%d ", head->data);
//         head = head->next;
//     }
// }
// struct node *insert(struct node *head)
// {
//     struct node *p = head, *ptr = (struct node *)malloc(sizeof(struct node));
//     while (p->next != NULL)
//     {
//         p = p->next;
//     }
//     p->next = ptr;
//     ptr->prev = p;
//     ptr->next = NULL;
//     ptr->data = 9;
// }
// int main()
// {
//     int num, i, data;
//     printf("Enter your number of nodes : ");
//     scanf("%d", &num);
//     struct node *fnode, *temp, *head, *ptr;
//     head = (struct node *)malloc(sizeof(struct node));
//     printf("Enter your data : ");
//     scanf("%d", &data);
//     head->data = data;
//     temp = head;
//     head->next = NULL;
//     head->prev = NULL;
//     for (i = 1; i < num; i++)
//     {
//         fnode = (struct node *)malloc(sizeof(struct node));
//         scanf("%d", &data);
//         fnode->next = NULL;
//         fnode->data = data;
//         fnode->prev = temp;
//         temp->next = fnode;
//         temp = temp->next;
//     }
//     show(head);
//     insert(head);
//     printf("\n\n");
//     show(head);
//     return 0;
// }

// Write a program in C to delete a node first in a doubly linked list.
// #include <stdio.h>
// #include <stdlib.h>
// struct node
// {
//     int data;
//     struct node *next;
//     struct node *prev;
// };
// void show(struct node *head)
// {
//     while (head != NULL)
//     {
//         printf("%d ", head->data);
//         head = head->next;
//     }
// }
// struct node *insert(struct node *head)
// {
//     struct node *temp = head;
//     head = head->next;
//     head->prev = NULL;
//     free(temp);
//     return head;
// }
// int main()
// {
//     int num, i, data;
//     printf("Enter your number of nodes : ");
//     scanf("%d", &num);
//     struct node *fnode, *temp, *head, *ptr;
//     head = (struct node *)malloc(sizeof(struct node));
//     printf("Enter your data : ");
//     scanf("%d", &data);
//     head->data = data;
//     temp = head;
//     head->next = NULL;
//     head->prev = NULL;
//     for (i = 1; i < num; i++)
//     {
//         fnode = (struct node *)malloc(sizeof(struct node));
//         scanf("%d", &data);
//         fnode->next = NULL;
//         fnode->data = data;
//         fnode->prev = temp;
//         temp->next = fnode;
//         temp = temp->next;
//     }
//     show(head);
//     head = insert(head);
//     printf("\n\n");
//     show(head);
//     return 0;
// }

// Write a program in C to delete a node end in a doubly linked list.
// #include <stdio.h>
// #include <stdlib.h>
// struct node
// {
//     int data;
//     struct node *next;
//     struct node *prev;
// };
// void show(struct node *head)
// {
//     while (head != NULL)
//     {
//         printf("%d ", head->data);
//         head = head->next;
//     }
// }
// struct node *insert(struct node *head)
// {
//     struct node *p = head, *q = head->next;
//     while (q->next != NULL)
//     {
//         p = p->next;
//         q = q->next;
//     }
//     p->next = NULL;
//     q->prev = NULL;
//     free(q);
//     return head;
// }
// int main()
// {
//     int num, i, data;
//     printf("Enter your number of nodes : ");
//     scanf("%d", &num);
//     struct node *fnode, *temp, *head, *ptr;
//     head = (struct node *)malloc(sizeof(struct node));
//     printf("Enter your data : ");
//     scanf("%d", &data);
//     head->data = data;
//     temp = head;
//     head->next = NULL;
//     head->prev = NULL;
//     for (i = 1; i < num; i++)
//     {
//         fnode = (struct node *)malloc(sizeof(struct node));
//         scanf("%d", &data);
//         fnode->next = NULL;
//         fnode->data = data;
//         fnode->prev = temp;
//         temp->next = fnode;
//         temp = temp->next;
//     }
//     show(head);
//     head = insert(head);
//     printf("\n\n");
//     show(head);
//     return 0;
// }

// Write a program in C to delete a node middle in a doubly linked list.
// #include <stdio.h>
// #include <stdlib.h>
// struct node
// {
//     int data;
//     struct node *next;
//     struct node *prev;
// };
// void show(struct node *head)
// {
//     while (head != NULL)
//     {
//         printf("%d ", head->data);
//         head = head->next;
//     }
// }
// struct node *insert(struct node *head, int num)
// {
//     struct node *p = head, *temp, *temp2;
//     int i = 0;
//     while (i != (num / 2) - 1)
//     {
//         p = p->next;
//         i++;
//     }
//     temp2 = p->next->next;
//     temp = p->next;
//     p->next = temp->next;
//     temp2->prev = p;
//     free(temp);
//     return head;
// }
// int main()
// {
//     int num, i, data;
//     printf("Enter your number of nodes : ");
//     scanf("%d", &num);
//     struct node *fnode, *temp, *head, *ptr;
//     head = (struct node *)malloc(sizeof(struct node));
//     printf("Enter your data : ");
//     scanf("%d", &data);
//     head->data = data;
//     temp = head;
//     head->next = NULL;
//     head->prev = NULL;
//     for (i = 1; i < num; i++)
//     {
//         fnode = (struct node *)malloc(sizeof(struct node));
//         scanf("%d", &data);
//         fnode->next = NULL;
//         fnode->data = data;
//         fnode->prev = temp;
//         temp->next = fnode;
//         temp = temp->next;
//     }
//     show(head);
//     head = insert(head, num);
//     printf("\n\n");
//     show(head);
//     return 0;
// }