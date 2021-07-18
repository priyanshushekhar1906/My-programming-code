#include<iostream>
using namespace std;
void swap(int A[],int i,int j)
{
    int temp;
    temp=A[i];
    A[i]=A[j];
    A[j]=temp;
}
int Partition(int A[],int l,int r)
{
    int pivot=A[r];
    int i=l-1;
    for (int j = l; j <r; j++)
    {
       if(A[j]<pivot)
       {
           i++;
           swap(A,i,j);
       }
       
    }
    swap(A,i+1,r);
    
    
   return i+1;



}

void QuickSort(int A[],int l,int r)
{
    if(l<r)
    {
        int pi=Partition(A,l,r);
        QuickSort(A,l,pi-1);
        QuickSort(A,pi+1,r);


    }
    
}
int main(){
    int A[]={5,4,3,3,3,2,12,43,1,2,1};
    int n=11;
     
    QuickSort(A,0,n-1);
    for (int i = 0; i < n; i++)
    {
    printf("%d ",A[i]);
    }
   
    
    return 0; 
}