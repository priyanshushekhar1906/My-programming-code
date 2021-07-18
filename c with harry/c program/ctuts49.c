#include<stdio.h>
//int sum=90;//global or external variable
int func1(int a,int b){
  //auto int sum;   //LOcal or automatic variables
   // sum=a+b;
   // extern int sum;
    //return sum;
    static int myvar;  //default value is 0;
    myvar++;
    printf("The sum is%d\n",myvar);
    return myvar;




}
int sum=343;
int main()
{
    register int var;

   // int sum;   //default value garbage

   var=func1(3,7);
   var=func1(3,7);
   var=func1(3,7);
   var=func1(3,7);

   // printf("The sum is%d\n",sum);
    //printf("The sum is%d\n",sum);
}
