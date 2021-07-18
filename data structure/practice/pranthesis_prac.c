#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int size;
    char *ptr;
    int top; 
};

void printStack(struct stack *sp)
{
    for (int i = 0; i <= sp->top; i++)
    {

        printf("%d %c ", i, sp->ptr[i]);
    }
}
void push(struct stack *sp, char c)
{

    sp->ptr = (char *)malloc(sp->size * sizeof(char));
    sp->top++;
    // printf("size:%d top:%d  ",sp->size,sp->top);
    sp->ptr[sp->top] = c;
}
int isEmpty(struct stack *sp)
{
    if (sp->top == -1)
    {
        // printf("Stack is Empty:\n");
        return 1;
    }
    else
    {
        return 0;
    }
}
void pop(struct stack *sp)
{
    if (isEmpty(sp))
    {

        return;
    }
    else
    {
       
        sp->top--;
        return ;
    }
}

int check(struct stack *sp, char *arr,int size)
{
     sp->size =size;
    for (int i = 0; arr[i] != '\0'; i++)
    {

        if (arr[i] == '(')
        {
            push(sp, arr[i]);
        }
        else if (arr[i] == ')')
        {
            if (isEmpty(sp))
            {

                return 0;
            }
            else
            {
                pop(sp);
            }
        }
    }
    if (isEmpty(sp))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
   
    sp->top = -1; 
    sp->ptr = NULL;
    char *arr = "(8(*(9+7))+23)" ;
    int count=0;
    // char *arr = ")8(*(9+7))+23)((" ;
    for (int i = 0; arr[i]!='\0'; i++)
    {
        count++;
        // printf("%c",arr[i]);
    }
    // printf("%d",count);
    if (check(sp, arr,count))
    {
        printf("Paranthesis is balance\n");
    }
    else
    {
        printf("Paranthesis is not balance\n");
    }
    return 0;
}