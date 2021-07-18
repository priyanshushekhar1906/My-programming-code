#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct stack{
    int top;
    int size;
    char*arr;
};
 struct stack*s;
void ExpTravesral(char exp[],int size)
{
    for (int i = 0; i <size; i++)
    {
        printf("%c",exp[i]);
    }
    printf("\n");
    
}
int isOperator(char c)
{
    if(c=='*' || c=='-' || c=='+' || c=='/' )
    {
        return 1;
    }
    else{
    return 0;
    }
}
void push(struct stack*s,char c)
{
    s->top++;
    s->arr[s->top]=c;
}
void pop(struct stack*s)
{
    s->top--;
    
}
int PrecendenceOrder(char c)
{
    if(c=='*' || c=='/' ){
    return 3;
    }
    else if(c=='+' || c=='-')
    {
        return 2;
    }
    return 1;
}
char TopElement(struct stack*s)
{
    
    return s->arr[s->top];
}
char*  InfixtoPostfix(char*exp,int size)
{
     struct stack*s=(struct stack*) malloc(sizeof(struct stack));
    s->top=-1;
    s->size=size;
    s->arr=(char*) malloc(s->size*sizeof(char));
    char* postfix=(char*) malloc (((s->size)+1)*sizeof(char));
     
     int j=0;
     int i=0;
    while(exp[i]!='\0'){
        
     if(!isOperator(exp[i]))
     {
        postfix[j]=exp[i];
         i++;
        j++;  
       
      
     }
     else{
            //  printf("Tpo %c\n",TopElement(s));
               if(PrecendenceOrder(exp[i])>PrecendenceOrder(TopElement(s)))
               {
                //    printf("exp %c",exp[i]);
                   push(s,exp[i]);
                   i++;
                   
               }
               else{
                   postfix[j]=TopElement(s);
                   j++;
                   pop(s);
                   
               }
         }
     }

         while(!(s->top==-1))
    {
        postfix[j]=TopElement(s);
        pop(s);
        j++;
    }
    
    postfix[j]='\0';
    printf("Postfix is %s\n",postfix);
    return postfix;
    
}

int main(){
    char*exp="x-y/z-k*d";
     
    ExpTravesral(exp,strlen(exp));
    
    printf("Postfix expression is %s\n",InfixtoPostfix(exp,strlen(exp)));
    return 0; 
}