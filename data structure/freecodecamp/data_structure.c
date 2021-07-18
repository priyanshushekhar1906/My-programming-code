#include<stdio.h>
#include<stdlib.h>
// A data structure is a way to store and organize data in a computer, so that it can be used efficiently
// we talk about data structures as
// 1:mathematical/logical models or abstract data types
// 2:Implementaton
// ADT defines data and operations ,but no implementation.
// Arrays-->The problem with array that if we want to insert element in fully filled array we have to create new array of bigger size and then we have to copy element of previous arrays
// Linked-list-->We can insert as many element as we want 
struct stackNode{
    struct stackNode*next;
    int data;
};
struct stackNode*top=NULL;
void traverse()
{
    struct stackNode*p=top;
    printf("Stack is :");
    while(p!=NULL)
    {
        printf("%d ",p->data);
        p=p->next;
    }
    printf("\n");
}
void push(int data){
    struct stackNode*newnode=(struct stackNode*) malloc(sizeof(struct stackNode));
    if(top==NULL)
    {
        newnode->data=data;
        newnode->next=NULL;
        top=newnode;
    }
    else{
        newnode->data=data;
        newnode->next=top;
        top=newnode;
    }
}
void pop(){
    struct stackNode*p=top;
    top=top->next;
    free(p);
}
int topElement()
{
    return top->data;
}

int main(){
    push(1);
    push(2);
    push(3);
    push(4);
    // pop();
    // pop();
    printf("Top element is %d\n",topElement());
    traverse();
    return 0;
}