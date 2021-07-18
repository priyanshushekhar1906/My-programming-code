#include<stdio.h>
#include<stdlib.h>
 struct node
 {
     int data;
     struct node* next;

 };
 void traversal(struct node*pointer){
     while(pointer!=NULL)
     {
         printf("Element is :%d\n",pointer->data);
         pointer=pointer->next;

     }
  

 }
//  case 1
 struct node* insertAtFirst(struct node*head,int data)
{
  struct node*ptr=(struct node*)malloc(sizeof(struct node));
  ptr->next=head;
  ptr->data=data;
  return ptr;
}
// case 2
 struct node* insertAtindex(struct node*head,int data,int index)
{
  struct node*ptr=(struct node*)malloc(sizeof(struct node));
   struct node*p=head;
   int i=0;
   while(i!=index-1)
   {
       p=p->next;
       i++;
   }
   ptr->data=data;
   ptr->next=p->next;
   p->next=ptr;
   return head;
  
}
// case 3
struct node* insertatend(struct node*head,int data)
{
    struct node*ptr1=(struct node*) malloc(sizeof(struct node));
    ptr1->data=data;
    struct node*p =head;
    
    while(p->next!=NULL)
    {
      p=p->next;
        
    }
   p->next=ptr1;
   ptr1->next=NULL;
    return head;    //head ko return krenge har baar kyuki isme koi change nhi kiya hai hm
    

}
// case 4
struct node* insertafternode(struct node*head,struct node*prevnode,int data)
{
    struct node*ptr;
   ptr =(struct node*) malloc(sizeof(struct node));
   ptr->data=data;
   ptr->next=prevnode->next;
   prevnode->next=ptr;
   return head;
   
    
}
int main(){

    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;
    head=(struct node*) malloc(sizeof(struct node));
    second=(struct node*) malloc(sizeof(struct node));
    third=(struct node*) malloc(sizeof(struct node));
    fourth=(struct node*) malloc(sizeof(struct node));
    head->data=12;
    head->next=second;
    second->data=13;
    second->next=third;
    third->data=14;
    third->next=fourth;
    fourth->data=15;
    fourth->next=NULL;
    printf("Linked list before insertion\n");
    traversal(head);
      printf("\nLinked list after insertion\n");
    // head=insertAtFirst(head,1866);
    head= insertAtindex(head,420,2);
//    head= insertatend(head,420);
  //  head= insertafternode(head,second,42);
     traversal(head); 
    return 0; 
}