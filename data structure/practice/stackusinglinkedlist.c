#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
void stacktraversal(struct node*top)
{
    while(top!=NULL)
    {
        printf("%d\n",top->data);
        top=top->next;
    }
}
int isEmpty(struct node*top)
{
    if(top==NULL)
    {
        printf("Stack is Empty");
        return 1;
    }
    else return 0;

}
int isFull(struct node*top)
{
    struct node*p=(struct node*) malloc(sizeof(struct node));
    if(p==NULL)
    {
        return 1;
    }
    else 
    {
        return 0;
    }

}
struct node*push(struct node*top,int data)
{
    if(isFull(top))
    {
        printf("Stack is Full you can not put %d data in stack\n",data);
         
    }
    else{
    struct node*n=(struct node*) malloc(sizeof(struct node));
    n->data=data;
    n->next=top;
    top=n;
    return top;
    }
}
int  pop(struct node**top)
{
    if(isEmpty(*top))
    {
        printf("Stack underflow\n");
    }
    else{
    struct node*p=*top;
    int var=p->data;
    *top=(*top)->next;
    free(p);
    return var;
    }

}


int main()
{
    struct node*top=NULL;
   top= push(top,3); 
   top= push(top,31);
   top= push(top,311);
   stacktraversal(top);
  printf("Element %d is popped from stack\n",pop(&top)); //We have to send the address of top to update over top=top->next;
  printf("Element %d is popped from stack\n",pop(&top));
  printf("Element %d is popped from stack\n",pop(&top));
//   printf("Element %d is popped from stack\n",pop(&top));  
    stacktraversal(top);


    return 0;
}