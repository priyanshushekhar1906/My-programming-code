#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
void circulartraversal(struct node*head)
{
    struct node*ptr=head;
    //printf("%d\n",ptr->data);
    // ptr=ptr->next; 
   do{
    printf("%d\n",ptr->data);
    ptr=ptr->next;
   }while(ptr!=head);
}
struct node* insertatfirst(struct node*head,int data)
{
    struct node*ptr1;
    ptr1=(struct node*)malloc(sizeof(struct node));
     struct node*p=head->next;
     ptr1->data=data;
     while(p->next!=head)
     {
         p=p->next;
     }
    //  at this point p point to the last node of this circular linked list
     p->next=ptr1;
     ptr1->next=head;
     head=ptr1;
     return head;

}
struct node*insertatindex(struct node*head,int index,int data)
{
    struct node*ptr1;
    ptr1=(struct node*)malloc(sizeof(struct node));
     struct node*p=head;
     ptr1->data=data;
    int i=0;
    while(i!=index-1)
    {
        p=p->next;

        i++;
    }
    //  at this point p point to the last node of this circular linked list
    ptr1->next=p->next;
    p->next=ptr1;
     return head;

}

int main(){
     struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;
    head=(struct node*) malloc(sizeof(struct node));
    second=(struct node*) malloc(sizeof(struct node));
    third=(struct node*) malloc(sizeof(struct node));
    fourth=(struct node*) malloc(sizeof(struct node));
    head->data=1;
    head->next=second;
    second->data=2;
    second->next=third;
    third->data=3;
    third->next=fourth;
    fourth->data=4;
    fourth->next=head;
    printf("circular Linked list before insertion\n");
    circulartraversal(head);
    // head=insertatfirst(head,0);
    // head=insertatfirst(head,1);
    // head=insertatfirst(head,2);
     printf("circular Linked list after insertion\n");
      head=insertatindex(head,3,14);
     circulartraversal(head);


    
    return 0;

}