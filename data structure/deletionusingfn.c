#include<stdio.h>
void display(int*arr,int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d\t",*(arr+i));
    }
    printf("\n");

}
void   arrdeletion(int *arr,int size,int index)
{
    for(int i=index;i<size-1;i++)
    {
        *(arr+i)=*(arr+i+1);
    }
}

int main(){
    int arr[7]={1,2,3,4,5,6,7};
    printf("Showing array before deletion\n");
    display(arr,7);
    int index=3;
    arrdeletion(arr,7,index);
     printf("Showing array After deletion\n");
    display(arr,6);
    return 0; 
}