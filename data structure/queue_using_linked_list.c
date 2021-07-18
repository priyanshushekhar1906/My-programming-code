#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node*next;
};
struct node*f=NULL;
struct node*r=NULL;
void linkedListTraversal(struct node*head)
{
    while (head!=NULL)
    {
    printf("%d\n",head->data);
    head=head->next;
    }
    

}
void Enqueue(int val)
{
    struct node*n=(struct node*) malloc(sizeof(struct node));
    if(n==NULL)
    {
        printf("Queue is Full");
    }
     
    else{
        
      
        n->data=val;
        n->next=NULL;
        if(f==NULL)
        {
            f=r=n;
        }
        else{
            r->next=n;
            r=n;
        }

    }

}
int Dequeue()
{
    int val=-1;
    struct node*ptr=f;
    if(f==NULL)
    {
        printf("Queue is Empty\n");
    }
    else{
        val=ptr->data;
        f=f->next;
        free(ptr);
    

    }
        return val;
    

}
int main()
{
     printf("Printing enqueue value\n");
     
    Enqueue(1);
    Enqueue(2);
    Enqueue(3);
    Enqueue(4);
    Enqueue(5);
    printf("Before Dequeue\n");
    linkedListTraversal(f);
     printf("Dequeuing element %d\n",Dequeue());
     printf("Dequeuing element %d\n",Dequeue());
     printf("Dequeuing element %d\n",Dequeue());
     printf("Dequeuing element %d\n",Dequeue());
     printf("Dequeuing element %d\n",Dequeue());
     printf("Dequeuing element %d\n",Dequeue());
 
    linkedListTraversal(f);

}