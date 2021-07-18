#include<stdio.h>

int main()
{
    int i,n,c;

    printf("Enter the no which multiplication table you want\n ");
    scanf("%d",&n);
    printf("Multiplication table of %d is\n",n);

    for(i=1;i<=10;i++)
    {
        c=n*i;
        printf("%dx%d=%d\n",n,i,c);
    }
    return 0;


}
