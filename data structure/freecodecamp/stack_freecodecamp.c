#include<stdio.h>
#define MAX_SIZE 101
int A[MAX_SIZE];
int top=-1;
void push(int x)
{
    if(top==MAX_SIZE-1)
    {
        printf("Error:Stack Overflow\n");
    }
    else{
        A[++top]=x;
    }
}
int pop()
{
    if(top==-1)
    {
        printf("Error:Stack Underflow\n");
        return -1;
    }
    else{
        int temp=A[top];
        top--;
        return temp;
    }
}
int Top(){
    if(top==-1)
    {
        printf("Error:Stack Underflow\n");
    }
    return A[top];

}
void print()
{
    for(int i=0;i<=top;i++)
    {
        printf("Stack :%d ",A[i]);
    }
    printf("\n");
}

int main(){
    push(2);  print();
    push(3);  print();
    push(4);  print();
    pop(); print();
      push(41);  print();
    return 0; 
}