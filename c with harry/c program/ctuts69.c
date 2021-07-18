#include<stdio.h>
int main()
{
    FILE*ptr=NULL;
    ptr=fopen("bill.txt","r");
    char str[200];
    fgets(str,200,ptr);
    printf("The given bill template was:\n %s\n",str);
    //calling fn to replace oldword
    char* newstr=str;
    printf("The actual bill template was:\n%s\n",newstr);
    fclose(ptr);

        return 0;
}
