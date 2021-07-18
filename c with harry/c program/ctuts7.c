#include<stdio.h>
int main()

{
    //arithmetic (+,-,*,/,%)
    int b;
    float a;
    a=8;
    b=3;
    printf("division is %f\n",a/b);
//relational operator (==,>,<,>=,<=)
    printf("value is %d\n",a==b); // a&b is not equal it will give 0.
    //Logical operator (&&,!,||)(and, not equal,or)
  int c,d;
  c=7;
  d=8;
  printf("c&&d is %d\n",c&&d);//(if the both value is non zero then only it is true and give 1)
  printf("c||d is %d\n",c||d);//(if one of value is non zero then  it will show true and give 1)
  printf("!d is %d\n",!d);//if value is non zero and true it convert it in 0 and false and give 0)

 // bitwise operator (a&b,a|b,a^b)
 /*if we take 2 & 3 it first convert 2 in (10) & 3 in(11) means in binary then perform operation
   a&b dono ko sach hona hai tb 1 dega
   a|b koi ek sach ho   tb 1 dega
   a^b ek jhut ar ek sach ho tb 1 dega it also called (XOR) operator */

  // assignment operator (=,+=,-=,*=,/=)

//miscellaneous operator(sizeof(),&,*,?:)
}
