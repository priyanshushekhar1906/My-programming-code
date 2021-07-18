#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct stack{
    int top;
    char*arr;
    int size;
};
void  StringTraversal(char*arr,int size)
{
    for (int i = 0; i <size; i++)
    {
        printf("%c ",arr[i]);
    }
    printf("\n");
    
}
int isFull(struct stack*sp)
{
    if(sp->top==sp->size-1)
    {
        return 1;
    }
    return 0;
}
void  push(struct stack*sp,char c)
{
   if(isFull(sp))
   {
       printf("Stack is empty\n");
   }
     else{
         sp->top++;
         sp->arr[sp->top]=c;
     }
}
char  pop(struct stack*sp)
{
      char topC=sp->arr[sp->top];
    sp->top--;
    return topC;
}

char Topret(struct stack*sp)
{
    char topC=sp->arr[sp->top];
    printf("TopC is %c:",topC);
   return  topC;
}
void  ReverseAstring(char*arr,int size){
    struct stack*sp=(struct stack*) malloc(sizeof(struct stack));
    sp->top=-1;
    sp->size=size;
    sp->arr=(char*) malloc(sp->size*sizeof(char));
int i=0;
 while(arr[i]!='\0')
    {
        push(sp,arr[i]);
        i++;
    }
    char*arr1=(char*) malloc(sp->size*sizeof(char));;
     i=0;
 while(i!=size)
    {  
       arr1[i]= pop(sp);
      
        i++;
    }
     printf("String After Reversal\n");
  StringTraversal(arr1,size);



}

int main(){
    
   char*arr=(char *) malloc(100*sizeof(char));
    printf("Enter a string\n");
    // scanf("%s",arr);
    gets(arr);
    int size=strlen(arr);
    printf("String Before Reversal\n");
     StringTraversal(arr,size);
    ReverseAstring(arr,size);
    
    //StringTraversal(arr,size);
    return 0; 
}