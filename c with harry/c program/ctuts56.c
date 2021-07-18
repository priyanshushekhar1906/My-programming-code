#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int generaterand(int n)
{
    srand(time(NULL));
    return rand()%n;

}

int greater(char char1 ,char char2)
//for rock ,paper & scissor if c1>c2 return1 and if c2>c1 return 0 and if c1==c2 return -1
{
    if(char1==char2)
    {
        return -1;
    }
    if((char1=='r') && (char2=='s'))
     {
         return 1;
         printf("You win\n");
     }
     else if ((char2=='r') && (char1=='s'))
     {
         return 0;
     }
   else if((char1=='s') && (char2=='p'))
     {
         return 1;
     }
     else if ((char2=='s') && (char1=='p'))
     {
         return 0;
     }
     else if((char1=='p')&& (char2=='r'))
     {
         return 1;
     }
     else if ((char2=='p') && (char1=='r'))
     {
         return 0;

     }




}




int main()
{
    int temp,playerscore=0,compscore=0,i;
    char dict[]={'r','p','s'};
    char playerchar,compchar;
    printf("Welcome to the Rock,Paper & Scissor Game\n");
    for(i=0;i<=2;i++){
   // take player1's input
    printf("Player1's Turn\n");
    printf("Choose 1 for Rock.2 for Paper and 3 for Scissor\n");
    scanf("%d",&temp);
    getchar();
    playerchar=dict[temp-1];
    printf("%c\n\n",playerchar);
    // Generate computer's input
    printf("Computer's Turn\n");
    printf("Computer Choose \n");
    temp=generaterand(3);
    compchar=dict[temp];
    printf("%c\n\n",compchar);
      if(greater(compchar,playerchar)==1)
      {
          compscore+=1;
          printf("CPU's got it!\n");
      }
      else if(greater(compchar,playerchar)== -1)
      {
          compscore+=1;
          playerscore+=1;
          printf("It's a draw\n");
      }
      else{
        playerscore+=1;
        printf("YOU got it!\n");
      }
      printf("\nYOU: %d\n & CPU: %d\n",playerscore,compscore);

    }
    if(playerscore>compscore)
    {
        printf("You win the game\n");
    }
else if(playerscore<compscore)
    {
        printf("Computer's win the game\n");
    }
    else{
        printf("It's a Draw!\n");
    }





      // printf("the random no b/w 0 and 3 is %d", generaterand(3));
    return 0;
}
