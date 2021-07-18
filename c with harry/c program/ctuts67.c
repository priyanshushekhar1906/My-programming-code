#include<stdio.h>
int main()
{
    FILE *ptr=NULL;
    ptr=fopen("mytext1.txt","a+");
    char c;
    /* c=fgetc(ptr);
   printf("char is %c\n",c);
 c=fgetc(ptr);
   printf("char is %c\n",c);*/
  /* char str[34];
   fgets(str,5,ptr);
   printf("The string is %s \n",str);*/
   fputc('o',ptr);
   fputs("This is priyanshu",ptr);


fclose(ptr);
    return 0;
}
