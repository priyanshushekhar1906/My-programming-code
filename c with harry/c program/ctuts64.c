#include<stdio.h>
int main()
{

    FILE*ptr=NULL;
    char str[35];
    //************reading a file*************
    /*ptr=fopen("myfile.txt","r");
    fscanf(ptr,"%s",str);            // white space k baad read ny hoga
    printf("The  content of this file is %s ",str);*/
    //***********writing a file************
    char string[]="This is tutorial name ctuts64.c ";
   // ptr=fopen("myfile.txt","w");
    ptr=fopen("myfile.txt","a");
    fprintf(ptr,"\n%s",string);

    return 0;
}
