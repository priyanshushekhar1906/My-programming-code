#include<stdio.h>
void PrintArray(int *arr,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);

    }
    printf("\n");
}
void Selection_Sort(int *arr,int n)
{
    printf("Running selection sort....\n");
    int indexOfmin;
    int swap;
    
    for(int i=0;i<n-1;i++)
    {
        indexOfmin=i;
        
        for(int j=i+1;j<n;j++)

        {
            if(arr[j]<arr[indexOfmin])
            {
            indexOfmin=j;
            }
      
        }
        // swap A[i] and A[indexodfmin]
         swap=arr[i];
        arr[i]=arr[indexOfmin];
        arr[indexOfmin]=swap;
        
       
        
        
       
        

    }
}

int main(){
    // 00 01 02 03 04
    //|03 05 02 13 12

    // After 1st  pass
    // 00 01 02 03 04
    // 02|05 03 13 12

    // After 2nd  pass
    // 00 01 02 03 04
    // 02 03|05 13 12
 
    // int arr[]={8,0,7,1,3};
    int arr[]={3,5,2,13,12};
    int n=5;
    PrintArray(arr,n);
    Selection_Sort(arr,n);
    PrintArray(arr,n);

    return 0; 
}