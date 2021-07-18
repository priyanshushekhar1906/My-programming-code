#include<stdio.h>
int swap(int*x ,int*y)
{
    int r;
    r=*x;
    *x=*y;
    *y=r;

    return  ;







}



changevalue(int*a)
{
    *a=2873;
}
 int value(int*q,int*w)
 {
     int v;
     v=*q;

  *q=*q+*w;
  *w=v-*w;

  return ;


 }



int main()
{
    int a=23,b=98;
    printf("value of a is now=%d\n",a);

    printf("swapping nos are a=%d,b=%d\n",a,b);
    int s;

    s=swap(&a,&b);
    printf("the no is swap that is a=%d,b=%d\n",a,b);
    changevalue(&a);
    printf("value of a is now=%d\n",a);
    int x=12,y=10;
    printf("the value of x and y is %d and %d\n",x,y);
    value(&x,&y);
    printf("the value of x and y  is now %d and %d",x,y);



    return 0;







}

