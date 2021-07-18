#include<stdio.h>
#include<stdlib.h>
int main()
{

    printf("File name is %s\n",__FILE__);// underscore underscor file give our file name
    printf("Our date is %s\n",__DATE__);
    printf("Time NOw is %s\n",__TIME__);
    printf("Line no is %d\n",__LINE__);
    printf("ANSI: %d\n",__STDC__);// it tell we are compiling program with ANSI standard

    return 0;
}
