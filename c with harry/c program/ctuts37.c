#include<stdio.h>
#include<string.h>
struct student{
    int id;
    char name[34];
    int marks;
    char fav_char;






};//harry,ravi,shubham;aise bhi define kr skte h
//struct student harry,priyanshu,rishu; global variable


    int main()
    {


    struct student harry,priyanshu,rishu; //local variable
    harry.id=1;
    harry.marks=89;
    harry.fav_char='h';
    priyanshu.id=2;
    priyanshu.marks=82;
    priyanshu.fav_char='p';
    strcpy(priyanshu.name,"thor");
    rishu.id=3;
    rishu.marks=93;
    rishu.fav_char='r';
    printf("priyanshu and harry marks is %d and %d\n",priyanshu.marks,harry.marks);
    printf("priyanshu name is %s\n",priyanshu.name);
    printf("rishu marks is %d\n",rishu.marks);
    printf("rishu id is %d\n",rishu.id);
    printf("harry fav char is is %c\n",harry.fav_char);






    return 0;
}
