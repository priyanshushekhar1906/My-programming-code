#include<stdio.h>
#include<stdlib.h>
struct stack{
  int top;
  int size;
  int*arr;

};
void traversal(struct stack*s)
{
  for (int i = 0; i <=s->top; i++)
  {
    printf("Element at %d is %d\n",i,s->arr[i]);
  }
  
}
int  isFull(struct stack*s){
  if(s->top==s->size-1)
  {
    // printf("Stack is Full\n");
    return 1;
  }
  return 0;
}
int  isEmpty(struct stack*s){
  if(s->top==-1)
  {
    // printf("Stack is Empty\n");
    return 1;
  }
  return 0;
}
void  push(struct stack*s,int data){
  if(isFull(s)){
    printf("can't push %d element in stack\n",data);
  }
  else{
  
  s->top++;
  s->arr[s->top]=data;
  }

}
int pop(struct stack*s)
{
   if(isEmpty(s)){
    printf("can't pop element from stack\n");
  }
  else{
  int var=s->arr[s->top];
  s->top--;
  return var;
  }
}
int peek(struct stack*s,int index)
{
   return s->arr[s->top-index+1];
}
int main(){
  struct stack*s=(struct stack*) malloc(sizeof(struct stack));
  s->top=-1;
  s->size=5;
  s->arr=(int*) malloc(s->size*sizeof(int));
  printf("stack is fULL %d\n",isFull(s));
  printf("stack is empty %d\n", isEmpty(s));
  push(s,9);
  push(s,94);
  push(s,29);
  push(s,19);
  push(s,59);
  // push(s,59);
  // push(s,5739);
  printf("After pushing\n");
  traversal(s);
  printf("Element %d is popped from stack\n",  pop(s));
  printf("Element %d is popped from stack\n",  pop(s));
   traversal(s);
   printf("element  from the top %d\n",peek(s,2));
    printf("stack is fULL %d\n",isFull(s));
  printf("stack is empty %d\n", isEmpty(s));
  
  return 0; 
}