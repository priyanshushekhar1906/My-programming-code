#include<stdio.h>
// void pointer is a general purpose pointer
//direct derefernce is not allow
//pointer arithmetic is not allow
// we can easily typecaste void pointer in any other data type
int main()
{
    int a=342;
    float b=9.33;
    void *ptr;
    ptr=&a;

   // printf("the value of is %d",*ptr); this will not give any value because derefrencing is not allow in void pointer
    printf("the value of is a %d\n",*( (int*) ptr));
    printf("the address of is a %d\n", ptr);
    printf("the address of is a %d\n", &a);
        ptr=&b;
    printf("the value of is b %f\n",*( (float*) ptr));
    printf("the address of is b %d\n", ptr);
    printf("the address of is b %d\n", &b);



    return 0;
}
