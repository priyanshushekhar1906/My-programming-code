#include<stdio.h>
#include<stdlib.h>
struct stack{
    int top;
    int size;
    char*arr;


};
void push(struct stack*sp,char value)
{
    sp->top++;
    sp->arr[sp->top]=value;
     
}
void pop(struct stack*sp)
{
    char val= sp->arr[sp->top];
    sp->top--; 
     
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
int paranthesismatching(char*exp,int size)
{
    struct stack*sp;//=(struct stack*) malloc(sizeof(struct stack));
    sp->size=size;
    sp->top=-1;
    sp->arr=(char*) malloc(sp->size*sizeof(char));
    for (int i = 0; exp[i] != '\0'; i++)
    {
        if(exp[i]=='(')
        {
            if(isFull(sp))
            {
                return 0;
            }
            else{
            push(sp,exp[i]);
            }
        }
        else if(exp[i]==')')
        {
            if(isEmpty(sp))
            {
                return 0;
            }
            else{
                pop(sp);
            }

        }
      
        
    }
      if(isEmpty(sp))
        {
           
            return 1;
        }
        else{
            return 0;
        }

}

int main(){
    char* exp="(8(*(9+7))+23)" ;
    int i=0 ,count=0;
    while(exp[i]!='\0')
    {
        count++;
        i++;
    }
    if(paranthesismatching(exp,count))
    {
        printf("Paranthesis is balance\n");
    }
    else{
          printf("Paranthesis is not balance\n");

    }
    return 0; 
}