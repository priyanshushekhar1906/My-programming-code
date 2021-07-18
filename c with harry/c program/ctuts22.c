#include<stdio.h>
int main()
{
    int k,i,cm,p,inch;
    float miles,feet,inches,kg,met;
    int cas;


   while (1)
   {


    printf("\nEnter the case.enter 0 to exit\n 1.killometer in miles\n 2.inches in feet\n 3.cm in inches \n4.pound in kg \n5.inches in meters\n",cas);
     scanf("%d",&cas);


    switch (cas)
    {
 case 0:
        printf("quitting the program");
        goto end;
        break;
    case 1:
    printf("enter the no of kilometer you want to convert in miles\n");
    scanf("%d",&k);
    miles=0.621371*k;
    printf("your %d km in miles is %f \n",k,miles);
    break;
     case 2:
    printf("enter the no of inches you want to convert in feet\n");
    scanf("%d",&i);
    feet=0.0833*i;
      printf("your %d inches in feet is %f \n",i,feet);
      break;

      case 3:

    printf("enter the no of cms you want to convert in inches\n");
      scanf("%d",&cm);
      inches=0.394*cm;
      printf("your %d cm in inches is %f \n",cm,inches);
      break;

      case 4:

    printf("enter the no of    pound you want to convert in kg\n");
    scanf("%d",&p);
    kg=0.454*p;
      printf("your %d pound in kg is %f \n",p,kg);
      break;

      case 5:

    printf("enter the no of inches you want to convert in meters\n");
    scanf("%d",&inch);
    met=0.0254*inch;
      printf("your %d inches in meter is %f \n",inch,met);
      break;
      default:

    printf("case is not available:\n");



    }
   }
    end:
        return 0;





}






