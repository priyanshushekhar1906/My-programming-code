#include<stdio.h>
#include<math.h>
#define PI 3.14
float Edistance(int x1, int y1, int x2,int y2)
{
    return sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
}
float  Areaofcircle(float d)
{
   printf("Area of circle is %f/n",PI*d*d);
}
int main()
{
    int x1,x2,y1,y2;
   printf("x1 is :\n");
   scanf("%d",&x1);
   printf("y1 is :\n");
   scanf("%d",&y1);
   printf("x2 is :\n");
   scanf("%d",&x2);
   printf("y2 is :\n");
   scanf("%d",&y2);
//   float ans= Edistance(x1,y1,x2,y2);
  //printf("distance is %f\n",ans);
  float (*p)(int,int,int,int);
  p=Edistance;
  float d=(*p)(x1,y1,x2,y2);
  printf("The E distance is %f\n",d);
  Areaofcircle(d);
  

    return 0;
}
