#include<stdio.h>
int main()
{
    int a=89;
    int* pntr=&a;
    int *pntr1=NULL;
    printf("address of a is %p\n",pntr);  //pntr k under jo address hai usko print
    //krane ko pntr likhenge ar jiska var ka address hai uski value print krane ko *pntr likhenge//
    printf("address of a is %p\n",pntr1);
    printf("address of a is %p\n",&a);
    printf("value of a is %d\n",a);
    printf("value of a is %d\n",*pntr);
    printf("address of pointer is %p\n",&pntr);
}
