#include<stdio.h>
#include<math.h>

int main(){
    int num,count=0;
    printf("Enter a number\n");
    scanf("%d",&num);
    for(int i=2;i<sqrt(num);i++)  //o(n) time complexity
    {
        if(num%i==0)
        {
            count=1;

        }
    }
    if(count==1)
    {
        printf("The number %d is not a prime number \n",num);
    }
    else{
         printf("The number %d is a prime number \n",num);

    }
    return 0; 
}