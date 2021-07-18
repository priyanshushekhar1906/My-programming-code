#include<stdio.h>
#include<stdlib.h>
struct queue{
    int f,r,size;
    int*arr;

};
void traversal(struct queue*q)
{ 
    for(int i=q->f+1;i<=q->r;i++)  
    {
        printf("Element at %d index is %d\n",i,q->arr[i]);
    }
}
int isFull(struct queue*q)
{
    if(q->r==q->size-1)
    {
        return 1;
    }
    return 0;

}
int isEmpty(struct queue*q)
{
    if(q->f==q->r)
    {
        return 1;
    }
    return 0;

}
void  Enqueue(struct queue*q,int val){
    if(isFull(q))
    {
        printf("Queue is full you can not insert %d element in queue\n ",val);
    }
    else{
        q->r++; 
        q->arr[q->r]=val;
    }
}
int  Dequeue(struct queue*q){
    if(isEmpty(q))
    {
        printf("Queue is Empty\n ");
        return -1;
    }
    else{
        int val;
        q->f++;
        val=q->arr[q->f];
        return val;
    }
}
int main(){
    struct queue*q=(struct queue*) malloc(sizeof(struct queue));
    q->f=q->r=-1;
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
    // Enqueue(q,9);
    traversal(q);
    printf("Element %d is dequeue from queue\n",Dequeue(q));
    printf("Element %d is dequeue from queue\n",Dequeue(q));
    printf("Element %d is dequeue from queue\n",Dequeue(q));
    printf("Element %d is dequeue from queue\n",Dequeue(q));
     traversal(q);


    return 0; 
}