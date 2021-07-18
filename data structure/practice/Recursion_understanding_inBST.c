#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*right;
    struct node*left;
};
struct node*CreateNODE(){
    struct node*newNode=(struct node*) malloc(sizeof(struct node));
    printf("Enter the data you want to insert in a node\n");
    int x;
    scanf("%d",&x);
    if(x==-1)
    {
        return NULL;
    }
    newNode->data=x;
    printf("Enter the left node of %d\n",x);
    newNode->left=CreateNODE();
    printf("Enter the right node of %d\n",x);
    newNode->right=CreateNODE();
    return newNode;
}
void InOrder(struct node*root){
    if(root!=NULL){
        InOrder(root->left);
        printf("%d ",root->data);
        InOrder(root->right);
    }
    return;

}

int main(){
    struct node*root=NULL;
    root=CreateNODE();
    InOrder(root);

    return 0;
}