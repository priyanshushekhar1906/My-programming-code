#include<stdio.h>

int main(){
    
    int arr[6]={1,2,3,4,5};
    for(int i=0;i<5;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
 
    for(int i=4;i>=2;i--)
    {
        arr[i+1]=arr[i];

      
    }
    arr[2]=5;
    for(int i=0;i<6;i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0; 
}