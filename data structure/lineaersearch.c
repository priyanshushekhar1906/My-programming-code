#include<stdio.h>

int main(){
    int arr[7]={10,20,30,40,50,60,70};
    for(int i=0;i<7;i++)
    {
        printf("%d\t",arr[i]);
    }
  int element=70,count=0,present=0;
    printf("\n");
    for(int i=0;i<7;i++)
    {
         count++;
        if(arr[i]==element)
       {
           present=1;
           break;
        }
    }
    if(present==1)
    {
          printf("Element %d is found\n",element);
    }
    else{
         printf("Element is not found\n");
        
    }
    printf("total no of count %d \n",count);
    return 0; 
}