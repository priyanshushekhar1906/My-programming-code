#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct stack{
    int top;
    char*arr;
    int size;
};
int ISoperator(char c)
{
    if(c=='*' || c=='+' || c=='-' || c=='/')
    {
        return 1;
    }
    return 0;
}
int Precendence(char c)
{
    if(c=='*' || c=='/')
    {
        return 3;
    }
    else if(c=='-' || c=='+')
    {
        return 2;
    }
    return 1;
}
char TopElement(struct stack*s)
{
   return s->arr[s->top];
}
void push(struct stack*s,char c)
{
    s->top++;
    s->arr[s->top]=c;
}
char pop(struct stack*s)
{
   char c=s->arr[s->top];
   s->top--;
   return c;
}
char* InfixToPostfix(char*exp,int size)
 {
     struct stack *s=(struct stack*) malloc(sizeof(struct stack));
     s->top=-1;
     s->size=size;
     s->arr=(char*) malloc(s->size*sizeof(char));
     char*postfix=(char *) malloc((size+1)*sizeof(char));


     int i=0;
     int j=0;
     while(exp[i]!='\0')
     {
       if(!ISoperator(exp[i]))
       {
           postfix[j]=exp[i];
           i++;
           j++;
       }
       else{
             if(Precendence(exp[i])>Precendence(TopElement(s)))
             {
                 push(s,exp[i]);
                 i++;
             }
              else{

                  postfix[j]=pop(s);  
                  j++;
              }


       }

     }
   while(s->top!=-1)
   {
       postfix[j]=pop(s);
       j++;
   }
 postfix[j]='\0';
 return postfix;




 }
int main(){
    char*exp="a+b*c/d";
    int size=strlen(exp);
    printf("infix to postfix is %s\n",InfixToPostfix(exp,size));
    
    return 0; 
}