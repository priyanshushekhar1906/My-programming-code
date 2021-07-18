#include<stdio.h>
// #include<math.h>
void power(int x,int n)
{
    int i=0;
  long long   int val=1;
    while(i<n)
    {
        val=val*x;
        i++;
    }
    printf("Power of %d to the power %d is %lld\n",x,n,val);
}
int main(){
    int n,x;
    printf("Enter a no & Enter a no of power on a no\n");
    scanf("%d %d",&x,&n);
    power(x,n);
     // int x=pow(n,4);
    // printf("Power of %d to the power 4 is %d\n",n,x);
    return 0; 
}