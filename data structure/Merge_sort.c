#include<stdio.h>
void  PrintArray(int A[],int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n");
    
}
void Merge(int A[],int mid,int low,int high)
{
     int i,j,k,B[100];
     i=low;
     j=mid+1;
     k=low;
    while(i<=mid && j<=high)
     {
         if(A[i]<A[j])
         {
             B[k]=A[i];
             k++;i++;
         }
         else{
             B[k]=A[j];
             j++;k++;
         }

     }
     while(i<=mid)
     {
         B[k]=A[i];
         k++;i++;
     }
     while(j<=high)
     {
         B[k]=A[j];
         j++;k++;
     }
     for(int i=low;i<=high;i++)
     {
         A[i]=B[i];
     }

}
void MergeSort(int A[],int low ,int high)
{
    if(low<high)
    {
        int mid=(low+high)/2;
        MergeSort(A,low,mid);
        MergeSort(A,mid+1,high);
        Merge(A,mid,low,high);

    }
}
int main(){
    int A[]={1,46,12,4,5,2,9};
    int n=7;
    PrintArray(A,n);
     MergeSort(A,0,n-1);
       PrintArray(A,n);
     
    
    return 0; 
}