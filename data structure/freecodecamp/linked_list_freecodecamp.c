#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
struct node*head;
void traverse()
{
   struct node*temp=head;
    printf("List is :");
    while(temp!=NULL)
    { 
        printf(" %d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
// void insertion(struct node**head,int x)
// {
//     struct node*ptr=(struct node*) malloc(sizeof(struct node));
//     ptr->data=x;
//     ptr->next=*head;
//     *head=ptr;
   
// }
void insertionatpostion(int data,int n)
{
    struct node*ptr=head;
    struct node*p=(struct node*) malloc(sizeof(struct node));
     p->data=data;
    int i=1;
    while(i<n-1)
    {
        ptr=ptr->next;
        i++;
        
    } 
    if(n==1)
    {
       
        p->next=head;
        head=p;
        return;
    }
    else{
    p->next=ptr->next;
    ptr->next=p;
    }

   
}
// void deleteanode(int n)
// {
//     struct node*ptr=head;
//     struct node*ptr1=head->next;
//     if(n==1)
//     {
//         head=ptr1;
//         free(ptr);
//         return;
//     }
//     else{
//     int i=1;
//     while(i<n-1){
//         ptr=ptr->next;
//         ptr1=ptr1->next;
//         i++;
//     }
//     ptr->next=ptr1->next;
//     free(ptr1);
//     }
// }
void reverse()
{
    struct node*current,*prev,*next;
    current=head;
    prev=NULL;
    while(current!=NULL)
    {
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
    head=prev;
}

int main(){ 
   struct node* head=NULL;
   insertionatpostion(12,1);
   insertionatpostion(122,2);
   insertionatpostion(1322,3);
   insertionatpostion(11342,4); 
//    traverse();
//    deleteanode(1);
//    deleteanode(3);
    //  reverse();
     traverse();
    //  reverseRecursive();
        //   traverse();
   
   

    
    return 0; 
}