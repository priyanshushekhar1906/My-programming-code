#include<stdio.h>
#include<string.h>
void printstr(char str[])
{
  int i=0;
  while(str[i]!='\0')
  {
      printf("%c",str[i]);
      i++;
  }
printf("\n");




}




int main()
{
    //char str[]={'c','h','o','t','u','\0'};
    char str[]="chotu"; // hmlog ko jb bhi string define krenge array ka size hmesa ek jyada hoga string k size se
    char str1[100];
    printf("enter your string\n");
    gets(str1);
    printstr(str);
    printf("your string str1 is %s\n",str1);
    printf("using puts:\n");
    puts(str1);
    return 0;

}
