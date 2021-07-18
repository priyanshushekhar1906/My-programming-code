#include<stdio.h>
int reversestarpattern(int rows)
{
    int i,j;
    for(i=0;i<rows;i++)
    {
        for(j=0;j<=rows-1-i;j++)
        {


            printf("*");
        }
        printf("\n");
    }

}





int main()
{
    int rows;
    printf("Enter the no of rows you want to print\n");
    scanf("%d",&rows);
    reversestarpattern(rows);
    return 0;
}
