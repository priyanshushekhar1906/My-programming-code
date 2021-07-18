#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,r,c;
    int**ptr;
    printf("Enter the no of rows and column\n");
    scanf("%d%d",&r,&c);
    ptr=(int**) malloc(r*sizeof(int));
    for(i=0;i<r;i++)
    {
        ptr[i]=(int*) malloc(c*sizeof(int));
        for(j=0;j<c;j++)
        {
            scanf("%d",&ptr[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
  
        for(j=0;j<c;j++)
        {
            printf("%d\t",ptr[i][j]);
        }
        printf("\n");
    }


    return 0;
}
