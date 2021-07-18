#include<stdio.h>

int main(){
    int num,sum=0;
    printf("Enter the no upto which you want sum of natural no\n");
    scanf("%d",&num);
    // sum=(num*(num+1))/2;
    // printf("The sum of %d natural number is %d\n",num,sum);//yeh input pe depend nhi krega ekbaar hi chalega o(1) constant time runing algo
    printf("By iteration method\n");
    for(int i=1;i<=num;i++)  //yeh algo n baar chal rha isiliye iski time complexity jyada hogi
    {
        sum=sum+i;
        
    }
    printf("The sum of first %d natural no is %d\n",num,sum);

    return 0; 
}