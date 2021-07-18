#include<stdio.h>
#include<string.h>
/*struct student{
    int id;
    int marks;
    char fav_char;
    char name[34];     // this will print all value at a single time




};*/
union student{

    char fav_char;//this will print last value correctly and not print all value at a same time and print some garbage value in above mmember
    char name[34];   // memory of this union is 34bytes
    int marks ;
    int id;




};

int main()
{
    union student s1;
    s1.id=1;

    
    

      s1.marks=90;
      s1.fav_char='p';
      strcpy(s1.name,"priyanshu");
    printf("The id is %d\n",s1.id);

    printf("The fav_char is %c\n",s1.fav_char);
    printf("The name is %s\n",s1.name);
     printf("The marks is %d\n",s1.marks);

}
