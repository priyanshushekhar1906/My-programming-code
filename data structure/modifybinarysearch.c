#include<stdio.h>
int binarysearch(int arr[],int size,int element)
{
    int low=0,mid,high=size-1;
  
//start searching
    while(low<=high){
          mid=(low+high)/2;
    if(arr[mid]==element)
    {
        return mid;
    }
    else if(arr[mid]>element)
    {
        high=mid-1;
    }
    else{
        low=mid+1;
    }
    }
    //searching ends
return -1;
}
int main(){
    int arr[8]={2,5,9,14,17,23,27,32};
    int size=sizeof(arr)/sizeof(int);
    int element=17 ;
   int result= binarysearch(arr,size,element);
 
   if(result==-1)
   {
       printf("Element not found\n");
   }
   else{
          printf("Element %d is found at  index %d",element,result);
      
   }
    return 0; 
}