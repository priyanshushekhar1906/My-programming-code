#include<stdio.h>
int main()
{

    int age;
    printf("enter your age\n");
    scanf("%d",&age);
    printf("you have entered %d as your age\n",age);
    if(age>=18)
    {
        printf("you can vote!\n");
    }
    else if(age<12)
    {
        printf("you are not even a teenager");
    }
    else{
        printf("you cannot vote!\n");
    }
}
