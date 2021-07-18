#include<stdio.h>
#include<stdlib.h>// for using dynamic memory allocation function we have to add this preprocessor command
int main()
{
    int*ptr;
    int n;
   printf("Enter the size of array you want to create\n"); // we are taking memory as require during runtime
    scanf("%d",&n);
   /* //Use of malloc
    ptr=(int*) malloc(n*sizeof(int));  // ***(int*)*** typecasting for converting return void pointer in int pointer
    int i;
    printf("Enter your array no\n");
    for(i=0;i<n;i++)                   //In malloc if we not initiaalised pointer it take garbage value automatically
    {
        scanf("%d",&ptr[i]);
    }
 for(i=0;i<n;i++)
    {
        printf("\nYour array no at index %d is %d\n",i,ptr[i]);

    }*/
    //use of calloc
    int i;
    ptr=(int*) calloc(n,sizeof(int));
    printf("Enter your array no\n");
    for(i=0;i<n;i++)                   //In calloc if we not initiaalised pointer it take null or 0 value automatically.
    {
        scanf("%d",&ptr[i]);   //ptr[i]=*(ptr+i)
    }
 for(i=0;i<n;i++)
    {
        printf("\nYour array no at index %d is %d\n",i,ptr[i]);

    }
    //use of realloc
      printf("\nEnter the size of new array you want to create\n"); // we are taking memory as require during runtime
    scanf("%d",&n);
    ptr=(int*) realloc(ptr,n*sizeof(int));
    {
         printf("Enter your  array no\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&ptr[i]);
    }
 for(i=0;i<n;i++)
    {
        printf("\nYour new array no at index %d is %d\n",i,ptr[i]);

    }
    }
    free(ptr);










    return 0;
}
