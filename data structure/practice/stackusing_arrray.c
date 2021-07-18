#include<stdio.h>
#include<stdlib.h>
struct stack{
    int top;
    int size;
    int*arr;
};
void stacktraversal(struct stack*sp){
    for(int i=0;i<=sp->top;i++)
    {
        printf("pushing the element %d at %d \n",sp->arr[i],i);
    }
}
int isFull(struct stack*sp)
{
    if(sp->top==sp->size-1)
    {
        return 1;
    }
    else{
    return 0;
    }
    
}
int isEmpty(struct stack*sp)
{
    if(sp->top==-1)
    {
        return 1;
    }
    else{
    return 0;
    }
    
}
void  push(struct stack*sp,int value)
{
    if(isFull(sp))
    {
        printf("Stack overflow cannot push %d in stack\n",value);
    }
    else{
        sp->top++;
        sp->arr[sp->top]=value;
    }

}
int pop(struct stack*sp){
    if(isEmpty(sp))
    {
        printf("Stack underflow\n");
    }
    else{
       int value;
       value=sp->arr[sp->top];
       sp->top--;
       return value;

    }


}
int peek(struct stack*sp,int index)
{  
      if(sp->top+1-index<0){
    return 0;
}
  else{
      int i=sp->top+1-index;
      int value=sp->arr[i];
      return value;
  }
}
int stacktop(struct stack*sp)
{
    return sp->arr[sp->top];
}
int stackbottom(struct stack*sp)
{
    return sp->arr[0];
}
int main(){
    struct stack *sp;
    sp=(struct stack*) malloc(sizeof(struct stack));
    sp->top=-1;
    sp->size=5;
    sp->arr=(int*) malloc(sp->size*sizeof(int));
    printf("isFull %d:\n",isFull(sp));
    printf("isEmpty %d:\n",isEmpty(sp));
    push(sp,3);
    push(sp,13);
    push(sp,98);
    push(sp,48);
    push(sp,38);
    // push(sp,328);
    // push(sp,38);   stack overflow
    stacktraversal(sp);
    printf("Elemnt %d is popped from stack\n",pop(sp));
    printf("Elemnt %d is popped from stack\n",pop(sp));
       stacktraversal(sp);
      
        //  printf("Element %d is peeked from top\n ",peek(sp,1));
        //  printf("Element %d is peeked from top\n ",peek(sp,2));
        //  printf("Element %d is peeked from top\n ",peek(sp,3));
        //  printf("Element %d is peeked from top\n ",peek(sp,4));
       
       for(int i=1;i<=sp->top+1;i++)
       {
           if(peek(sp,i)){
           printf("Element %d is peeked from top to position %d\n",peek(sp,i),i);
           }
       }
        printf("The top element of stack is %d\n",stacktop(sp));
    printf("The bottom element of stack is %d\n",stackbottom(sp));
     printf("isFull %d:\n",isFull(sp));
    printf("isEmpty %d:\n",isEmpty(sp));
    
    return 0; 
}