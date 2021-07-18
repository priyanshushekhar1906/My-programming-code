#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node*left,*right;
};
struct node* createnode(int data){
     struct node*new_node=(struct node*) malloc(sizeof(struct node));
     new_node->data=data;
     new_node->left=NULL;
     new_node->right=NULL;
     return new_node;

}
struct node*inPredessor(struct node*root){
    root=root->left;
    while(root->right!=NULL){
        root=root->right;
    }
    return root;

}
void inorderTraversal(struct node*root){
    
if(root!=NULL){
    inorderTraversal(root->left);
    printf("%d ",root->data);
    inorderTraversal(root->right);
}
  return ;
}
struct node* deletenode(struct node*root,int key){
    if(root==NULL){
             return root;
    }
     if(root->data>key){
         root->left=deletenode(root->left,key);
     } 
     else if(root->data<key){
        root->right= deletenode(root->right,key);
     }
     else{
         if(root->left==NULL && root->right==NULL){
             free(root);
             return NULL;
         }
         else if(root->left==NULL || root->right==NULL){
             struct node*temp;
        
         if(root->left==NULL){

             temp=root->right;
            free(root);
         }
         else if(root->right==NULL){
             temp=root->left;
             free(root);
         }
         return temp;
         
         }
         else{
             struct node*InPredessor=inPredessor(root);
             root->data=InPredessor->data;
             root->left=deletenode(root->left,InPredessor->data);
         }


     }


return root;
}



int main(){
    struct node*root=createnode(5);
    struct node*second=createnode(3);
    struct node*third=createnode(6);
    struct node*fourth=createnode(1);
    struct node*fifth=createnode(4);
    struct node*sixth=createnode(7);

    root->left=second;
    root->right=third;

    second->left=fourth;
    second->right=fifth;

    third->right=sixth;

    //       5
    //     /  \  
    //    3    6
    //  /  \   \\
    // 1    4    7

    
    inorderTraversal(root);
    printf("\n\n");
    root=deletenode(root,3);
    inorderTraversal(root);
    



    
    return 0; 
}
