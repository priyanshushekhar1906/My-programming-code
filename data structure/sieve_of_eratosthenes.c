#include<stdio.h>
#include<stdlib.h>
char* CheckPrime(int n)
{
    char* boolean=(char*) malloc((n+1)*sizeof(char));
    for (int i = 0; i <=n; i++)
    {
       boolean[i]='T';
    }
    boolean[0]=boolean[1]='F';
    for (int i = 2; i*i <=n; i++)
    {
        for (int j=2*i;j<=n;j+=i)
        {
            boolean[j]='F';
        }
        
    }
    return boolean;
    
}
int main(){
    int n;
    printf("Enter a no upto which you want to check which is prime no\n");
    scanf("%d",&n);
   char*Result= CheckPrime(n);
   for (int i = 0; i <=n; i++)
    {
        
      printf("%d:%c\n",i,Result[i]);
        
    }
    return 0; 
}