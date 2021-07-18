#include<stdio.h>
#include"ctuts54.c"
#define PI 3.14
#define SQUARE(x) x*x


int main()
{

     float area;
     int radius=7;
    float var=PI;
    area=PI*SQUARE(radius);
    printf("the value of var is %f\n",var);
    printf("the area  is %f\n",area);



}
