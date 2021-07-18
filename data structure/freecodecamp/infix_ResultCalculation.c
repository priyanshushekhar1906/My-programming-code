#include<stdio.h>
#include<stdlib.h>
#include<string.h>
// struct stack{
//     int top;
//     int size;
//     char*arr;
// }
// int ISoperator(char c)
// {
//     if(c=='*' || c=='+' || c=='-' || c=='/')
//     {
//         return 1;
//     }
//     return 0;
// }
// void push(struct stack*s,char c)
// {
//     s->top++;
//     s->arr[s->top]=c;
// }
// char pop(struct stack*s)
// {
//    char c=s->arr[s->top];
//    s->top--;
//    return c;
// }
// int Perform(char c,char op1,char op2)
// {
//     return (op1)(c)(op2); 
// }
// void InfixToPostfixCalculation(char*exp,int size)
// {
//     struct stack*s=(struct stack*) malloc (sizeof(struct stack));
//     s->top=-1;
//     s->size=size;
//     s->arr=(char*) malloc (s->size*sizeof(char));
//     char op1,op2;
//  int i=0;
//  while(exp[i]!='\0')
//  {
//      if(!ISoperator(exp[i]))
//      {
//          push(s,exp[i]);
//          i++;

//      }
//     else{
//         op2=pop(s);
//         op1=pop(s);
//         int res=Perform(exp[i],op1,op2);
//         push(s,(char)res);
//         i++;

//     }

//  }

// printf("Result is %d",pop(s));




// }

int main(){
    char *exp="23*54*+9-";
    // InfixToPostfixCalculation(exp,strlen(exp));
    return 0; 
}