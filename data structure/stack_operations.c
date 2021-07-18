#include<stdio.h>
#include<stdlib.h>
struct stack{
    int size;
    int top;
    int*arr;


};
int isFull(struct stack*ptr)
{
    if(ptr->top==ptr->size-1)
    {
        return 1;
    }
    return 0;
}
int isEmpty(struct stack*ptr)
{
    if(ptr->top==-1)
    {
        return 1;
    }
    return 0;
}
void push(struct stack *ptr,int value)
{
     if(isFull(ptr))
    {
        printf("Stack overflow! cannot push %d to the stack\n",value);
    }
    else{
    ptr->top++;
    ptr->arr[ptr->top]=value;
    }

}
int pop(struct stack*ptr)
{
    if(isEmpty(ptr))
    {
        printf("Stack underflow! cannot pop from the stack");
        return -1;
    }
    else{
        int value=ptr->arr[ptr->top];
        ptr->top--;
        return value;
    }
    
}

int main(){
    struct stack *sp=(struct stack*) malloc(sizeof(struct stack));
    sp->size=10;
    sp->top=-1;
    sp->arr=(int *) malloc(sp->size*sizeof(int));
    printf("Stack has been created successfully\n");
    printf("Before pushing Full: %d\n",isFull(sp));
    printf("Before pushing Empty: %d\n",isEmpty(sp));
    push(sp,7);
    push(sp,78);
    push(sp,17);
    push(sp,97);
    push(sp,17);
    push(sp,7);
    push(sp,7);
    push(sp,97);
    push(sp,9);
    push(sp,2); //pushed 10 values
    // push(sp,12);  //stack overflow since the size of the stack is 10
    printf("After pushing ,Full: %d\n",isFull(sp));
    printf("After pushing ,Empty:%d\n",isEmpty(sp));
    printf("popped Value %d  from stack\n",pop(sp));//last in first out--LIFO
    printf("popped Value %d  from stack\n",pop(sp));//last in first out
    printf("popped Value %d  from stack\n",pop(sp));//last in first out
   

    
    return 0; 
}