#include<stdio.h>
#include<stdlib.h>
//notes of dangling
/*int   *myfunc(){
int a=34;

return &a;  // return hone k baad a khatm ho jayega toh space free ho jayega

}
/*int main()
{
    int *ptr=myfunc();    //this is called dangling pointer beacuse the local variable address is returning
    printf("the value of a is %d",*ptr);



    return 0;
}*/
/*int main()
{
    int*ptr;

    {
        int i=1;
        ptr=&i;   //i ka scope curly braces tak hi hain iske baad destroy hojayega
    }
   //  ptr is now dangling pointer
    printf("%d",*ptr);
    return 0;
}*/
int sum=32;
int * danglingpointer(){
    int a=32;
    int b=90;
    int sum;
    sum=a+b;   //  is func ko jb return kr denge tb stack frame me variable sum destroy ho jayega
    return &sum;




}
int main2()
{
    // case 1: Deallocation of memory block
    int *ptr=(int*) malloc(7*sizeof(int));
    ptr[0]=384;
    ptr[1]=314;
    ptr[2]=324;
    ptr[3]=334;
   // printf("%d",ptr[0]);
   free(ptr); // ptr is now dangling pointer
   //case 2: Function returning local variable address
   int * dangptr= danglingpointer();  // dangptr is now dangling pointer

   //case 3:if variable is going out of scope
   int * danglingptr3;
   {
       int a1=23;
       danglingptr3=&a1;

   }
//here variable a goes out of scope it means a is deleted it means danglingptr3 points a free space it means danglingptr3 is now dangling pointer






   return 0;

}
