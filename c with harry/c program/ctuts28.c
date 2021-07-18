#include<stdio.h>
int itefab(){
    int i,n;
    int arr[100]={0,1};
          printf("Enter the no series\n");
    scanf("%d",&n);

    printf("%d\t%d\t",arr[0],arr[1]);
    for(i=0;i<n-2;i++)
    {
        arr[i+2]=arr[i+1]+arr[i];
        printf("%d\t",arr[i+2]);

    }
}
int fib_recursive(n){
    if(n==1 || n==2)
    {
        return n-1;
    }
    else
    {
        return fib_recursive(n-1)+fib_recursive(n-2);
    }


}
int main()
{

    itefab();
    int n;
    printf("enter the index value of fabnacci series\n");
    scanf("%d",&n);
    printf("value at this index is %d", fib_recursive(n));










}
