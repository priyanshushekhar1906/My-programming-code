#include<stdio.h>
int sum(int a,int b)
{
    return a+b;
}
int main()
{
    printf("The sum is %d\n",sum(1,22));// calling a fn normally
    //declaring a function pointer
    int (*ptr)(int,int);
    ptr=&sum;
    int d=(*ptr)(4,60);
    printf("The sum is using fn pointer is %d\n",d);
    return 0;
}