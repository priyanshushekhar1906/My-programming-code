#include<stdio.h>
/*fn-type
with arguments with return value
with arguments without return value
without arguments with return value
without arguments without return value */
int sum(int a,int b);

void printstar(int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%c\n",'*');
    }
}
int number()
{
    int i;
  printf("enter the number");
    scanf("%d",&i);
    return i;


}






int main()
{
   int a=87,b=9;
   int c;
   c=sum(a,b);
   printstar(7);
   printf("the sum is %d\n",c);

int  no= number();
  printf("the return no is %d",no);

   return 0;


}

int sum(int a,int b)
{
    return a+b;
}
