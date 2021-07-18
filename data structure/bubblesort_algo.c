#include<stdio.h>
void PrintArray(int*A,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n");
}
void  BubbleSort(int*A,int n)
{
    
    int temp;
    for(int i=0;i<n-1;i++)//For no of passes
    {
          printf("No of passes is equal to %d\n",i+1);
  for(int j=0;j<n-1-i;j++)//For Comparison
  {
    
      if(A[j]>A[j+1])
      {
          temp=A[j];
          A[j]=A[j+1];
          A[j+1]=temp;

      }
  }


    }
}
void  BubbleSortAdative(int*A,int n)
{
    
    int temp;
    int isSorted=0;
    for(int i=0;i<n-1;i++)//For no of passes
    {
        isSorted=1;
        printf("No of passes is equal to %d\n",i+1);
  for(int j=0;j<n-1-i;j++)//For Comparison
  {
      if(A[j]>A[j+1])
      {
          temp=A[j];
          A[j]=A[j+1];
          A[j+1]=temp;
          isSorted=0;

      }
     
  }
   if(isSorted)
    {
        return;
    }
  


    }
    
}
int main(){
    // int A[]={27,18,22,9,41,10};
      int A[]={1,2,3,4,6,5};
    int n=6;
    PrintArray(A,n);//Printing The element before sorting
    // BubbleSort(A,n);//Function to sort the array
     BubbleSortAdative(A,n);
    PrintArray(A,n);//Printing the element after sorting


    return 0; 
}