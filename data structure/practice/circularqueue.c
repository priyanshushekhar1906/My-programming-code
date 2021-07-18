#include<stdio.h>
#include<stdlib.h>
struct CircularQueue{
    int f,r,size;
    int*arr;

};
int isFull(struct CircularQueue*q)
{
    if((q->r+1)%q->size==q->f)
    {
        return 1;
    }
return 0;
}
int isEmpty(struct CircularQueue*q)
{
    if(q->r==q->f)
    {
        return 1;
    }
return 0;
}
void Enqueue(struct CircularQueue*q,int val)
{
    if(isFull(q))
    {
        printf("Queue is Full\n ");
    }
    else{
        printf("Enqueing element %d\n",val);
        q->r=(q->r+1)%q->size;
        q->arr[q->r]=val;
    }

}
int Dequeue(struct CircularQueue*q)
{
    if(isEmpty(q))
    {
        printf("Queue is Empty\n");
    }
    else{
        q->f=(q->f+1)%q->size;
        return q->arr[q->f];
    }
}
int main(){
    struct CircularQueue*q=(struct  CircularQueue*) malloc(sizeof(struct CircularQueue));
    q->f=q->r=0;
    q->size=8;
    q->arr=(int*) malloc(q->size*sizeof(int));
    Enqueue(q,1);
    Enqueue(q,2);
    Enqueue(q,3);
    Enqueue(q,4);
    Enqueue(q,5);
    Enqueue(q,6);
    Enqueue(q,7);
    Enqueue(q,8);
    printf("Dequeing element %d\n",Dequeue(q));
    printf("Dequeing element %d\n",Dequeue(q));
    printf("Dequeing element %d\n",Dequeue(q));
    printf("Dequeing element %d\n",Dequeue(q));
     Enqueue(q,8);
     Enqueue(q,88);



     
    return 0; 
}