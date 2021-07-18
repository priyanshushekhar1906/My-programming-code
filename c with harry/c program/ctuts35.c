#include<stdio.h>
#include<string.h>
int main()
{
    char s1[]="chotu";
    char s2[]="singh";
    char s3[45];

   // printf("the concanate of s1 and s2 string is %s\n",strcat(s1,s2));
   // printf("we are coping conacnate of s1 and s2 string in s3 %s\n");
   // strcpy(s3,strcat(s1,s2));
   //printf("the length of s1 is %d\n",strlen(s1));
  // printf("the length of s2 is %d\n",strlen(s2));
    printf("the reverse of string 1 is \n");
    puts(strrev(s1));
     printf("the reverse of string 2 is \n");
    puts(strrev(s2));
    printf("the strcmp of s1 and s2 returned is %d\n",strcmp(s1,s2));
    char s4[40];
    char s5[40];
    char s6[100];
    printf("Enter your first strings\n");
    gets(s4);
    printf("Enter your second strings\n");
    gets(s5);
   strcpy(s6,strcat(s4,s5));
   printf("Your string s6 is \n");
   puts(s6);




}
