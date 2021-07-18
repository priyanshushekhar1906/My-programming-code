#include<stdio.h>
int main()
{
    int age,marks;
    printf("Enter your age\n");
    scanf("%d",&age);
    printf("Enter your marks\n");
    scanf("%d",&marks);
    switch (age)    //switch k under ka expression int ya char ho skta h bs
    {
    case 34:
        printf("age is 34\n");
        switch(marks)
        {
            case 85:
            printf("your marks are 85\n");
            break;
            default:
                printf("your marks are not 85");
        }

        break;
    case 46:
        printf("age is 46");
        break;case 50:
        printf("age is 50");
        break;

    default:
        printf("age is not avalable");

    }



}
