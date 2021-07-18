#include<stdio.h>
//target: 70 60 50 40 30 20 10
// 10 20 30 40 50 60 70
// a b
// b a
/*s=a;
a=b;
b b;     this is how we do swapping
b=s;
b a
*/




void printarray(int arr[])
{
    int i;
    for(i=0;i<7;i++)
    {
        printf("%d\t",arr[i]);
    }
}

void printrev(int arr[])
{
    int i;
    for(i=0;i<7/2;i++)       // 7/2 tak chala hai kyuki agar pura loop k liye chala denge toh array ulta hone k bad phir se sidha ho jayega
    {
        int temp;
        temp=arr[i];
        arr[i]=arr[6-i];
        arr[6-i]=temp;




    }
    for(i=0;i<7;i++)
    {
           printf("%d\t",arr[i]);
    }





}





int main()
{
    int arr[]={10,20,30,40,50,60,70};
 printf("Before reversing the array\n");
 printarray(arr);
 printf("\nAfter reversing the array\n");
 printrev(arr);








    return 0;
}
