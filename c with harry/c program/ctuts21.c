#include<stdio.h>


int factorial(int num){
    if(num==0 || num==1)
    {
        return 1;
    }
    else{


        return (num*factorial(num-1));
    }







}







int main()
{
    int num,f;
    printf("enter the no\n");
    scanf("%d",&num);
   f= factorial(num);
    printf("factorial of %d is %d",num,f);








    return 0;


}
