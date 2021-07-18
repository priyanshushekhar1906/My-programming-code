#include<stdio.h>
#include<stdlib.h>

int isBinarysearch(int search,int*arr,int size)
{
int a=0;
int b=size-1;

while(a<=b){
    int mid=(a+b)/2;
       if(search==arr[mid])
       {
           return 1;
       }
       else{
             if(arr[mid]>search)
             {
               
               b=mid-1;
             }
             else{
                 a=mid+1;
             }

       }
}
return 0;

}
int main(){
    int arr[]={1,2,3,4,5,6,7,8};
    int size=8;
    int x;
    printf("Enter the element you want to search in the array\n");
    scanf("%d",&x);
    if(isBinarysearch(x,arr,size))
    {
        printf("No is present\n");

    }
    else{
        
        printf("No is not present\n");

    }
    return 0; 
}