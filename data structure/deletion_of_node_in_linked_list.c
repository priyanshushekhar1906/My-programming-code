#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
void traversal(struct node*first)
{
    printf("The data of the link list  are:\n");
    while(first!=NULL)
    {
        printf("%d\n",first->data);
        first=first->next;
    }
}
// case 1:deletion of first node
struct node* deletionatfirst(struct node*head)
{
    struct node*ptr=head;
    head=head->next;
     free(ptr);
    return head;
     
}
// case2 deleting a inbetween node at a given index
struct node*  deletioninbetween(struct node*head,int index){
    struct node*p=head;
     struct node*q= head->next;
    for (int i = 0; i < index-1; i++) 
    {
        p=p->next;
        q=q->next;
    }
    p->next=q->next;
     free(q);
    return head;
   
}
// case:3 deleting a last node
struct node*  deletelastnode(struct node*head){
    struct node*p=head;
     struct node*ptr=head->next;
     while(ptr->next!=NULL)
     {
         ptr=ptr->next;
         p=p->next;
     }
  
     p->next=NULL;
        free(ptr);
     
    return head;
   
}
// case4 deleting a element with a given value
struct node* deletingwithvalue(struct node*head,int value){
    struct node*p=head;
     struct node*q= head->next;
    while(q->data!=value && q->next!=NULL)
    {
        p=p->next;
        q=q->next;
    }
    if(q->data==value){
    p->next=q->next;
    }
     free(q);
    return head;
   
}


int main(){
    struct node *head;
    
    head=(struct node*) malloc(sizeof(struct node));
     struct node *second;
    second=(struct node*) malloc(sizeof(struct node));
    struct node *third;
    third=(struct node*) malloc(sizeof(struct node));
     struct node *fourth;
    fourth=(struct node*) malloc(sizeof(struct node));
    head->data=4;
    head->next=second;
    second->data=3;
    second->next=third;
    third->data=8;
    third->next=fourth;
    fourth->data=1;
    fourth->next=NULL;
  printf("Linked list before deletion\n");
    traversal(head);
    // head=deletionatfirst(head);
    // head=deletioninbetween(head,1);
    // head=deletelastnode(head);
    head=deletingwithvalue(head,3);
    printf("Linked list after deletion\n");
      traversal(head);


    
    
    
    return 0; 
}