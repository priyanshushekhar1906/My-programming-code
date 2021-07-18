#include<stdio.h>
#include<stdlib.h>
struct DEqueue{
    int r,f,size;
    int*arr;
};
void queueTraversal(struct DEqueue*dq )
{
    for (int i = dq->f+1; i <=dq->r; i++)
    {
        printf("Element at %d index in queue is %d\n",i+1,dq->arr[i]);
    }
    
}
int isFull(struct DEqueue*dq)
{
    if(dq->r==dq->size-1)
    {
        return 1;
    }
    return 0;
}
int isEmpty(struct DEqueue*dq)
{
    if(dq->f==dq->r)
    {
        return 1;
    }
    return 0;
}
void  EnqueueRare(struct DEqueue*dq,int data)
{
    if(isFull(dq))
    {
        printf("You can not insert %d in queue\n",data);

    }
    else{
        dq->r++;
        dq->arr[dq->r]=data;
    }

}
void  EnqueueFront(struct DEqueue*dq,int data)
{
    if(dq->f==-1)
    {
        printf("You can not insert %d in queue from front\n",data);

    }
    else{
        dq->arr[dq->f]=data;
        dq->f--;
    }

}
int  DequeueFront(struct DEqueue*dq)
{
    int val=-1;
    if(isEmpty(dq))
    {
        printf("Your queue is Empty\n");
     
    }
    else{
        dq->f++;
        val=dq->arr[dq->f];
    }
   return val;
}
int  DequeueRare(struct DEqueue*dq)
{
    int val=-1;
    if(isEmpty(dq))
    {
        printf("Your queue is Empty\n");
     
    }
    else{
        
        val=dq->arr[dq->r];
        dq->r--;
    }
   return val;
}

int main(){
    struct DEqueue*dq=(struct DEqueue*) malloc(sizeof( struct DEqueue));
     dq->f=dq->r=-1;
     dq->size=5;
     dq->arr=(int*) malloc(dq->size*sizeof(int));
     EnqueueRare(dq,142);
     EnqueueRare(dq,132);
     EnqueueRare(dq,212);
     EnqueueRare(dq,223);
     EnqueueRare(dq,22);
    //  printf("%d element is Dequeue from rare in queue\n",DequeueFront(dq));
    //   EnqueueFront(dq,232);
    printf("%d element is Dequeue from rare in queue\n",DequeueRare(dq));
    printf("%d element is Dequeue from rare in queue\n",DequeueRare(dq));
    
      
     queueTraversal(dq);


    
    return 0; 
}