#include<stdio.h>
#include<stdlib.h>
struct stack{
    int top;
    int size;
    char*arr;
};


int isFull(struct stack*sp)
{
    if(sp->top==sp->size-1)
    {
        return 1;
    }
  return 0;
}
int isEmpty(struct stack*sp)
{
    if(sp->top==-1)
    {
        return 1;
    }
  return 0;
}
void  push(struct stack*sp,char c)
{
    sp->top++;
    sp->arr[sp->top]=c;
   
}
char  pop(struct stack*sp)
{
    char c=sp->arr[sp->top];
    sp->top--;
    return c;
   
}
int ispop(char pop_char,char c)
{
    if(c=='}' && pop_char=='{' )
    {
         return 1;
    }
    else if(c==')' && pop_char=='(' )
    {
         return 1;
    }
   else if(c==']' && pop_char=='[' )
    {
         return 1;
    }
   else{
        return 0;
   }

}
int paranthesisMatch(char*arr,int size)
{
     struct stack*sp=(struct stack*) malloc(sizeof(struct stack));
     sp->size=size;
     sp->top=-1;
     sp->arr=(char*) malloc(sp->size*sizeof(char));
     for (int i = 0; arr[i]!='\0'; i++)
    {
       
        if(arr[i]=='{' || arr[i]=='(' || arr[i]=='[' )
        {
           if(isFull(sp))
           {
                  return 0;
           }
            else{
                push(sp,arr[i]);
            }

        }
        else if(arr[i]=='}' || arr[i]==')' || arr[i]==']')
        {
           if(isEmpty(sp))
           {
               return 0;
           }
           else{
               char pop_char=pop(sp);
               if(!ispop(pop_char,arr[i]))
               {
                   return 0;
                    
               }
               
              
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
    char*arr="{7-(3-2)+[8+(9-11)]}";
    int count=0;
    for (int i = 0; arr[i]!='\0'; i++)
    {
        // printf("%c",arr[i]);
        count++;
    }
    if(paranthesisMatch(arr,count))
    {
        printf("Pranthesis is matching\n");
    }
    else{
        printf("Pranthesis is not matching\n");

    }
    return 0; 
}