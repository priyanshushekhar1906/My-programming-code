#include<stdio.h>
int b=34;        // b gloabal variable
int ret()
{
    return 45;
}
int func1(int b1)   //b1 formal argument

{
     static int b=5;     //yeh value hmesa 5 nhi rhegi dubara call krne pe 1 se increment hojayegi
     //static int b4=ret();     //statc variable ki value fn nhi ho skti hain constant hona chahiye bs
    printf("the value of b is %d\n",b);
    b++;
    printf("Address of b is %d\n",&b1);

    return b*10;
}
int main()
{
    int b=12;
    printf("Address of b is %d\n",&b);
    int var;
   var= func1(b);// b actual argument
   var= func1(b);   //      jb dubar call kr rhe hai tb cb ka value 6 preserve ho jarha hain
  var= func1(b);   //      jb dubar call kr rhe hai tb cb ka value 6 preserve ho jarha hain
   printf("the value is %d\n",var);



    return 0;
}
