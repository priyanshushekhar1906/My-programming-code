#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    int a[n];
    printf("\nEnter your array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n Your enter array is\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n now swapping array is \n");
    if(n%2!=0)
    {
         for(i=0;i<n/2;i++)
         {


            a[i]=a[i]+a[n-1-i];
            a[n-1-i]=a[i]-a[n-1-i];
            a[i]=a[i]-a[n-1-i];
         }

    }
else
    {
        for(i=0;i<n/2;i++)
        {


            a[i]=a[i]+a[n-1-i];
            a[n-1-i]=a[i]-a[n-1-i];
            a[i]=a[i]-a[n-1-i];
        }

}
for(i=0;i<n;i++)
{
    printf("%d\t",a[i]);
}
    return 0;
}
