#include<iostream>
#include<stack>
using namespace std;
struct Node{
    int data;
    struct Node*next;
};
struct Node*head=NULL;
void    PrintList(){

    Node*temp=head;
    while(temp!=NULL)
    {
     cout<<" "<<temp->data;
      temp=temp->next;
    }
    cout<<endl;
}

void LinkedList(int data)
{
 Node* p=new Node();
  if(head==NULL)
  {
      p->data=data;
      p->next=NULL;
      head=p;
  }
  else{
      Node*temp=head;
      while(temp->next!=NULL)
      {
          temp=temp->next;
      }
      p->data=data;
       temp->next=p;
  }

}
void Reverse_A_linkedUSingStack()
{
    stack <Node*> S;
    Node*temp=head;
    while(temp!=NULL)
    {
     S.push(temp);
     temp=temp->next;
    }
    temp=S.top();
    head=temp;
    S.pop();
    while(!S.empty()){
        temp->next=S.top();
        S.pop();
        temp=temp->next;
    }
   temp->next=NULL;
}
int main(){
    LinkedList(2);
    LinkedList(12);
    LinkedList(12);
    LinkedList(32);
    LinkedList(542);
    cout<<"Before Reversal\n";
    PrintList();
    Reverse_A_linkedUSingStack();
     cout<<"After Reversal\n";
    PrintList();
   
    
    return 0; 
}