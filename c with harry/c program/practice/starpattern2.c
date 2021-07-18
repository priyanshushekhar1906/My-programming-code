#include<stdio.h>
#include<stdlib.h>
int main(){
    // int n;
    // printf("Enter the no lines in star pattern\n");
    // scanf("%d",&n);
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         if((i+j)>=n-1){
    //         printf("*");
    //         }
    //         else{
    //             printf(" ");
    //         }
    //     }
    //     printf("\n");
    // }
    // Star pattern 3
    /* 
    *
   ***
  *****
    
    */
    // int n1;
    // printf("Enter the no lines in star pattern\n");
    // scanf("%d",&n1);
    // for (int i = 0; i < n1; i++)
    // {
    //     for (int j = 0; j < 2*n1-1; j++)
    //     { 
    //        if(j>=n1-1-i &&j<=n1-1+i){
    //         printf("*");
    
    //         }
    //         else{
    //             printf(" ");
    //         }
    //     }
    //     printf("\n");
    // }
    // Star pattern 4
    // int n1;
    // printf("Enter the no lines in star pattern\n");
    // scanf("%d",&n1);
    // for (int i = 0; i < n1; i++)
    // {
    //     for (int j = 0; j < n1; j++)
    //     {
    //         if(j>=i){
    //         printf("*");
    //         }
    //         else{
    //             printf(" ");
    //         }
    //     }
    //     printf("\n");
    // }
    // Star pattern 5
    /*
    ****
    *  *
    *  *
    ****

    */
    int n1;
    printf("Enter the no lines in star pattern\n");
    scanf("%d",&n1);
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n1; j++)
        {
            if(i==0 || j==0 || i==n1-1 || j==n1-1){
            printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }


    // staR  pattern 6
    /*
    0000
     111
      22
       3
    */
    // int n1;
    // printf("Enter the no lines in star pattern\n");
    // scanf("%d",&n1);
    // for (int i = 0; i < n1; i++)
    // {
    //     for (int j = 0; j <n1; j++)
    //     {
    //         if(j>=i){
    //         printf("%d",i);    
    //         }
    //         else{
    //             printf(" ");
    //         }
    //     }
    //     printf("\n");
    // }
    
    
    return 0; 
}