#include<stdio.h>
void display(int arr[],int size){
    for(int i=0;i<size;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
}
int  displayinsertion(int arr[],int size,int index,int capacity,int element)
{
    if(size>=capacity)
    {
        return -1;
    }
    else
    {
        for(int i=size-1;i>=index;i--)
        {
            arr[i+1]=arr[i];

        }
        arr[index]=element;

        return 1;
    }
    
}

int main(){
    int arr[100]={1,2,3,4,5,6,7};
   int  index=1;
    int size=7,element=20;
    display(arr,size);
  int response=  displayinsertion(arr,size,index,100,element);
  if(response==-1)
  {
      printf("Insertion is not possible\n");
  }
  else{
       display(arr,size+1);
  }

    return 0; 
}