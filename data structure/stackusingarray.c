#include<stdio.h>
#include<stdlib.h>
struct stack{
    int top;
    int size;
    int *arr;
};
int isEmpty(struct stack *ptr){

    if(ptr->top==-1)
    {
        return 1;
    }
    else{
    return 0;
    }
    
}
int isFull(struct stack*ptr){
    if(ptr->top==ptr->size-1)
    {
        return 1;
    }
    else{
    return 0;
    }
    
}
int main(){
    // struct stack s;
    // s.size=10;
    // s.top=-1;
    // s.arr=(int*) malloc(s.size*sizeof(int)); 
    // we will use a pointer a variable
  struct stack *s;
  s=(struct stack*) malloc(sizeof(struct stack));
  s->top=-1;
  s->size=9;
  s->arr=(int*) malloc(s->size * sizeof(int));

     if(isFull(s))
    {
        printf("The stack is full\n");
    }
    else{
        printf("Stack is not full\n");
        // s->top=s->top+1;
        // s->arr[s->top]=val;

    }


    // Checking if stack is empty or not
   
    if(isEmpty(s)){
        printf("The stack is empty\n");
    }
    else{
        printf("Stack is not empty\n");
    }
   
 
   
    
    return 0; 
}