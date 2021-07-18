#include<stdio.h>
#include<string.h>

 struct structprob
 {
  int id;
  char name[34];
  char drivinglicno[34];
 };
int main()
{  
 struct structprob e1,e2,e3;
 printf("\n\nEmployee 1st\n\n");
  e1.id=1;
  strcpy(e1.name,"priyanshu");
  strcpy(e1.drivinglicno,"123456");
  printf("Employee 1 id is:%d\n",e1.id);
  printf("Employee 1 name is:%s\n",e1.name);
  printf("Employee 1 driving license no is:%s\n",e1.drivinglicno);
   printf("\n\nEmployee 2nd\n\n");
  e2.id=2;
  strcpy(e2.name,"priya");
  strcpy(e2.drivinglicno,"12342256");
  printf("Employee 2 id is:%d\n",e2.id);
  printf("Employee 2 name is:%s\n",e2.name);
  printf("Employee 2 driving license no is:%s\n",e2.drivinglicno);
   printf("\n\nEmployee 3rd\n\n");
  e3.id=3;
  strcpy(e3.name,"anshu");
  strcpy(e3.drivinglicno,"1456");
  printf("Employee 1 id is:%d\n",e3.id);
  printf("Employee 1 name is:%s\n",e3.name);
  printf("Employee 1 driving license no is:%s\n",e3.drivinglicno);
  
    return 0;
}
