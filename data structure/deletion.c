#include<stdio.h>
void display(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
}
void deletion(int arr[ ],int size)
{
for(int i=0;i<size;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
}

int main(){
    int arr[5]={1,2,3,4,5};
    printf("Showing array before deletion\n");
    display(arr,5);
    for(int i=2;i<4;i++)
    {
        arr[i]=arr[i+1];
    }
    printf("Showing array after deletion\n");
    display(arr,4);
    return 0; 
}