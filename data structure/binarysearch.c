#include<stdio.h>
void display(int *arr,int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
}

int main(){
    int arr[7]={2,10,34,50,75,90,100};
    printf("This is our given array\n");
    display(arr,7);
    int element=75 ,low=0,high=6,mid,count=0;
        while(low<=high){
            mid=(low+high)/2;
            if(arr[mid]==element)
        {
            count++;
            printf("Element %d is found at index %d  \n",element,mid);
            break;
        }
        else if(arr[mid]<element)
        {
            low=mid+1;
        }
        else{
            high=mid-1;
        }
      
        } 
    return 0; 
}