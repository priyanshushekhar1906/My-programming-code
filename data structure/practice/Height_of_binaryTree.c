#include<stdio.h>
#include<stdlib.h>
#include <math.h>
struct node{
    int data;
    struct node*left,*right;
};
struct node*CreteNODES(){
    struct node*newNode=(struct node*) malloc(sizeof(struct node));
    if(newNode!=NULL){
    printf("Enter the data of your node\n");
    int x;
    scanf("%d",&x);
    if(x==-1){
        return NULL;
    }
    newNode->data=x;
    printf("Enter the left node  of your %d\n",x);
    newNode->left=CreteNODES();
    printf("Enter the right node  of your %d\n",x);
    newNode->right=CreteNODES();
    }
    return newNode;
}
void inOrder(struct node*root)
{
    if(root!=NULL)
    {
        inOrder(root->left);
        printf("%d ",root->data);
        inOrder(root->right);
    }
    return;
}
int HeightOfBT(struct node*root){
    int lHeight;
    int rHeight;
    if(root==NULL)
    {
        return -1;
    }
    lHeight=HeightOfBT(root->left);
    rHeight=HeightOfBT(root->right);


    return fmax(lHeight,rHeight)+1;

}
int main(){
    struct node*root=NULL;
    root=CreteNODES();
    // inOrder(root);
   int height= HeightOfBT(root);
   printf("Height is %d\n",height);
    
    return 0; 
}