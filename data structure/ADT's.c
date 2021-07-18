#include<stdio.h>
#include<stdlib.h>
struct myarray{
    int t_size;
    int used_size;
    int *ptr;
};
void  createarray(struct myarray*a,int tsize,int usize)
// {    (*a).t_size=tsize;
//       (*a).used_size=usize;
//       (*a).ptr=(int*) malloc(tsize*sizeof(int));
{    a->t_size=tsize;
      a->used_size=usize;
      a->ptr=(int*) malloc(tsize*sizeof(int));

}
void set(struct myarray*a)
{
    int n;
    for(int i=0;i<(*a).used_size;i++)
    {
          printf("Enter the value at index %d\n",i);
        scanf("%d",&n);
        (*a).ptr[i]=n;

    }
}
void show(struct myarray*a)
{
    int n;
    for(int i=0;i<(*a).used_size;i++)
    {
      printf("The value at index %d\n",i);
         n= (*a).ptr[i];
        printf("%d\n",n);
      

    }
}

int main(){
    struct myarray marks;
    createarray(&marks,10,5);
    printf("We are running set fn\n");
    set(&marks);
    printf("We are running show fn\n");
    show(&marks);
    
    return 0; 
}