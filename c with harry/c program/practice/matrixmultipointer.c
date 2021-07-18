#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
int **A ,**B, **R,r1,c1,r2,c2,i,j,k,sum=0;
 time_t start,end;
srand(time(NULL));
start=clock;
printf("MATRIX A\n");
printf("Enter the rows and column for matrix A\n");
scanf("%d%d",&r1,&c1);
printf("MATRIX B\n");
printf("Enter the rows and column for matrix B\n");
scanf("%d%d",&r2,&c2);
A=(int**) malloc(r1*sizeof(int));
for(i=0;i<r1;i++)
{
    A[i]=(int*) malloc(c1*(sizeof(int)));
    
}
for(i=0;i<r1;i++)
{
    for(j=0;j<c1;j++)
    {
       A[i][j]=rand()%9;
    }
}

B=(int**) malloc(r2*sizeof(int));
for(i=0;i<r2;i++)
{
    B[i]=(int*) malloc(c2*(sizeof(int)));
    
}
for(i=0;i<r2;i++)
{
    for(j=0;j<c2;j++)
    {
        B[i][j]=rand()%9;
    }
}
printf("Your random  matrix A\n");
for(i=0;i<r1;i++)
{
    for(j=0;j<c1;j++)
    {
      printf("%d\t",A[i][j]);
    }
    printf("\n");
}
printf("Your random  matrix B\n");
for(i=0;i<r2;i++)
{
    for(j=0;j<c2;j++)
    {
      printf("%d\t",B[i][j]);
    }
    printf("\n");
}
if(c1!=r2)
{
    printf("Matrix multiplication is not possible\n");
}
else
{
    printf("Matrix multiplication is possible\n");
    printf("Matrix Multiplication\n");
    R=(int**) malloc(r1*sizeof(int));
    for(i=0;i<r1;i++)
    {
        R[i]=(int*) malloc(c2*sizeof(int));
    }
    for(i=0;i<r1;i++)
{
    for(j=0;j<c2;j++)
    {
       R[i][j]=0;

        for(k=0;k<c1;k++)
        {
          R[i][j]+=A[i][k]*B[k][j];


        }
    }
}
    for(i=0;i<r1;i++)
{
    for(j=0;j<c2;j++)
    {
            printf("%d\t",R[i][j]);
       
    }
    printf("\n");
}







}
end=clock;
printf("\ntime taken\n");
printf("%f\n",(float)((end-start)*1.0/CLOCKS_PER_SEC));
printf("\n\n");





    return 0;
}
