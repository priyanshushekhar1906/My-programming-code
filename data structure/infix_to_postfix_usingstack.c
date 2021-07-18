#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct stack{
    int top;
    int size;
    char*arr;
};
int stackEmpty(struct stack*sp)
{
     if(sp->top==-1)
     {
         return 1;
     }
         return 0;  

}
void push(struct stack*sp,char x)
{
    sp->top++;
    sp->arr[sp->top]=x;
}
char pop(struct stack*sp)
{
    char y;
     y=sp->arr[sp->top];
    sp->top--;
    return y;
   
}
char stacktop(struct stack*sp)
{
    return sp->arr[sp->top];
}
int isoperator(char op)
{ 
    if(op=='*' || op=='/'|| op=='+' ||op=='-')
    {
        return 1;
    }
    return 0;
}
int precedence(char op)
{ 
    if(op=='*' || op=='/')
    {
        return 3;
    }
    else if(op=='+' ||op=='-')
    {
        return 2;
    }
    return 1;
}
char* infix_to_postfix(char *infix)
{
    
    struct stack*sp=(struct stack*) malloc(sizeof(struct stack));
    sp->top=-1;
    sp->size=50;
    sp->arr=(char*) malloc(sp->size*sizeof(char));
  
     char*postfix=(char*) malloc((strlen(infix)+1)*sizeof(char));
    int i=0;
    int j=0;
    while (infix[i]!='\0')
    {
        if(!isoperator(infix[i]))
        {
            postfix[j]=infix[i];
            i++;
            j++;
        }
        else{
            if(precedence(infix[i])>precedence(stacktop(sp)))
            {
                push(sp,infix[i]);
                i++;
            }
            else{
                postfix[j]=pop(sp);
                 j++;

            }


        }
      
    }
  
    while(!stackEmpty(sp))
    {
        postfix[j]=pop(sp);
        j++;
    }
    postfix[j]='\0';
    return postfix;
}

int main(){
    char*infix="p*q*r/a";
   printf("postfix conversion of infix is %s\n",infix_to_postfix(infix));
    
    return 0; 
}