#include<stdio.h>
typedef struct driverdetail{

   char Name[34];
   int Driving_lino;
   char Route[100];
   int km;







} det;
int main()
{
    det inp;
    int n=1;
    printf("The no of drivers is 3-:\n");
    while(n!=4)
    {

    printf("Enter your %d Driver detail:\n",n);

    printf("1.Enter your %d Driver Name :\n",n);
    scanf("%s",&inp.Name);

    printf("2.Driving license no :\n");
    scanf("%d",&inp.Driving_lino);
    printf("3.km :\n");
    scanf("%d",&inp.km);
    printf("4. Route :\n");
    scanf("%s",&inp.Route);
     printf("Name of %d driver is %s\n",n,inp.Name);
        printf("driving li no is %d\n",inp.Driving_lino);
        printf("km is %d\n",inp.km);
        printf("Route of %d driver is %s\n",n,inp.Route);
    n++;
    }
    return 0;
}
