#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
void stacktraversal(struct node*ptr){
    while(ptr!=NULL)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }

}
int isEmpty(struct node*top)
{
    if(top==NULL)
    {
        
        return 1;
    }
    return 0;

}
int isFull(struct node*top)
{
    struct node* ptr=(struct node*) malloc(sizeof(struct node));
    if(ptr==NULL)
    {
       
        return 1;
    }
   return 0;
}
struct node* push(struct node*top,int x)
{
    if(isFull(top)){
        printf("Stack Overflow\n");

    }
    else{

        struct node*n=(struct node*) malloc(sizeof(struct node));
        n->data=x;
        n->next=top;
        top=n;
        return top;
    }

}
int pop(struct node**top)
{
    if(isEmpty(*top)){
        printf("Stack underflow\n");

    }
    else{
        struct node*n=*top;
        *top=(*top)->next;
        int x=n->data;
        free(n);  
        return x;
    }

}

int main(){
    struct node*top=NULL;
    top=push(top,89);
    top=push(top,9);
    top=push(top,19);
    int element=pop(&top);
    printf("Popped element is %d\n",element);
    stacktraversal(top);
    
    return 0; 
}