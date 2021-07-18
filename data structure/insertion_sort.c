#include<stdio.h>
void PrintArray(int *A,int n){
    for(int i=0;i<n;i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n");
}
void InsertionSort(int *A,int n)
{
    int key,j;
    for(int i=1;i<=n-1;i++)
    {
        key=A[i];
        j=i-1;
        while(j>=0 && A[j]>key)
        {
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=key;
    }
}

int main(){
    // int A[]={12,54,65,7,23,9};
    // int A[]={1,2,3,4,5,6};
    int A[]={7,2,11,8,1};
    int n=5;
    PrintArray(A,n);
    InsertionSort(A,n);
    PrintArray(A,n);

    return 0; 
}