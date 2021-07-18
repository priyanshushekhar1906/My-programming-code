#include<stdio.h>
#include<stdlib.h>
void PrintArray(int*arr,int n)
{
    printf("\n");
    for (int i = 0; i <n; i++)
    {
      printf("%d ",arr[i]);
    }
    printf("\n");
    
}
void Count_Sort(int*arr,int n,int max){
    // crete a new array upto max no indeces
     int*newarray=(int*) malloc((max+1)*sizeof(int));
     int i,j;
    //  intialize each element of new array with 0
     for (i = 0;i<=max;i++)
     {
         newarray[i]=0;
        
     }
    //  Increment the corresponding index in the  newarray array acc to the value of arr
     for ( j = 0; j <n; j++)
     {
             
             newarray[arr[j]]=newarray[arr[j]]+1;
           
     }
     i=0;  //counter for new array
      j=0;   //counter for Given array
    while(i<=max){
            if(newarray[i]>0)
            {
                arr[j]=i;
                newarray[i]=newarray[i] -1;
                j++;
                
               
            }
            else{
                 i++;
            }   
     }
   free(newarray);
     
     
}
int main(){
    // int arr[]={3,1,9,7,1,2,4};
    int arr[]={3,1,9,7,1,6,7,77,9,1,2,100,12,4};
    int max=arr[0];
    int n=14;
    // Find Maximum
    for (int i =1; i <n; i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }  
    }
    PrintArray(arr,n);
    Count_Sort(arr,n,max);
    PrintArray(arr,n);
    

    
    return 0; 
}