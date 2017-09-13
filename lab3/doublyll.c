#include<stdio.h>
#include<stdlib.h>


struct node
{
    int info;
    struct node *link;
    struct node *prev;
}node;

struct node *start=NULL;    

void insert_beginning(int k);
void insert_after(int k,int value);
void delete_end();
void display();
void main ()
{    
    int n,k,value;
    printf("#############################YOLO######################");
    for(;;)
    {
        printf("\n1.Insert beginning");
        printf("\n2.Insert after");
        printf("\n3.Display the list");
        printf("\n4.Delete end");
        printf("\nENTER THE VALUE HERE =) ->");
        scanf("%d",&n);    
              switch(n)
          {    
        case 1: printf("Enter the number which is to be inserted");
            scanf("%d",&k);            
            insert_beginning(k);
            break;    
        case 2:printf("\nEnter the number which is to be inserted");
            scanf("%d",&k);    
            printf("\nEnter the value after which is to be inserted");
            scanf("%d",&value);            
            insert_after(k,value);
            break;
        case 3:display();
            break;
        case 4:delete_end();
            break;
             }         
    }
}


       void insert_beginning(int k)
     {
        struct node* new=NULL;
        struct node*ptr;
        if(start==NULL)
        {
            new=(struct node*)malloc(sizeof(node));
            start=new;
            new->link=NULL;
            new->prev=NULL;
            new->info=k;
            printf("list created.\n");
        }    
            
            new=(struct node*)malloc(sizeof(node));
            new->link=start;
            new->info=k;
            new->prev=NULL;
            start->prev=new;
            start=new;
            printf("%d added\n",k);
    
        }
    
    void insert_end(int k)
    {    
        struct node* new;
        struct node* ptr;
        struct node* preptr;
        ptr=start;
        preptr=start;
        if(start==NULL)
        {
            new=(struct node*)malloc(sizeof(node));
            start=new;
            new->link=NULL;
            new->prev=NULL;
            new->info=k;
            printf("list created.\n");
        }
                    
            new=(struct node*)malloc(sizeof(node));
            while(ptr->link=NULL)
            {    
                preptr=ptr;
                ptr=ptr->link;
                
            }
            new->link=NULL;
            new->prev=preptr->link;
            ptr->link=new;
                    
        }
    
    
    
    void delete_end()
    {
        if(start==NULL)
        {
            printf("linked list doesnt exist");    
            
        }    
    
        struct node*ptr;
        ptr=start;    
        
    while(ptr->link!=NULL)
    {
        ptr=ptr->link;    
    }
        
    ptr->prev->link=NULL;
    free(ptr);
    printf(" deleted the last node");
    
    }
    
    void display()
    {
        struct node* ptr;
        ptr=start;
        while(ptr->link!=NULL)
        {
        printf("%d \n",ptr->info);
        ptr=ptr->link;
        
        }
    }
void insert_after(int k,int value)
{        
    struct node* ptr;
    struct node *new;
    if(start==NULL)
    {
        printf("Linked list doesnt exists");    
    
    }
        new=(struct node*)malloc(sizeof(node));
        new->info=k;
        ptr=start;
        while(ptr->info!=value)
        {
            ptr=ptr->link;        
        }
            new->link=ptr->link;
            new->prev=ptr;
            ptr->link=new;
            new->link->prev=new;
            printf("%d added after %d",k,value);    
    }
