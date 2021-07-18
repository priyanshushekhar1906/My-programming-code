#include<stdio.h>
#include<stdlib.h>

struct insertion_in_bst
{
    int data;
 struct insertion_in_bst*left;
 struct insertion_in_bst*right;
};
struct insertion_in_bst* createTreeNode(int data){
    struct insertion_in_bst*newnode=(struct insertion_in_bst*) malloc(sizeof(struct insertion_in_bst));
    newnode->data=data;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
  
}
void preOderTraversal(struct insertion_in_bst*root){
    if(root!=NULL){
        printf("%d ",root->data);
        preOderTraversal(root->left);
        preOderTraversal(root->right);
    }
    
   return;
} 
void Insertion_in_BST(struct insertion_in_bst*root,int data){
    struct insertion_in_bst*prev=NULL;
    
    while(root!=NULL){
        prev=root;
    if(root->data==data){
        printf("Cannot insert %d data in bst\n",data);
        return;

        }
     else if(root->data>data){

        root=root->left;
     }
     else{
         root=root->right;
     }

    }
    
    struct insertion_in_bst*new=createTreeNode(data);
    if(prev->data>data){
        prev->left=new;
    }
    else{
        prev->right=new;
    }

}
int main(){
  struct insertion_in_bst* root= createTreeNode(22);
  struct insertion_in_bst* second= createTreeNode(18);
  struct insertion_in_bst* third= createTreeNode(40);
  struct insertion_in_bst* fourth= createTreeNode(15);
  struct insertion_in_bst* fifth= createTreeNode(20);
  struct insertion_in_bst* six= createTreeNode(30);
  root->left=second;
  
  second->left=fourth;
  second->right=fifth;

  root->right=third;

  third->left=six;

 

  Insertion_in_BST(root,50);
  Insertion_in_BST(root,5);
  preOderTraversal(root);
   

    
    return 0; 
}