#include<stdio.h>
struct driver{

    char name[34];
    char dlno[34];
    char route[45];
    int kms;

};
int main()
{
   struct driver d1,d2,d3;
   printf("Enter the details of Drivers\n");
   printf("Enter the details of Drivers:1\n");
   printf("Enter the name of first Driver\n");
   scanf("%s",&d1.name);
    printf("Enter the dlno of first Driver\n");
   scanf("%s",&d1.dlno);
    printf("Enter the route of first Driver\n");
   scanf("%s",&d1.route);
    printf("Enter the kms of first Driver\n");
   scanf("%d",&d1.kms);
   printf("Enter the details of Drivers:2\n");
    printf("Enter the name of second Driver\n");
   scanf("%s",&d2.name);
   printf("Enter the dlno of second Driver\n");
   scanf("%s",&d2.dlno);
   printf("Enter the route of second Driver\n");
   scanf("%s",&d2.route);
   printf("Enter the kms of second Driver\n");
   scanf("%d",&d2.kms);
   printf("Enter the details of Drivers:3\n");
   printf("Enter the name of Third Driver\n");
   scanf("%s",&d3.name);
   printf("Enter the dlno of Third Driver\n");
   scanf("%s",&d3.dlno);
   printf("Enter the route of Third Driver\n");
   scanf("%s",&d3.route);
   printf("Enter the kms of Third Driver\n");
   scanf("%d",&d3.kms);
   printf("\n*************Print the details of drivers***********\n");
   printf("Details of first driver\n");
   printf("Name is :%s\n",d1.name);
   printf("dlno is :%s\n",d1.dlno);
   printf("route is :%s\n",d1.route);
   printf("kms is :%d\n",d1.kms);
    printf("Details of second driver\n");
   printf("Name is :%s\n",d2.name);
   printf("dlno is :%s\n",d2.dlno);
   printf("route is :%s\n",d2.route);
   printf("kms is :%d\n",d2.kms);
    printf("Details of Third driver\n");
   printf("Name is :%s\n",d3.name);
   printf("dlno is :%s\n",d3.dlno);
   printf("route is :%s\n",d3.route);
   printf("kms is :%d\n",d3.kms);



    return 0;
}
