//star pattern
#include<stdio.h>
int main()
{

int n,r,i,j;
 char a='*';
printf("Enter to choose 0.for triangular star pattern 1.for reverse triangular star pattern\n");
scanf("%d",&n);
if(n==0)
{
    printf("enter the no rows in star pattern\n");
    scanf("%d",&r);
    for(i=0;i<r;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%c",a);
        }
        printf("\n");
    }

}
if(n==1)
{
    printf("enter the no rows in star pattern\n");
    scanf("%d",&r);
     for(i=0;i<r;i++)
    {
        for(j=r;j>i;j--)
        {
            printf("%c",a);
        }
        printf("\n");
    }

}
}
