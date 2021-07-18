#include<stdio.h>
#include<stdlib.h>
int main()
{
int n;
int j=1;
char*ptr;
while(j<=3)
{
printf("Enter the **Employee id** - \n");
printf("Employee %d:-\n",j);
printf("Enter the size of char in employee id %d:-\n",j);
scanf("%d",&n);
ptr=(char*) malloc((n+1)*sizeof(char));
printf("Input the employee id of %d \n",j);
int i=1;
while(i<=3)
{
scanf("%s",ptr);
printf("Employee id of %d is\n",j);
printf("%s\n",ptr);
}
j++;
}
/*printf("Employee 2:-\n");
printf("Enter the size of char in employee id 2:-\n");
scanf("%d",&n);
ptr=(char*) realloc(ptr,n*sizeof(char));
printf("Input the id of employee 2nd\n");
for(i=0;i<n;i++)
{
    scanf("%c",&ptr[i]);
}
printf("Employee 2nd id is\n");
for(i=0;i<n;i++)
{
    printf("%c\n",ptr[i]);
}
printf("Employee 3:-\n");
printf("Enter the size of char in employee id 3:-\n");
scanf("%d",&n);
ptr=(char*) realloc(ptr,n*sizeof(char));
printf("Input the id of employee 3rd\n");
for(i=0;i<n;i++)
{
    scanf("%c",&ptr[i]);
}

printf("Employee 3rd id is\n");
for(i=0;i<n;i++)
{
    printf("%c\n",ptr[i]);
}*/
return 0;

}
