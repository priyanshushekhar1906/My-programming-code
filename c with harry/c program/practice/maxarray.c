#include<stdio.h>
int returnmax(int arr[],int size)
{
    int max=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]>max)
        {
        max=arr[i];
        }
    }
    return max;
}
int returnmin(int arr[],int size)
{
    int min=arr[0];
    for(int i=0;i<size;i++)
    {
        if(arr[i]<min)
        {
        min=arr[i];
        }
    }
    return min;
}

int main(){
    int arr[]={12,39,272,2722,829,2636,2};
    int size=sizeof(arr)/sizeof(int);
    int max=returnmax(arr,size);
    printf("The maximum value in this array is %d\n",max);
    int min=returnmin(arr,size);
    printf("The minimum value in this array is %d\n",min);
    return 0; 
}