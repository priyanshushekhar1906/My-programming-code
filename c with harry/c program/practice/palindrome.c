#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the no of series\n");
    scanf("%d",&n);
    int first=0,second=1,sum=0;
    printf("%d \t %d \t ",first,second);
    for(i=2;i<n;i++)
    {
        sum=first+second;
        first=second;
        second=sum;
        printf("%d \t",sum);
        }

    return 0;
}
