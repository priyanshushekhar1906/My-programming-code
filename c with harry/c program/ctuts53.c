#include<stdio.h>
//NULL pointer
int main()
{
    int a=34;
   int*ptr =NULL;
   // int* ptr;   //so we if not initialized a pointer with null it can containe any garbage address  which can be equal to the adrress of an object
    ptr=&a;

    if(ptr!=NULL){
    printf("the value of a is %d\n",*ptr);
}
else{
    printf("We cannot derefernce a null pointer\n");
}




    return 0;
}
