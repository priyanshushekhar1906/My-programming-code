#include<stdio.h>
int palindrome(int num)
{

    int temp;
    temp=num;
     int reverse;
    reverse=0;
    //Lets reverse the no
    while(num!=0)
    {
        reverse=reverse*10+num%10;
        num/=10;
    }
    printf("reve no is %d\n",reverse);
    if(reverse==temp)
    {
        return 1;
    }
    else{
        return 0;
    }




}
int main()
{
    int num;
    printf("Check whether the no is palindrome or not\n");
    scanf("%d",&num);
    if(palindrome(num)==1)
    {
        printf("Enter Number is palindrome number\n");
    }
    else{
         printf("Enter Number is not a palindrome number\n");
    }

    return 0;
}
