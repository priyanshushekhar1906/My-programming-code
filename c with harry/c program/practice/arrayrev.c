#include<stdio.h>
int  arrrev(int arr[]){
    int j,temp;
    for(j=0;j<=2;j++)
    {
        temp=arr[j];
        arr[j]=arr[5-j];
        arr[5-j]=temp;
    }
   
    return arr[j];



}
int main()

{
    int arr[6]={10,20,30,40,50,60};
    int p,i;
     printf("Your enter array is :\n");
    for(i=0;i<6;i++)
    {
        printf("%d\t",arr[i]);
    }
    arrrev(arr);

     printf("\nYour reverse array is :\n");
      for(i=0;i<6;i++)
    {
        printf("%d\t",arr[i]);
    }
   
    return 0;
}
