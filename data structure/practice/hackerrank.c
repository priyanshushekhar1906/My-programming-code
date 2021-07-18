#include<stdio.h>
#include<stdlib.h>
struct stack{
    int top;
    int size;
    int*arr;
};
struct stack*s=NULL;
struct stack*Max=NULL;
void push(int x)
{
  if(s->top==s->size-1)
  {
      printf("Stack is Full\n");
  }
    s->top++;
    s->arr[s->top]=x;
}
void Mpush(int x)
{
  if(Max->top==Max->size-1)
  {
      printf("Stack is Full\n");
  }
    Max->top++;
    Max->arr[Max->top]=x;
}
int isEmpty()
{
    if(s->top==-1)
    {
      return 1;
    }
    return 0;

}
int isMEmpty()
{
    if(Max->top==-1)
    {
      return 1;
    }
    return 0;

}
void pop()
{
    if(isEmpty())
    {
         printf("Stack is empty\n");
    }
    else{
        s->top--;
    }
}
void Mpop()
{
    if(isMEmpty())
    {
         printf("Stack is empty\n");
    }
    else{
        
        Max->top--;
    }
}
int Topelement()
{
    return s->arr[s->top];
}
int TopMelement()
{
    return Max->arr[Max->top];
}
void  ReturnMAx(int N)
{
    s=(struct stack *) malloc(sizeof(struct stack));
    Max=(struct stack *) malloc(sizeof(struct stack));
    s->top=-1;
    s->size=N;
    s->arr=(int*) malloc(s->size*sizeof(int)); 
    Max->top=-1;
    Max->size=N;
    Max->arr=(int*) malloc(Max->size*sizeof(int)); 
    for (int i = 0; i < N; i++)
    {
       int query_no;
       int x,Max_element;
       
       scanf("%d",&query_no);
       switch (query_no)
       {
       case 1:
       scanf("%d",&x);
       push(x);
       if(isMEmpty())
       {
           Mpush(x);
       }
       else{
           if(x>TopMelement())
           {
               Mpush(x);
           }

       }
        break;

        case 2:
        if(isEmpty())
        {
            printf("Stack is empty\n");
        }
        else{
            int checktop=Topelement();
         pop();
         if(checktop==TopMelement())
         {
             Mpop();
         }
        }
        break;

        case 3:
        if(isMEmpty())
        {
            printf("NO element push in stack\n");
        }
        else{
        Max_element=TopMelement();
        printf("%d",Max_element);
        }
        break;

       default:
       printf("Unavailable Query\n");
       }

}
}

int main(){
    int N;
    scanf("%d",&N);
    ReturnMAx(N);

    return 0; 
}