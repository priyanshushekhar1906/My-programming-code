#include<stdio.h>
int  linearserch(int arr[],int size,int element)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==element)
        {
            return i;
        }

    }
    return -1;


}

int main(){
    int arr[8]={1,2,3,5,6,7,83,21};
    int size=sizeof(arr)/sizeof(int);
    int element=21;
  int result=  linearserch(arr,size,element);
  if(result==-1)
  {
      printf("Element is not found in a given array\n");
  }
  else{
       printf("Element %d is found at index %d\n",element,result);
  }
  
    return 0; 
}