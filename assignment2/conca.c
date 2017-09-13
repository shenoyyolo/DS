#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* link;
    struct node* prev;
}node;

struct node* start1 = NULL;
struct node* start2 =NULL;


void create_l1(int k);
void create_l2(int k);
void conca();
void main()
{

	int k,n,i,j;
	for(;;)
	{	
		printf("\n1 for creating list 1\n");
		printf("2 for creating list 2\n");
		printf("3 for display list 1\n");
		printf("4 for display list 2\n");
		printf("5 for conca\n");
		printf("6 for display conca\n");
		scanf("%d",&n);
		
		switch(n)
		{
		case 1:printf("enter value");
			scanf("%d",&k);
			create_l1(k);
			break;
		case 2:printf("enter value");
			scanf("%d",&k);
			create_l2(k);
			break;
		case 3:display1();
			break;
		case 4:display2();
			break;
		case 5:	conca();
			break;
		case 6:display1();
			break;
		
		}
	}	
}
void conca()
	{
	struct node*ptr1;
	struct node*ptr2;
	ptr1=start1;
	ptr2=start2;
	

while(ptr1->link!=NULL)
{

	ptr1=ptr1->link;
}
ptr1->link=start2;
start2->link->prev=ptr1;

}
void create_l1(int k)
{
    struct node* new = NULL;
    if(start1 == NULL)
    {
        new = (struct node*)malloc(sizeof(node));
        new->link = NULL;
        new->prev = NULL;
        new->data = k;
        start1 = new;
        printf("Linked List Created. %d added.\n\n",k);
        
        return;
    } 
          
    new = (struct node*)malloc(sizeof(node));
    
    new->data = k;
    new->link = start1;
    new->prev = NULL;
    start1->prev = new;
    start1 = new;
    
    printf("Added %d at beginning.\n\n",k);
}

void create_l2(int k)
{
    struct node* new = NULL;
    if(start2 == NULL)
    {	
        new = (struct node*)malloc(sizeof(node));
        new->link = NULL;
        new->prev = NULL;
        new->data = k;
        start2 = new;
        printf("Linked List Created. %d added.\n\n",k);
        
        return;
    } 
          
    new = (struct node*)malloc(sizeof(node));
    
    new->data = k;
    new->link = start2;
    new->prev = NULL;
    start2->prev = new;
    start2 = new;
    printf("Added %d at beginning.\n\n",k);
    
}
void display1()
{
    if(start1 == NULL)
    {
        printf("Linked List does not exit.\n");
        return;
    }

    struct node* trav;
    trav = start1;
    printf("Linked List is: ");

    while(trav->link != NULL)
    {
        printf("%d ",trav->data);
        trav = trav->link;
    }
    printf("%d ",trav->data);
  
    printf("\n\n");
}
void display2()
{
    if(start2 == NULL)
    {
        printf("Linked List does not exit.\n");
        return;
    }

    struct node* trav;
    trav = start2;
    printf("Linked List is: ");

    while(trav->link != NULL)
    {
        printf("%d ",trav->data);
        trav = trav->link;
    }
    printf("%d ",trav->data);
  
    printf("\n\n");
}
