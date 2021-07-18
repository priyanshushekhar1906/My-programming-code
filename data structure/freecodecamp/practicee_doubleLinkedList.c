#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next,*prev;

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
void insert(int data)
{
    struct node*p=(struct node*) malloc(sizeof(struct node));
    if(head==NULL)
    {
        p->data=data;
        p->next=NULL;
        p->prev=NULL;
        head=p;
    }
    else{
        struct node*p1=head;
        while(p1->next!=NULL)
        {
            p1=p1->next;
        }
        p1->next=p;
         p->prev=p1;
        p->data=data;
        p->next=NULL;
    }
}
void Reverse(){
    struct node*current=head;
    struct node*next;
    struct node*prev;
    while(current!=NULL)
    {
        next=current->next;
         current->next=current->prev;
        current->prev=next;
       prev=current;
        current=next;
    }
    head=prev;
}
int main(){

    // insert(10);
    // insert(20);
    // insert(30);
    // insert(40);
    // traverse();
    // Reverse();
    // traverse();
    
    return 0; 
}