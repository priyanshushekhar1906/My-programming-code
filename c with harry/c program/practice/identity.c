#include<stdio.h>
int main()
{
    int r,i,j,c,flag=0;
    printf("Enter the no of rows and col in array\n");
    scanf("%d%d",&r,&c);
    int arr[r][c];
    printf("Enter your matrix\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);



        }
    }
        for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {

                if(i!=j && arr[i][j]!=0)
    {
        flag=-1;
        break;
    }
    if(i==j && arr[i][j]!=1)
    {
        flag=-1;
        break ;
    }
        }
    }

    if(flag==0)
    {
        printf("Matrix is  identity\n");
    }
    else{
            printf("Matrix is not identity\n");

    }

    return 0;
}
