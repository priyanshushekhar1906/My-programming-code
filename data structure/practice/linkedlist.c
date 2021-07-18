#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
void  linkedlisttraversal(struct node*head){
    while(head!=NULL)
    {
        printf("The elemnt is %d\n",head->data);
        head=head->next;
    }
}
// void  linkedlistreversetraversal(struct node*head){
//     int i=0,a[20];
//     while(head!=NULL)
//     {
//         for(int i=0;i<4;i++)
//         {
//             a[i]=head->data;
//             head=head->next;
//         }
      
//     }
//     printf("Reverse string is \n");
//      for(int i=3;i>=0;i--)
//         {
//             printf("%d\n",a[i]);
//         }


// }
// **********Insertion operation***********
// struct node* insertionatfirst(struct node*head,int data){
//     struct node*ptr=(struct node*) malloc(sizeof(struct node));
//     ptr->data=0;
//     ptr->next=head;
//     head=ptr;
//     return head;

// }
struct node* insertioninbetween(struct node*head,int data,int index){
    struct node*ptr=(struct node*) malloc(sizeof(struct node));
    struct node*p=head;
    int i=0;
    while(i<index-1)
    {
        p=p->next;
        i++;
    }
    ptr->data=data;
    ptr->next=p->next; 
    p->next=ptr;
    return head;
}
// struct node* insertionatend(struct node*head,int data){
//     struct node*ptr=(struct node*) malloc(sizeof(struct node));
//     struct node*p=head;
//     while(p->next!=NULL)
//     {
//         p=p->next;
//     }
//     ptr->data=data;
//     p->next=ptr;
//     ptr->next=NULL;
//     return head;
// }
// struct node* insertionafternode(struct node*head,int data,struct node*ptr){
//     struct node*p=(struct node*) malloc(sizeof(struct node));
//     p->data=data;
//     p->next=ptr->next;
//     ptr->next=p;
//     return head;
    
// }
// ***********Deletion operation
// struct node* deletionatfirst(struct node*head)
// {
//     struct node*p=head;
//     head=head->next;
//     free(p);
//    return head;
// }
// struct node* deletioninbetween(struct node*head,int index)
// {
//     struct node*p=head;
//     struct node*ptr=head->next;
//     int i=0;
//     while(i<index-1)
//     {
//         p=p->next;
//         ptr=ptr->next;
//         i++;
//     }
//     p->next=ptr->next;
//      free(ptr);
//     return head;
   
    
// }
// struct node* deletionatend(struct node*head)
// {
//     struct node*p=head;
//     struct node*ptr=head->next;
//     while(ptr->next!=NULL)
//     {
//         p=p->next;
//         ptr=ptr->next;

//     }
//     free(ptr);
//     p->next=NULL;
//     return head;
   
    
// }
// struct node* deletionatwithvalue(struct node*head,int value)
// {
//     struct node*p=head;
//     struct node*ptr=head->next;
//     while(ptr->data!=value && ptr->next!=NULL)
//     {
//         p=p->next;
//         ptr=ptr->next;

//     }
//     if(ptr->data==value){
//      p->next=ptr->next;
//     }
//     free(ptr);
   
//     return head;
   
    
// }
struct node* reverse(struct node*head)
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
    return head;
}
// void reversePrintRecursive(struct node*head)
// {
//     struct node*temp=head;
//     if(temp==NULL)
//     {
//         return;
//     }
//      reverseRecursive(temp->next);
//     printf("%d ",temp->data);
   

// }
void reverseRecursive(struct node*p)
{
    if(p->next==NULL)
    {
        head=p;
       return;
    }
    reverseRecursive(p->next);
    struct node*q=p->next;
    q->next=p;
    p->next=NULL;
}
int main(){
    struct node*head;
    head=(struct node*) malloc(sizeof(struct node));
    struct node*second;
    second=(struct node*) malloc(sizeof(struct node));
    struct node*third;
    third=(struct node*) malloc(sizeof(struct node));
    struct node*fourth;
    fourth=(struct node*) malloc(sizeof(struct node));
    head->data=1;
    head->next=second;
    second->data=2;
    second->next=third;
    third->data=3;
    third->next=fourth;
    fourth->data=4;
    fourth->next=NULL;
    printf("Linked list before insertion\n");
    linkedlisttraversal(head);
    // linkedlistreversetraversal(head);
    // Calling insertion
    //  head=insertionatfirst(head,2);
    // head=insertioninbetween(head,33,3);
    // head=insertionatend(head,343);
    // head=insertionafternode(head,3493,third);
    // printf("Linked list after insertion\n");
    printf("Linked list after Reverse\n");
     reverseRecursive(head);
    // head=reverse(head);
    // Calling deletion
    // printf("Linked list after deletion\n");
    //  head=deletionatfirst(head);
    //  head=deletioninbetween(head,3);
    //  head=deletionatend(head);
    //  head=deletionatwithvalue(head,3);
    linkedlisttraversal(head); 
    return 0; 
}