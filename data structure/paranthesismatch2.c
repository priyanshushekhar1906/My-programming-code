#include<stdio.h>
#include<stdlib.h>
struct stack{
   int top;
   int size;
   char*arr;

};
int isEmpty(struct stack*sp)
{
    if(sp->top==-1)
    {
        return 1;
    }
    return 0;

}
int isFull(struct stack*sp)
{
    if(sp->top==sp->size-1)
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
    char x;
    x=sp->arr[sp->top];
    sp->top--;
    return x;
}
int matching(char a,char b)
{
    if(a=='(' && b==')')
    {
        return 1;
    }
    if(a=='{' && b=='}')
    {
        return 1;
    }
    if(a=='[' && b==']')
    {
        return 1;
    }
    return 0;
}
int paranthesismatch(char*exp,struct stack*sp)
{
    sp->top=-1;
    sp->size=100;
    sp->arr=(char*) malloc(sp->size*sizeof(char));
       int i=0;
    while(exp[i]!='\0')
    {
        // printf("%c",exp[i]);
        if(exp[i]=='(' || exp[i]=='{' || exp[i]=='[')
        {
            push(sp,exp[i]);
        }
        else if(exp[i]==')' || exp[i]=='}' || exp[i]==']')
        {
            int pop_char=pop(sp);
            if(!matching(pop_char,exp[i]))
            {
                return 0;
            }
        }
        i++;
    }
    if(isEmpty(sp))
    {
        return  1;
    }
    else{
        return 0;
    }
}

int main(){

    struct stack*sp;
    char *exp="{(8*9)+[7+5]}";
    if(paranthesismatch(exp,sp))
    {
        printf("Parantheesis are matching\n");
    }
    else{
           printf("Parantheesis are not matching\n");
    }
    
    return 0; 
}