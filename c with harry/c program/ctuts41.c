#include<stdio.h>
void parser(char str[])

{
    strcpy(str,"This is a heading");
    printf("Output : \n %s",str);
}

int main()
{
    char string[]="<h1> This is a heading <h1>";
    printf("input : \n%s\n",string);
    parser(string);





    return 0;
}
