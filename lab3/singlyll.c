#include<stdio.h>
#include<stdlib.h>



    struct node
    {
    int info;
    struct node* link;

    }node;

    struct node *start=NULL;
    void delete_beginning();
    void display();
    void insert_beginning(int k);
    void delete_end();
    void insert_end(int k);
    void insert_after(int k,int value);
    void delete_after(int value);
    void main()
     {
    int k,n,value;
    
    
    for(;;)
    {
    printf("\n1 for insertion in beginning\n2 for display\n3 delete from end\n4 for delete beginning\n5 for insertion at end\n 6 for insertion after a value\n7 for deletion after a value\n");    
    
    scanf("%d",&n);
      switch(n)
      {
         case 1:printf("enter the number to be inserted\n");
            scanf("%d",&k);
            insert_beginning(k);
            break;    

        case 2:display();    
            break;    
        case 3:delete_end();
            break;
        case 4:delete_beginning();
            break;
        case 5:printf("enter the number to be inserted\n");
            scanf("%d",&k);
            insert_end(k);
            break;
        case 6:printf("enter number to be inserted \n");    
                scanf("%d",&k);
            printf("enter the value after which it has to be inserted\n");
            scanf("%d",&value);
            insert_after(k,value);
            break;
        case 7:printf("enter the value after which it has to be deleted\n");
            scanf("%d",&value);
            delete_after(value);  
            break;
        }    
    }
     }

void delete_after(int value)
{
    if(start==NULL)
    {
        printf("linked list doesnot exists");    
    
    }    
        struct node*ptr;
        ptr=start;
        struct node*preptr;
        preptr=start;
        while(ptr->info!=value)
        {    
            preptr=ptr;
            ptr=ptr->link;
        }
        preptr->link=ptr->link;
        free (ptr);
}
void insert_after(int k,int value)
{
    struct node *new;
    struct node *ptr;    
    if(start==NULL)
    {
     new=(struct node*)malloc(sizeof(node));
    new->info=k;
    new->link=NULL;
    start=new;
    }
    new=(struct node*)malloc(sizeof(node));
    ptr=start;
    while(ptr->info!=value)
    {
      ptr=ptr->link;
    }
    new->link=ptr->link;
    ptr->link=new;
    new->info=k;
    printf("%d added after %d",k,value);

}
void insert_end(int k)
{
    struct node* new;
        
    if (start==NULL)
    {
    new=(struct node*)malloc(sizeof(node));
    
    new->info=k;
    new->link=NULL;        
    start=new;
    }
    new=(struct node*)malloc(sizeof(node));    
    struct node* ptr;
    ptr=start;
    while(ptr->link!=NULL)
    {
      
       ptr=ptr->link;
               
    }    
    ptr->link=new;    
    new->link=NULL;
    new->info=k;
    
    
}
void delete_beginning()
{
    if (start==NULL)
    {
        printf("linked list doesnot exists");
        return;
        }
    struct node* preptr;
    preptr=start;
    start=start->link;
    free(preptr);
    
}

void delete_end()
{     
    struct node *ptr;
    struct node *preptr;
    ptr=start;
    preptr=start;
         if(start==NULL)
    {
           printf("linked list doesnt exist");        
    
       }
    
    while(ptr->link!=NULL)
    {
    preptr=ptr;        
    ptr=ptr->link;     
    }    
        preptr->link=NULL;            
        free (ptr);

    }

void insert_beginning(int k)
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
    }}
   
void display()
{
    struct node* ptr;
    ptr=start;
    if(start==NULL)
    {
        printf("linked list doesnot exist\n");     
        
    }    
 
    while(ptr!=NULL)
    {
        printf("%d ",ptr->info);
        ptr=ptr->link;
    
    
    }

}
