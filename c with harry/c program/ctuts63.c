#include<stdio.h>
int ispalindrome(int num)
{
    int temp;
    temp=num;
    int reverse=0;
    while(num!=0)
    {
        reverse=reverse*10+num%10;
       num= num/10;
}


    if (temp==reverse)
       {
           printf("Reverse no is %d\n",reverse);
             return 1;

       }
       else {
            printf("Reverse no is %d\n",reverse);
        return 0;
       }
}

int main()
{
    int number;
    printf("Enter a number to check it a palindrome or not\n");
    scanf("%d",&number);
    if(ispalindrome(number)==1)
    {
        printf("The no is palindrome\n");
    }
    else{
        printf("The no is not a palindrome");
    }
    return 0;
}

