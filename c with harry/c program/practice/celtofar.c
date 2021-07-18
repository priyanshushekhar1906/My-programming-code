#include<stdio.h>
int main()
{
    int celcius,farhenheit,i;
    for(i=0;i<12;i++)
    {
        celcius=i*10;
        farhenheit=1.8*celcius+32;
        printf("\ncel=%d\t\t far=%d\n\n",celcius,farhenheit);
        if(celcius==0)
        {
            printf("this is a freezing point.\n");
        
        }
        if(celcius==100)
        {
            printf("this is a boiling point.\n");
        
        }
    }


   return 0;
}