#include<stdio.h>
int sum(int a, int b)
{
    return a+b;
}
void greetHelandexecute(int (*fptr)(int,int))
{
    printf("Hello user\n");
    printf("sum of 10 and 6 is %d\n",fptr(10,6)); // yha pe hmlog local fn se call krenge jo argument me hain
}
void greetGmandexecute(int (*fptr)(int,int))
{
    printf("good morning user\n");
    printf("sum of 10 and 6 is %d\n",fptr(10,6));
}
int main()
{
    int (*p)(int,int);
    p=sum;// agar hm sirf fn ka naam likhe toh bhi wo address k equal hi hota h
    greetGmandexecute(p);
    return 0;
}
