#include<stdio.h>
#define PI 3.14
int main()
{
    //format specifier  (%c,%d,%f,%l,%lf,%Lf)
    int a=7;
    float b=7.888;
   // PI=7.33; //cannot do this since pi is already define
    printf("%f\n",PI);
    //printf("value of a is%d and value of b is %f",a,b);
    //printf("value of b is\n %-18.8f this",b); //18 character ar 8 decimal point ki accuracy hogi
    const c=9;
    //c=8;//cannot do this since c is const

    //escape sequence(\a,\n,\t,\b,\\)
    printf("hello \a \t are you \b there");



    return 0;


}
