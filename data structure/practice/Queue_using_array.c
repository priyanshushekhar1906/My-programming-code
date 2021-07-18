#include<stdio.h>
#include<stdlib.h>
struct Queue
{
    int front;
    int rare;
    int size;
    int *Arr;

};
void  QueueTraversal(struct Queue *p)
{
    for (int i =p->front+1; i <=p->rare; i++)
    {
        printf("%d ",p->Arr[i]);
    }
    printf("\n");
    
}
int isFull(struct Queue *p){
    if(p->rare==p->size-1)
    {
        return 1;
    
    }
    return 0;

}
int isEmpty(struct Queue *p){
    if(p->front==p->rare)
    {
        return 1;
    
    }
    return 0;

}
void  Enqueue( struct Queue *p,int data){
    if(isFull(p))
    {
        printf("Queue is Full\n");
        return;
    }
    else{
    p->rare++;
    p->Arr[p->rare]=data;
    }

}
int  Dequeue(struct Queue*p)
{
    if(isEmpty(p))
    {
        printf("Queue is Empty\n");
        return -1;
    }
    else{
    p->front++;
     int x=p->Arr[p->front];
    return x;
    }

}

int main(){
    struct Queue *p=(struct Queue *) malloc (sizeof(struct Queue ));
    p->front=p->rare=-1;
    p->size=5;
    p->Arr=(int*) malloc (p->size*sizeof(int));
    Enqueue(p,1);
    Enqueue(p,2);
    Enqueue(p,4);
    Enqueue(p,3);
    Enqueue(p,5);
    // Enqueue(p,6);
    printf("%d  element is Dequeue from queue\n",Dequeue(p));
    printf("%d  element is Dequeue from queue\n",Dequeue(p));
    printf("%d  element is Dequeue from queue\n",Dequeue(p));
    printf("%d  element is Dequeue from queue\n",Dequeue(p));
    printf("%d  element is Dequeue from queue\n",Dequeue(p));
    printf("%d  element is Dequeue from queue\n",Dequeue(p));
    QueueTraversal(p);
   
    return 0; 
}