#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(int argc, char  *argv[])
{
  
    char *operation;
    operation=argv[1];
    int num1,num2;
    num1=atoi(argv[2]);
    num2=atoi(argv[3]);
    if(strcmp(operation,"add")==0)
    {
        printf("sum is %d\n",num1+num2);
    }
    
    if(strcmp(operation,"sub")==0)
    {
        printf("sub is %d\n",num1-num2);
    }

    if(strcmp(operation,"multiply")==0)
    {
        printf("mutiply is %d\n",num1*num2);
    }
    
    if(strcmp(operation,"divide")==0)
    {
        printf("divide is %d\n",num1/num2);
    }
    
   
   
}
