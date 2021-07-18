#include<stdio.h>
int main()
{
    int i,j,row1,col1,row2,col2;
    //Enter 1st matrix
    printf("Enter the no of rows for 1st matrix\n");
    scanf("%d",&row1);
    getchar();
    printf("Enter the no of col for 1st matrix\n");
    scanf("%d",&col1);
    getchar();
    int a[12][12];
    printf("Enter the Element  of first matrix\n");
    for(i=0;i<row1;i++)
    {


    {
        for(j=0;j<col1;j++)
        scanf("%d",&a[i][j]);

    }
    printf("\n");
    }
    //Enter 2nd matrix
    printf("Enter the no of rows for 2nd matrix\n");
    scanf("%d",&row2);
    getchar();
    printf("Enter the no of col for 2nd matrix\n");
    scanf("%d",&col2);
    getchar();
    int b[12][12];
    printf("Enter the Element of second matrix\n");
    for(i=0;i<row2;i++)
    {


    {
        for(j=0;j<col2;j++)
        scanf("%d",&b[i][j]);

    }
    printf("\n");
    }
    if(col1!=row2)
    {
        printf("Matrix can't be multiply\n");

    }
    else{
        printf("Matrix  Multiplication is :\n");


    int k,sum=0,result[12][12];
     for(i=0;i<row1;i++)
     {
         for(j=0;j<col2;j++)
         {


            for(k=0;k<col1;k++)
            sum+=a[i][k]*b[k][j];
            result[i][j]=sum;
            sum=0;
         }

     }
      for(i=0;i<row1;i++)
     {
         for(j=0;j<col2;j++)
         {
             printf("%d",result[i][j]);
             printf("\t");
         }

     printf("\n");
     }
    }
    return 0;
}
