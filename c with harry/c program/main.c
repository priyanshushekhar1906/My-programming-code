#include<stdio.h>    //preprocessor command jo btata hai file ka type
//int sum=988;
/*int main()   //fn with return type int  program execute start from here
{
printf("Hello");


    return 0;

}*/
int main()
{
    int i,arr[5]={1,2,3,4,5};
    char string[]="harry";
    char string1[]={'a','b','c','d','\0'};
    printf("Array is ");
    for(i=0;i<5;i++)
    {
        printf("\t%d",arr[i]);
    }
    printf("\narray is %d\n",*arr);
    printf("array is %d\n",arr);// arr and arr[0] have same address
    printf("array is %d\n",&arr[0]);
    printf("string is %s\n",string);
    printf("string1 is %s\n",string1);
    printf("string1 is %c\n",string1[3]);
    return 0;
}

