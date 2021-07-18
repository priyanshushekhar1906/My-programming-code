#include<stdio.h>
void   counttheno(int n){
    int x=n;
    int count=0;
    if(n==0)
    {
        count=1;
    }

    while(n!=0){
    n=n/10;

    count++;
    }

printf("\nThere are %d digit in number %d \n",count,x);
}
int main(){
    int n;
    printf("Enter a no\n");
    scanf("%d",&n);
    counttheno(n);
    return 0; 
}