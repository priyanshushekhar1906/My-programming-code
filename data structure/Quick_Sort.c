#include<stdio.h>
void  PrintArray(int Arr[],int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("%d ",Arr[i]);
    }
    printf("\n");
    
}
int Partition(int A[],int low,int high)
{
   int pivot=A[low];
   int i=low+1;
   int j=high;
   int temp;
   do{
   while(A[i]<=pivot)
   {
       i++;
   }
   while(A[j]>pivot)
   {
       j--;
   }
    if(i<j){
      temp=A[i];
      A[i]=A[j];
      A[j]=temp;
   }
    
   
   }while(i<j);
    temp=A[low];
       A[low]=A[j];
       A[j]=temp;

       return j;


}
void  QuickSort(int A[],int low,int high){

    int PartitionIndex;
    if(low<high){
    PartitionIndex=Partition(A,low,high);
     QuickSort(A,low,PartitionIndex-1);
     QuickSort(A,PartitionIndex+1,high);
    }



}
int main(){
    int A[]={2,3,5,24,53,12,3,7,9,8};
    int n=10;
    PrintArray(A,10);
    QuickSort(A,0,n-1);
     PrintArray(A,10);
    return 0; 
}