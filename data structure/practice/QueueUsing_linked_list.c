#include<stdio.h>
#include<stdlib.h>
struct Linked{
    int data;
    struct Linked*next;
};
void PrintLinkedList(struct Linked*s)
{
    while(s!=NULL)
    {
        printf("%d ",s->data);
        s=s->next;
    }
    printf("\n");
}
struct Linked*  Enqueue(struct Linked*s,int data)
{
    struct Linked*p=(struct Linked*) malloc(sizeof(struct Linked));
    if(p==NULL){
        printf("Queue is Full\n");

    }
    else{
    if(s==NULL)
    {
        p->data=data;
        p->next=s;
        s=p;
    }
    else{
        p->data=data;
        p->next=s;
        s=p;
    }
    }
    return s;
}
int Dequeue(struct Linked*s)
{
   if(s==NULL)
   {
       printf("Queue is Empty\n");
       return -1;
   }
   else{
       struct Linked*p=s;
       struct Linked*q=s->next;
       while(q->next!=NULL)
       {
           p=p->next;
           q=q->next;
       }
       int data=q->data;
       p->next=NULL;
       
       free(q);
       return data;
   }
  
}

int main(){
    struct Linked*s=NULL;
    s=Enqueue(s,12);
    s=Enqueue(s,1);
    s=Enqueue(s,2);
    s=Enqueue(s,3);
    s=Enqueue(s,4);
    s=Enqueue(s,14);
    printf("%d Element is dequeue from queue\n",Dequeue(s));
    PrintLinkedList(s);

   
    
    return 0; 
}