#include<stdio.h>
//by iterative method
int main()
{
    int i,n;
    int array[100];
    array[0]=0,array[1]=1;



    printf("enter the no of series \n");
    scanf("%d",&n);
    printf("%d %d ",array[0],array[1]);
    for(i=0;i<n;i++)
    {

        array[i+2]=array[i]+array[i+1];
        printf("%d ",array[i+2]);
    }



return 0;




}
