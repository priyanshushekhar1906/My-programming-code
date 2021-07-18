#include<stdio.h>
int main()
{



  int marks[4],i,j;
  for(i=0;i<4;i++)
  {
      printf("enter the array no\n");

  scanf("%d",&marks[i]);


  }
  printf("your enter no is \n");
  for(i=0;i<4;i++)
  {

   printf("input no is %d\n",marks[i]);

  }

  int roll[4]={1,3,4,6};
  for(i=0;i<4;i++)
  {

      printf("roll no is %d\n",roll[i]);


  }
  int mark[2][4]={
      {12,98,65,45},
      {46,78,87,34}
  };
  for(i=0;i<2;i++)
  {


    for(j=0;j<4;j++)
  {
      printf("%d\t",mark[i][j]);

  }
printf("\n");
  }
return 0;


}
