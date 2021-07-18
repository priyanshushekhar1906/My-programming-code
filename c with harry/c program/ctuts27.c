#include<stdio.h>
int main()
{
    int a=7;
    char c='b';
    int*pntr =&a;
    char*pntr1=&c;
    printf("address of a is %d\n",&a);
    printf("address of a is %d\n",pntr);
    printf("address of a is %d\n",pntr+1);
    printf("address of a is %d\n",pntr+2);
    printf("address of c is %d\n",&c);
    printf("address of c is %d\n",pntr1);
    printf("value of c is %c\n",*pntr1);
    printf("add of c is %d\n",pntr1+1);
    printf("val of c is %c\n",*pntr1+1);
    printf("val of c is %c\n",*pntr1+3);
    char d='1';
    char*ptrd=&d;
    printf("address of d is %x\n",ptrd);
    ptrd++;
     printf("address of d is %x\n",ptrd);
     ptrd--;
     printf("address of d is %x\n",ptrd);
     int arr[5]={1,2,3,4,5,6};
     printf("address of first index of array is %d\n",&arr[0]);
     printf("address of first index of array is %d\n",arr);
     arr++;//this line is throw an error
     printf("value of first index of array is %d\n",*(&arr[0]));
     printf("value of first index of array is %d\n",*arr);
     printf("value of first index of array is %d\n",*(&arr[2]));
     printf("value of first index of array is %d\n",*(arr+2));




















    return 0;
}
