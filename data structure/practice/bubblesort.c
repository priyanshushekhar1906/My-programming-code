#include<stdio.h>
#include<stdlib.h>
void  ArrayTraversal(int* array,int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");
}
void bubblesort(int*arr,int size)
{
    int count =0;
    for(int i=1;i<size;i++)
    {
        printf("In Passses %d\n",i);
      for(int j=0;j<size-i;j++)
      {
           if(arr[j]>arr[j+1])
           {
                 int temp=arr[j];
               arr[j]=arr[j+1];
               arr[j+1]=temp;
               count=1;
           }
      }
      if(count==0)
      {
          return;
      }




    }






}
int main(){
    // int arr[6]={12,98,56,44,2,9};
    int arr[6]={1,9,56,144,243,349};
    int size=6;
    ArrayTraversal(arr,size);
    bubblesort(arr,6);
    ArrayTraversal(arr,size);
    
    return 0; 
}