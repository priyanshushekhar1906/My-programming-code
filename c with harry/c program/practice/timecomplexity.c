#include<stdio.h>
void func1(int arr[],int size)
{
    int sum=0;
    int prod=1;
    for(int i=0;i<size;i++)   // this loops is depend on size of array  and for n size array this will run n times so this is O(size)
    {
        sum+=arr[i];
       

    }
    for(int i=0;i<size;i++)   // this loops is depend on size of array  and for n size array this will run n times so this is O(size)
    {
         prod*=arr[i];
       

    }
    printf("sum is %d\n",sum);
    printf("prod is %d\n",prod);

}

int main(){
    int arr[3]={3,5,67};
     func1(arr,3);
    return 0; 
}