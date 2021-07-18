#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/*int genrandno(int n){
srand(time(NULL));
return rand()%n;

}*/
void rps()
{
    char str[30];
    char str1[10];
    int i=0;
    printf("Enter your Name\n");
    gets(str);
     while(i<3)
    {
    printf("Enter your play\n");
    gets(str1);
    int p;
    srand(time(NULL));
 p=rand()%3;
 printf("Computer play is \n");
 if(p==0)
 {
     printf("ROCK\n");
 }
if(p==1)
 {
     printf("PAPER\n");
 }
 if(p==2)
 {
     printf("SCISSOR\n");

 }

 i++;
    }

}
int main()
{


//printf("the random value b/w 0 to 50 is %d",genrandno(50));

rps();


    return 0;
}
