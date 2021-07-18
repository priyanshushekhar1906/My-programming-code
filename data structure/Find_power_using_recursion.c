#include<stdio.h>
int Find_power(int a,int n)
{
    if(n==0)
    {
        return 1;
    }
    else{
        return a*Find_power(a,n-1);
    }
}

int main(){
    int a,n;
    printf("Enter a no of which you want to find power\n");
    scanf("%d",&a);
    printf("Enter how many  no of times you want to find power of this %d\n",a);
    scanf("%d",&n);
    int result=Find_power(a,n);
    printf("Result is equal to %d\n",result);
    return 0; 
}