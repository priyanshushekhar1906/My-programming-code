#include<stdio.h>

int main(){
    int A,P,r,t;
    printf("Enter the initial principal balance\n");
    scanf("%d",&P);
    
    printf("Enter the anuual interest rate\n");
    scanf("%d",&r);
    printf("Enter the timke in years\n");
    scanf("%d",&t);
 A=P*(1+r*t);
  printf("the value of final amount is %d\n",A);

    return 0; 
}