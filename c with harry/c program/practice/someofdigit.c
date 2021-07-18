#include<stdio.h>
#include<stdlib.h>
int main()
{
int num,r,sum=0;
printf("Enter Your number\n");
scanf("%d",&num);
while(num!=0)
{
      r=num%10;
      sum=sum+r;
      num=num/10;
}
printf("Sum of digit is-\n %d",sum);
    return 0;
}
