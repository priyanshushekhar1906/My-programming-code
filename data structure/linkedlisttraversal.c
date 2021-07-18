 #include<stdio.h>
 #include<stdlib.h>
 struct Node{ 
     int data;
     struct Node*next;

 };
 void traversal(struct Node*ptr)
 {
    
     while(ptr!=NULL){
         printf("Element is %d:\n",ptr->data);
         ptr=ptr->next;
     }
     

 }
 
 int main(){
     struct Node *head;
     struct Node *second;
     struct Node *third;
     struct Node *fourth;
     head=(struct Node*) malloc(sizeof(struct Node));
     second=(struct Node*) malloc(sizeof(struct Node));
     third=(struct Node*) malloc(sizeof(struct Node));
     fourth=(struct Node*) malloc(sizeof(struct Node));
                  //  link first and second node
     head->data=17;
     head->next=second;
    //  link second and third node
     second->data=172;
     second->next=third;

     third->data=117;
     third->next=fourth;
     fourth->data=344 ;
      fourth->next=NULL;
     traversal(head);  
     return 0; 
 }