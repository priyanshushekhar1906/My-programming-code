#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int function(int n)
{
    srand(time(NULL));
   
   if(n<=0)
   {
       return 0;
   }
   else{
        int i=rand()%(n); // 1 unit of time lerha h
        printf("%d",i);
       printf("This\n");
       return function(i)+function(n-1-i)
       ;   //it takes 6 unit of time
   }


}

int main(){
    int n=6;
    function(6);
    return 0; 
}