#include<stdio.h>

 //      WILD POINTER
int main()
{
    int a=34;
    int* ptr;//ptr is wild pointer
   // *ptr=34; // this not valid thing to do because the address is arbitary we don't know where this 34 store
    ptr=&a; //ptr is no longer a wild pointer
    printf("The value of a is %d\n",*ptr);




    return 0;
}
