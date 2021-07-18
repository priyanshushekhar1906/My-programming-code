#include<stdio.h>

int main(){
    int num;
    printf("Enter a number\n");
    scanf("%d",&num);
    int a[50];
    int rem;
    int i=0;
    while(num!=0)
    {
        rem=num%2;
        num=num/2;
        a[i]=rem;
        i++; 
    }
    for(int j=i-1;j>=0;j--)
    {
        printf("%d",a[j]);
    }
     
    return 0; 
}