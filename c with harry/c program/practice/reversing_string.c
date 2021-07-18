#include<stdio.h>
#include<string.h>

int main(){
//    char string[]={'c','h','o','t','u','\0'};
char string[]="chotu";
   int length=0;
   while(string[length]!='\0')
   {
       length++;
   }
   printf("Length of string is %d\n",length);
//    printf("Enetr your string\n");
//    gets(string);
//    puts(strrev(string));
 for(int i=0;i<length/2;i++)
 {
     int temp=string[i];
     string[i]=string[length-1-i];
     string[length-1-i]=temp;

 }
 for (int i = 0; i <= length; i++)
 {
     printf("%c",string[i]);
 }
  

   
   
    return 0; 
}