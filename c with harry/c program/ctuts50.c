#include<stdio.h>
#include<stdlib.h>
int main()
{
    int chars;
    char*ptr;
    char a,b;
    int i=0;
    while(i<3)
    {
        printf("Enter the no of character in your employee id %d you want to create\n",i+1);
        scanf("%d",&chars);
        getchar();  //getchar nhi lagayange toh wo enter ko scanf ka input maang lega
        printf("Enter the value of a\n");
        scanf("%c",&a);
        getchar();
        printf("Enter the value of b\n");
        scanf("%c",&b);
        ptr=(char*) malloc((chars+1)*sizeof(char));  //(chars+1) is for storing null character
        printf("Enter the employee id of %d\n",i+1);
        scanf("%s",ptr);  //ptr is already address don't have to use  &
        printf("Your employee %d: id is %s\n",i+1,ptr);
        free(ptr);
        i++;

    }

    return 0;
}
