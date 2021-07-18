#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*prev;
    struct node*next;
};
struct node*head=NULL;
void traverse()
{
    struct node*p=head;

    while(p!=NULL)
    {
        printf("%d ",p->data);
        p=p->next;
    }
    printf("\n");
}
void Reversetraverse()
{
    printf("\nReverse linked list\n");
    struct node*p=head;
    if(p==NULL)
    {
        printf("Stack is empty\n");
        return;
    }
    while(p->next!=NULL)
    {
        p=p->next;
    }
    while(p!=NULL)
    {
        printf("%d ",p->data);
        p=p->prev;
    }
}
void insertionAtBeg(int data)
{
    struct node*p=(struct node*) malloc (sizeof(struct node));
    if(head==NULL)
    {
       p->data=data;
       p->next=NULL;
       p->prev=NULL;
       head=p;
    }
    else{
    p->next=head;
    p->data=data;
    p->prev=NULL;
    head->prev=p;
    head=p;
    }
}
void insertionAtEnd(int data)
{
    struct node*p=(struct node*) malloc (sizeof(struct node));
    if(head==NULL)
    {
       p->data=data;
       p->next=NULL;
       p->prev=NULL;
       head=p;
    }
    else{
        struct node*q=head;
        while(q->next!=NULL)
        {
            q=q->next;
        }
    q->next=p;
    p->prev=q;
    p->data=data;
    p->next=NULL;
   
    }
}
int main(){
    // insertionAtBeg(1);
    // insertionAtBeg(2);
    // insertionAtBeg(3);
    insertionAtEnd(31);
    insertionAtEnd(3112);
    insertionAtEnd(312);
    insertionAtEnd(12);
     traverse();
     Reversetraverse();
    return 0; 
}