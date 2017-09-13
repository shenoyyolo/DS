#include<stdio.h>
#include<stdlib.h>

struct node
{
 	int info;
 	struct node* link;
 	
}node;
	
	
struct node * start=NULL;

void create_ll(int k);
void display_ll();		
void reverse();

void main()
{
	int i,j,k,l,n;
	
	for(;;)
	{
		printf("\npress 1 to create linked list\n");
		printf("press 2 to reverse the linked list\n");
		printf("press 3 to display the linked list\n");
		printf("press 4 to display the reversed linked list\n");
		printf("press 99 to exit\n");
		scanf("%d",&n);
		switch(n)
		{
		
		case 1:printf("\nenter element to be entered\n");
			scanf("%d",&k);
			create_ll(k);
			break;
		case 2:reverse();
			break;
		case 3:display_ll();
			break;
		case 4:printf("the linked list after reversal is:\n");
			void display_ll();
			break;
									
		}

	}
								
}					
void create_ll(int k)
{  
    struct node *new;
    if(start==NULL)
    {  
         new=(struct node*)malloc(sizeof(node));
         new->link=NULL;
         new->info=k;
         start=new;
         printf("linked list created.%d added\n",k);   
    }  
        else
       {  new=(struct node*)malloc(sizeof(node));
        new->link=start;
        new->info=k;
        start=new;         
        printf("%d added\n",k);
	}
}
   
void display_ll()
{
    struct node* ptr;
    ptr=start;
    if(start==NULL)
    {
        printf("linked ist doesnot exist\n");    
       
    }  
 
    while(ptr!=NULL)
    {
        printf("%d ",ptr->info);
        ptr=ptr->link;
   
   
    }
 
}		

void reverse()
{
	struct node* preptr;
	struct node* ptr;
	struct node* postptr;
		ptr=start;
		preptr=NULL;
		while(ptr!=NULL)
		{
			postptr=ptr->link;
			ptr->link=preptr;
			preptr=ptr;
			ptr=postptr;			
		}
		start=preptr;

}
