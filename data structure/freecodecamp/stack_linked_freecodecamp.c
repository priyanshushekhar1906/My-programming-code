#include<stdio.h>
#include<stdlib.h>
struct stack{
    int data;
    struct stack*next;
};
struct stack*top=NULL;
void traverse()
{
    struct stack*p=top;
    printf("Stack is :");
    while(p!=NULL)
    {
        printf("%d ",p->data);
        p=p->next;
    }
    printf("\n");
}
void push(int x)
{
    struct stack*p=(struct stack*) malloc(sizeof(struct stack));
    if(top==NULL)
    {
        p->data=x;
        p->next=top;
        top=p;
    }
    else{
        p->data=x;
        p->next=top;
        top=p;
    }
}

int pop(){
    if(top==NULL)
    {
        printf("Stack is empty\n");
      return 0;
    }
    else{
        struct stack*p=top;
        int x= top->data;
        top=top->next;
        free(p);
     return x;
    }

}
int topmost(){

    if(top==NULL)
    {
        printf("Stack is empty\n");
      return 0;
    }
    else{
        int x=top->data;
        return x;
    }
}

int main(){
    push(12);
    push(24);
    push(32);
    push(2);
    push(200);
    printf("Element %d poped from the stack\n",pop());
    // printf("Element %d poped from the stack\n",pop());
    printf("Element %d is tooped in the stack\n",topmost()); 
    traverse();

    
    return 0; 
}