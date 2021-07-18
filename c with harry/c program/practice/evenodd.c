#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number to check even or odd\n");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("Entered no is even\n");
    }
    else{
            printf("Entered no is odd\n");

    }
    int num,sum=0;
    printf("Enter the no of series in fabonaaci\n ");
    scanf("%d",&num);
    int a[num],i;
     a[0]=0,a[1]=1;
     printf("%d\t%d\t",a[0],a[1]);
    for(i=2;i<num;i++)
    {
        a[i]=a[i-1]+a[i-2];
        printf("%d \t",a[i]);
    }


    return 0;
}
