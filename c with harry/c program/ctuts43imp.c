#include<stdio.h>
#include<string.h>
void parser(char*string1){
    int i,in=0; // variable to track whether we are inside a tag
    int index=0;
    for(i=0;i<strlen(string1);i++)
    {
    if(string1[i]=='<')
    {
      in=1;
      continue;
    }
    if(string1[i]=='>')
    {
        in=0;
        continue;
    }
    if(in==0)
    {
        string1[index]=string1[i];
        index++;
    }

    }
    string1[index]='\0';
    //now we have to remove the spaces
    while(string1[0]==' ')
    {
        for(i=0;i<strlen(string1);i++)
        string1[i]=string1[i+1];
    }
    while(string1[strlen(string1)-1]==' ')
    {
        string1[strlen(string1)-1]='\0';

    }


}
int main()
{
    char string[]="<h1>      This is a heading     </h1>";
    parser(string);
    printf("parser string is \t~~~%s~~~",string);



    return 0;
}
