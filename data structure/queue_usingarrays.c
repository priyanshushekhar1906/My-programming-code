#include<stdio.h>
#include<stdlib.h>
struct Queue{
   int size;
   int f;
   int r;
   int*arr;

};
void traversing_Queue(struct Queue*q)
{
    for (int i =q->f+1; i <=q->r; i++)
    {
        printf("element %d is equal to %d\n",i,q->arr[i]);
    }
    

}
int isFULL(struct Queue*q)
{
    if(q->r==q->size-1)
    {
        return 1;
    }
   else{
       return 0;
   }

}
int isEmpty(struct Queue*q)
{
    if(q->f==q->r)
    {
        return 1;
    }
   else{
       return 0;
   }

}
void  Enqueue(struct Queue* q,int val){
    if(isFULL(q))
    {
        printf("We can not insert %d in Queue\n",val);
    }
    else{
        q->r++;
        q->arr[q->r]=val;

    }
}
int Dequeue(struct Queue*q)
{
    if(isEmpty(q))
    {
        printf("We can not remove element from queue\n");
        return -1;
    }
    else{
        q->f++;
        return q->arr[q->f];
    }

}

int main(){
    struct Queue*q=(struct Queue*)malloc(sizeof(struct Queue));
    q->size=10;
    q->f=q->r=-1;
    q->arr=(int*)malloc(q->size*sizeof(int));
    Enqueue(q,8);
    Enqueue(q,18);
    Enqueue(q,118);
    Enqueue(q,1);
    Enqueue(q,2);
    Enqueue(q,3);
    Enqueue(q,4);
    Enqueue(q,5);
    Enqueue(q,6);
    Enqueue(q,2318);
    Enqueue(q,2318);
     traversing_Queue(q);
     printf("%d element is dequeu from queue\n",Dequeue(q));
       printf("%d element is dequeu from queue\n",Dequeue(q));      
      printf("After Dequeing\n");
      traversing_Queue(q);

    

    
    return 0; 
}