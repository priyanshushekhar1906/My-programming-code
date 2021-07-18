#include<stdio.h>
#include<stdlib.h>
struct circularQueue{
   int size;
   int*arr;
   int f;
   int r;



};
// void traversal(struct circularQueue*q)
// {
 
//     for (int i =q->f+1; i <=q->r; i++)
//     { 
//         printf("element %d is equal to %d\n",i,q->arr[i]);
//     }
// }
int isFull(struct circularQueue *q)
{
    if((q->r+1)%q->size==q->f)
    {
        return 1;
    }
    else{
   return 0;
    }
}
int isEmpty(struct circularQueue *q)
{
    if(q->f==q->r)
    {
        return 1;
    }
   return 0;
}
void Enqueue(struct circularQueue*q,int val)
{
    if(isFull(q)){
    printf("Queue is Full");
    }
    else{
        printf("Enqueue element %d\n",val);

       q->r=(q->r+1)%q->size;
       q->arr[q->r]=val;
    }
}
int Dequeue(struct circularQueue*q)
{
    if(isEmpty(q)){
    printf("Queue is empty");
    return -1;
    }
    else{
    
       q->f=(q->f+1)%q->size;
       return q->arr[q->f];
    }
}
int main(){
    struct circularQueue*q=(struct circularQueue*) malloc(sizeof(struct circularQueue));
    q->size=6;
    q->f=0;
    q->r=0;
    q->arr=(int*) malloc(q->size*sizeof(int));
    Enqueue(q,9);
    Enqueue(q,19);
    Enqueue(q,69);
    Enqueue(q,59);
    Enqueue(q,89);
    Enqueue(q,59);
    // Enqueue(q,9);
    // Enqueue(q,9);
    // Enqueue(q,9);
    //   traversal(q);
   printf("Dequeue element is %d\n",Dequeue(q));
   printf("Dequeue element is %d\n",Dequeue(q));
   printf("Dequeue element is %d\n",Dequeue(q));
   printf("Dequeue element is %d\n",Dequeue(q));
   printf("Dequeue element is %d\n",Dequeue(q));
//    printf("Dequeue element is %d\n",Dequeue(q));    
    //    Enqueue(q,59);
    //    Enqueue(q,359);
    //    Enqueue(q,549);
    //    Enqueue(q,559);
    //    Enqueue(q,529);
    //    Enqueue(q,529);
    // traversal(q);


    
    return 0; 
}