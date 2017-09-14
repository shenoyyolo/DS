#include<stdio.h>
#include<stdlib.h>



	struct node
	{
	int info;
	struct node* link;

	}node;

	struct node *start1=NULL;
	struct node *start2=NULL;
	void display();
	void create_l1(int k);
	void create_l2(int k);
	void aim();
	void main()
     {
	int k,n,value;
	
	
	for(;;)
	{
	printf("\n1 for creating list 1\n2 for creating list 2\n3 for displaying list 1\n4 for displaying list 2 \n5 for insertion");	
	
	scanf("%d",&n);
	  switch(n)
	  {
	 	case 1:printf("enter the number to be inserted\n");
			scanf("%d",&k);
			create_l1(k);
			break;	
		case 2:printf("enter the number to be inserted\n");
			scanf("%d",&k);
			create_l2(k);
			break;
		case 3:display1();	
			break;	
		case 4:display2();
			break;
		case 5:
			aim();
			break;
		
		}	
	}
     }
void aim()
{
	struct node *ptr1;
	struct node *ptr2;
	struct node *ptr;
	//trying to make it user freindly..still in progress.
	/*while(ptr1->info!=k)
	{
		ptr1=ptr1->link;
		
	}
		ptr3=ptr1->link;
		while(ptr2->info!=value)
		{
			ptr2=ptr2->link;
		}
		ptr1->link=ptr2;
		while(ptr1->link!=NULL)
		{
			ptr1=ptr1->link;	
		}
		
	*/ 
	ptr1=start1;
	ptr2=start2->link;
	ptr=start2;
	while(ptr->link!=NULL)
	{
	ptr=ptr->link;
	}
	ptr->link=ptr1->link;
	ptr1->link=ptr2;	
	
	
	}
void create_l1(int k)
{
    struct node* new = NULL;
    if(start1 == NULL)
    {
        new = (struct node*)malloc(sizeof(node));
        new->link = NULL;
       
        new->info = k;
        start1 = new;
        printf("Linked List Created. %d added.\n\n",k);
        
        return;
    } 
          
    new = (struct node*)malloc(sizeof(node));
    
    new->info = k;
    new->link = start1;
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
        
        new->info = k;
        start2 = new;
        printf("Linked List Created. %d added.\n\n",k);
        
        return;
    } 
          
    new = (struct node*)malloc(sizeof(node));
    
    new->info = k;
    new->link = start2;
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
        printf("%d ",trav->info);
        trav = trav->link;
    }
    printf("%d ",trav->info);
  
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
        printf("%d ",trav->info);
        trav = trav->link;
    }
    printf("%d ",trav->info);
  
    printf("\n\n");
}
