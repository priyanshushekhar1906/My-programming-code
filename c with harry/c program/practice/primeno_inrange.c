#include<stdio.h>
int isPrime(int num)
{
    for (int i = 2; i*i<=num; i++)
    {
        if(num%i==0)
        {
            return 0;
        }
    }
   return 1;
   
}
int main(){
    int n1,n2;
    printf("Enter the range of prime no\n");
    printf("Starting value:\n");
    scanf("%d",&n1);
    printf("Last value:\n");
    scanf("%d",&n2);
    printf("The prime no between %d to %d are :\n",n1,n2);
    for (int i = n1; i <=n2; i++)
    {
        if(isPrime(i))
        {
            printf("%d ",i);
        }
    }
    
    return 0; 
}