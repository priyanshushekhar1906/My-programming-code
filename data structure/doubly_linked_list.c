#include<stdio.h>
#include<stdlib.h>
struct node{
    struct node*prev;
    int data;
    struct node*next;



};
void doublelinkedtraversal(struct node*head){
    struct node*p=head;
    while(p!=NULL)
    {
        printf("%d\n",p->data);
        
        p=p->next;
    }
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
    head->prev=NULL;
    head->data=1;
    head->next=second;
    second->prev=head;
    second->data=2;
    second->next=third;
    third->prev=second;
    third->data=3;
    third->next=fourth;
    fourth->prev=third;
    fourth->data=4;
    fourth->next=NULL;
    doublelinkedtraversal(head);

    
    return 0; 
}