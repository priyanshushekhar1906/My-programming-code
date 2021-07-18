#include<stdio.h>
typedef struct student{
    int id;
    int marks;
    char name[34];
    char fav_char;





}std;
void pointer(){
    //int* a , b;
    typedef int* intpntr;
    intpntr a,b; //ab yeh dono pointer hoga


    int c=89;
    a=&c;
    b=&c;
    printf("value of a is %d\n",a);
    printf("value of b is %d\n",b);
    printf("add of c is %d\n",&c);


}
int main()
{
    pointer();
    //struct student s1,s2;
    std s1,s2;
    s1.id=89;
    s2.id=167;
    printf("the s1's id is %d\n",s1.id);
    printf("the s2's id is %d\n",s2.id);
    /*typedef unsigned long ul;
   typedef int integer;
    ul l1,l2,l3;
    integer a=4;
   printf("value of a is %d\n",a);*/





    return 0;
}
