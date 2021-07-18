#include<stdio.h>
#include<stdlib.h>

int main(){
    int**ptr;
    int**ptr1;
    int result[3][3];
    int r1,r2,c1,c2;
    r1=r2=c1=c2=3;
    ptr=(int**) malloc(r1*sizeof(int));
    for(int i=0;i<r1;i++)
    {
        ptr[i]=(int*) malloc(c1*sizeof(int));

    }
   
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
             printf("For Matrix 1 Enter the value at index [%d][%d]:\n",i,j);
        scanf("%d",&ptr[i][j]);
        }
    }
    
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
        printf("the value at index [%d][%d] is: %d\n",i,j,ptr[i][j]);
        }
    }
    ptr1=(int**) malloc(r1*sizeof(int));
    for(int i=0;i<r1;i++)
    {
        ptr1[i]=(int*) malloc(c1*sizeof(int));

    }
   
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
             printf("For Matrix 2 Enter the value at index [%d][%d]:\n",i,j);
        scanf("%d",&ptr1[i][j]);
        }
    }
    
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
        printf("the value at index [%d][%d] is: %d\n",i,j,ptr1[i][j]);
        }
    }
     
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            result[i][j]=ptr[i][j]+ptr1[i][j];
        printf("The sum of value at index [%d][%d] is: %d\n",i,j,result[i][j]);
        }
    }
     
    return 0; 
}