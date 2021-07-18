#include<stdio.h>
int main()
{
    char ch;
    int flag;

    printf("Enter a character to check whether it is vowel or not\n");
    scanf("%c",&ch);
    getchar();



    if(ch=='a' ||ch=='A' ||ch=='e' ||ch=='E' ||ch=='i' ||ch=='I' ||ch=='o' ||ch=='O' ||ch=='u' ||ch=='U')
    {
        flag=0;


    }
    if(flag==0)
    {
        printf("This char  is an  vowel\n");
    }
    else {
        printf("IT is an Alphabet\n");
    }

}
