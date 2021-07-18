#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int randomfn(int n)
{
    srand(time(NULL));
    return rand()%n;
    
}
int compare(char playerchoice,char compchoice)
{
   if(playerchoice==compchoice)
   {
       return -1;
   }
   else if(playerchoice=='p' && compchoice=='r')
   {
       return 1;

   }
   else if(playerchoice=='r' && compchoice=='p')
   {
       return 0;

   }
   else if(playerchoice=='s' && compchoice=='p')
   {
       return 1;

   }
   else if(playerchoice=='p' && compchoice=='s')
   {
       return 0;

   }
   else if(playerchoice=='r' && compchoice=='s')
   {
       return 1;

   }
   else if(playerchoice=='s' && compchoice=='r')
   {
       return 0;

   }
}
int main(){
    int n=3;
    int playerscore=0,compscore=0;
    char arr[]={'r','p','s'};
    char compchoice,playerchoice,compchar,playerchar;
    int i=0;
    while(i<n){
    printf("Enter your choice choose 1. for rock 2. for paper 3. for scissor\n");
    int x;
    scanf("%d",&x);    
    playerchoice=arr[x-1];
    if(x<4)
    {
        printf("You choose:\n%c\n",playerchoice);
    }
    else{
        printf("You enter invalid no\n");
    }
    compchoice=arr[randomfn(n)];
    printf("Computer choose:\n%c\n",compchoice);
   int decider= compare(playerchoice,compchoice);
   
   if(decider==-1)
   {
       printf("Match Draw!\n");
       playerscore+=1;
       compscore+=1;
   }
   else if(decider==1)
   {
       printf("You Win!\n");
        playerscore+=1;
       compscore+=0;
       
   }
    else {
        printf("Computer's Win\n");
        playerscore+=0;
       compscore+=1;
    }
    printf("\nYou:%d\ncomp:%d\n\n",playerscore,compscore);
    i++;
    }  

    if(playerscore>compscore)
    {
        printf("\nYou win the game\n");
    }
    else if(playerscore<compscore)
    {
        printf("\nComputer win the game\n");
    }
    else
    {
        printf("\nIt's a Draw!\n");
    }    
    return 0; 
}