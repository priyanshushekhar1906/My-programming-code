#include<stdio.h>
int main()
{
   /* label:
        printf("we are inside a lable\n");
        goto end;
        printf("hello world\n");
        goto label;
        end:
            printf("we are at end");*/
            int i,j,num;
            for(i=0;i<10;i++)
            {
                printf("%d\n",i);
                for(j=0;j<4;j++)
                {


                    printf("Enter a no.enter 0 to exit\n");
                scanf("%d",&num);
                if(num==0)
                {
                    goto end;
                }
                }
            }
            end:






    return 0;
}
