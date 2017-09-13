#include<stdio.h>
#include<stdlib.h>

struct node1
{
    int exp1;        
    int coeff1;
    struct node1*link;
}node1;

struct node2
{
    int exp2;
    int coeff2;
    struct node2*link;


}node2;

struct node3
{
    int exp3;
    int coeff3;
    struct node3*link;


}node3;


struct node1* start1=NULL;
struct node2* start2=NULL;
struct node3* start3=NULL;
void display();
void create_list1();
void create_list2();
void display_list1();
void display_list2();
void display_list3();
void add_poly();    
    
void main()
{
        
    int n,k,value,x;

    printf("################YOLOYOLOYOLOYOLOYOLO###############");
    for(;;)    
    {
        printf("\npress 1 to create list 1");
        printf("\npress 2 to create list 2");
        printf("\npress 3 to add both the lists");
        printf("\npress 4 to display the list 1");
        printf("\npress 5 to display the list 2");
        printf("\npress 6 to display the list 3");
        printf("\nEnter the value here =) ->");
        scanf("%d",&n);
        
        switch(n)
        {
            case 1:create_list1();
                break;
            case 2:create_list2();
                break;
            case 3:add_poly();
                break;
            case 4:display_list1();
                break;
            case 5:display_list2();
                break;
            case 6:display_list3();
                break;    
    
    
    
    
    }
        
    }
        
}


void create_list1()
{
    int k;int x;int i;int l;
    printf("enter how many nodes u need in list 1");
    scanf("%d",&x);
    
    struct node1* new;
    for(i=1;i<=x;i++)
   {    printf("enter coeff");
    scanf("%d",&l);
    printf("enter exp");
    scanf("%d",&k);
    
    new=(struct node1*)malloc(sizeof(node1));    
    struct node1* ptr1;
    ptr1=start1;    
    if (start1==NULL)
    {
    new=(struct node1*)malloc(sizeof(node1));
    
    new->exp1=k;
    new->coeff1=l;
    new->link=NULL;        
    start1=new;
    
    }
    else
    {
    while(ptr1->link!=NULL)
    {
       ptr1=ptr1->link;          
    }
    new=(struct node1*)malloc(sizeof(node1));    
    ptr1->link=new;    
    new->link=NULL;
    new->exp1=k;
    new->coeff1=l;
}    }
}
void create_list2()
{
    int k;int x;int i;int l;
    printf("enter how many nodes u need in list 1");
    scanf("%d",&x);
    
    struct node2* new;
    for(i=1;i<=x;i++)
   {    printf("enter coeff");
    scanf("%d",&l);
    printf("enter exp");
    scanf("%d",&k);
    
    new=(struct node2*)malloc(sizeof(node2));    
    struct node2* ptr2;
    ptr2=start2;    
    if (start2==NULL)
    {
    new=(struct node2*)malloc(sizeof(node2));
    
    new->exp2=k;
    new->coeff2=l;
    new->link=NULL;        
    start2=new;
    
    }
    else
    {
    while(ptr2->link!=NULL)
    {
       ptr2=ptr2->link;          
    }
    new=(struct node2*)malloc(sizeof(node2));    
    ptr2->link=new;    
    new->link=NULL;
    new->exp2=k;
    new->coeff2=l;
}    }
}


/*void create_list2()
{    
    int x;int k;int i;int l;
    printf("enter how many nodes u need in list 2");
    scanf("%d",&x);
    struct node2*new;
    for(i=1;i<=x;i++)
   {    
    printf("enter coeff");
    scanf("%d",&l);
    printf("enter exp");
    scanf("%d",&k);    
    new=(struct node2*)malloc(sizeof(node2));
        new->exp2=k;
        new->coeff2=l;
        start2=new;        
    if(start2==NULL)
    {
    new=(struct node2*)malloc(sizeof(node2));
    new->exp2=k;
    new->coeff2=l;
    start2=new;
    new->link=NULL;
    printf("list created");}
    
      else
        {
    new->link=NULL;
        }
    }        
         printf("list 2 created");
}*/
    void display_list1()
{
    struct node1* ptr1;
    ptr1=start1;
    if(start1==NULL)
    {
        printf("linked list doesnot exist\n");     
        
    }    
 
    while(ptr1!=NULL)
    {
      printf("%d^%d ",ptr1->coeff1,ptr1->exp1);
        ptr1=ptr1->link;
    
    }

}
    void display_list2()
{
    struct node2* ptr2;
    ptr2=start2;
    if(start2==NULL)
    {
        printf("linked list doesnot exist\n");     
        
    }    
 
    while(ptr2!=NULL)
    {
        printf("%dx^%d ",ptr2->coeff2,ptr2->exp2);
        ptr2=ptr2->link;
    
    
    }}
void display_list3()
{
    struct node3* ptr3;
    ptr3=start3;
    if(start3==NULL)
    {
        printf("linked list doesnot exist\n");     
        
    }    
 
    while(ptr3!=NULL)
    {
        printf("%dx^%d ",ptr3->coeff3,ptr3->exp3);
        ptr3=ptr3->link;
    
    
    }


    }

void add_poly()
{
    struct node3* new=NULL;
    struct node3* ptr3;    
    ptr3=start3;
    struct node2*ptr2;
    struct node1*ptr1;
    ptr1=start1;
    ptr2=start2;
    
    while(ptr1!=NULL && ptr2!=NULL)
    {
    
    struct node3* new=NULL;
    struct node3* ptr;    
    new=(struct node3*)malloc(sizeof(node3));
    if(ptr1->exp1 > ptr2->exp2)
    {    
        if (start3==NULL)
        {
            new=(struct node3*)malloc(sizeof(node3));
            new->link=NULL;
            
            new->coeff3=ptr1->coeff1;
            new->exp3=ptr1->exp1;
            start3=new;    
        }
        else
        {
            new=(struct node*)malloc(sizeof(node3));
            new->link=start3;
            new->coeff3=ptr1->coeff1;
            new->exp3=ptr1->exp1;
            start3=new;    
            }
        ptr1=ptr1->link;
    }
    
    
    else if(ptr1->exp1 < ptr2->exp2)
    {
            if (start3==NULL)
        {
            new=(struct node3*)malloc(sizeof(node3));
            new->link=NULL;
            new->coeff3=ptr2->coeff2;
            new->exp3=ptr2->exp2;
            start3=new;    
        }
        else
        {
            new=(struct node*)malloc(sizeof(node3));
            new->link=start3;
            new->coeff3=ptr2->coeff2;
            new->exp3=ptr2->exp2;
            start3=new;    
        }
            ptr2=ptr2->link;    
    }        
    
    else if(ptr1->exp1 == ptr2->exp2)
    {
            if (start3==NULL)
        {
            new=(struct node3*)malloc(sizeof(node3));
            new->link=NULL;
            new->coeff3=ptr1->coeff1+ptr2->coeff2;
            new->exp3=ptr2->exp2;
            start3=new;    
        }
        else
        {
            new=(struct node*)malloc(sizeof(node3));
            new->link=start3;
            new->coeff3=ptr1->coeff1+ptr2->coeff2;
            new->exp3=ptr2->exp2;
            start3=new;    
        }
        ptr2=ptr2->link;
        ptr1=ptr1->link;        
    }
    
    
    }
    
    

    
    
}
