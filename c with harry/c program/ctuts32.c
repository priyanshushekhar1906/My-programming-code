#include<stdio.h>

void func1(int array[])
{

    int i;
    for(i=0;i<4;i++)
    {
        printf("the value of an array at %d is %d\n ",i,array[i]);
    }
    array[0]=7373;  // very imp point array ko jb as a argument pass krte h tb copy pass nhi hota balki pointer k form me address pass ho jata

}
void func2(int*ptr)
{
  int i;
  for(i=0;i<4;i++)
  {
     // printf("the value of array passes as pointer at index %d is %d\n",i,ptr[i]);
      printf("the value of array passes as pointer at index %d is %d\n",i,*(ptr+i));
  }

*(ptr+2)=99;
}
void func3(int arr1[2][2])
{

int i,j;
for(i=0;i<2;i++)
{
    for(j=0;j<2;j++)
    printf("at[%d][%d] is %d\n",i,j,arr1[i][j]);
}

}




int main()
{
    int arr[]={1,2,3,4};
   /* printf("the value of array at index 0 is %d\n",arr[0]);
    func1(arr); //array ka add ja rha
        printf("the value of array at index 0 is %d\n",arr[0]);*/
        func2(arr);//array ka base address ptr me chala gya
        func2(arr);
        int b[2][2]=
        {
            {1,2},

           {3,4 }

        };
        func3(b);
    return 0;

}
