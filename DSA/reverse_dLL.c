#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

struct node *head = NULL;
struct node *temp = NULL;

int create()
{
    int a;
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the number = ");
    scanf("%d", &newnode->data);
    newnode->next = NULL;
    newnode->prev = NULL;

    if (head == NULL)
    {
        head = temp = newnode;
        
    }
    else
    {
        temp->next = newnode;
        newnode->prev = temp;
        temp=newnode;
    }
}
void Reverse(){
	struct node*curr,*next,*pre;
	next=pre=0;
	curr=head;
	while(curr!=0){
		next=curr->next;
		curr->next=pre;
		curr->prev=next ;
		pre=curr;
		curr=next;
	}
	head=pre;
}


int Display()
{
	struct node *store=head;
	if(store==NULL)
	{
		printf("List is empty");
	}
	else
	{
		while(store!=NULL)
		{
			printf("%d ",store->data);
			store=store->next;
		}
	}
}
int frontdelete()
{
	temp=head;
	head=head->next;
	free(temp);
}



int main()
{
    int n = 1;
    printf("1.Create\n2.Display\n3.Reverse\n.4.front delete\n");
    do
    {
        printf("\nChoose the option = ");
        scanf("%d", &n);
        switch 
        {
        case 1:
            create();
            break;
        case 2:
            Display();
            break;
        case 3:
            Reverse();
            break;
        case 4:
        	frontdelete();
        	break;
        default:
            printf("Choose the valid option");
        }

    } while (n);

    return 0;
}