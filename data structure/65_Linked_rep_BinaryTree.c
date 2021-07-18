#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*left;
    struct node*right;
};
struct node* CreatingAnode(int data)
{
    struct node*n=(struct node*) malloc(sizeof(struct node));//Allocating memory in the heap
    n->data=data;
    n->left=NULL;  //Setting the right and left children to null
    n->right=NULL;
    return n;   //Finally returning the created node
}
void preOrderTraversal(struct node*root)
{
    if(root!=NULL)
    {
        printf("%d ",root->data);
        preOrderTraversal(root->left);
        preOrderTraversal(root->right);
    }
}
void postOrderTraversal(struct node*root)
{
    if(root==NULL){
        return;
    }
    else{
        postOrderTraversal(root->left);
        postOrderTraversal(root->right);
        printf("%d ",root->data);
    }
}
void inOrder(struct node*root)
{
    if(root==NULL){
        return;
    }
    else{
        inOrder(root->left);
        printf("%d ",root->data);
        inOrder(root->right);
    }
}
int main(){
//     // Constructing the root node
//     struct node*p=(struct node*) malloc(sizeof(struct node));
//      p->data=2;
//     p->left=NULL;
//     p->right=NULL;
    
//     // Constructing the first node
//     struct node*p1=(struct node*) malloc(sizeof(struct node));
//     p1->data=1;
//     p1->left=NULL;
//     p1->right=NULL;

// // constructing the second node
//     struct node*p2=(struct node*) malloc(sizeof(struct node));
//      p2->data=3;
//     p2->left=NULL;
//     p2->right=NULL;

// // Linking the root node with left and right children
//     p->left=p1;
//     p->right=p2;

// Constructing the root node --Using function(recommended)
struct node*p=CreatingAnode(4);
struct node*p1=CreatingAnode(1);
struct node*p2=CreatingAnode(6);
struct node*p3=CreatingAnode(5);
struct node*p4=CreatingAnode(2);
// Finally the tree look like this
//          4
//         / \
//        1   6
//       / \
//      5   2

// Linking the root node with left and right children 
    p->left=p1;
    p->right=p2;

    p1->right=p4;
    p1->left=p3;
    preOrderTraversal(p);
    printf("\n");
    postOrderTraversal(p);
    printf("\n");
    inOrder(p);  

    
    return 0; 
}