#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i=0;
    int*p;
    while(i<45434){


        printf("Welcome to code with harry\n");
        p=malloc(34444*sizeof(int));
        if(i%100==0)
        {
            getchar(); 
        }
        i++;
        free(p); //without  this we will encounter the situation of memory leak
    }
    return 0;
}
