#include<stdio.h>
#include<stdlib.h>
#include<math.h>
struct Tree{
    int data;
    struct Tree*left,*right;
};
struct Tree* CreateTree(){
    struct Tree*newnode=(struct Tree*) malloc(sizeof(struct Tree));
    printf("Enter the data You want to insert\n");
    int x;
    scanf("%d",&x);
    if(x==-1){
        return NULL;
    }
    newnode->data=x;
    printf("Enter data for left of %d\n",x);
    newnode->left=CreateTree();
    printf("Enter data for right of %d\n",x);
    newnode->right=CreateTree();
    return newnode;
    
}
int HeightofBt(struct Tree*root){
    if(root==NULL){
        return -1;
    }
    else{
        int lheight=HeightofBt(root->left);
        int rheight=HeightofBt(root->right);
        return fmax(lheight,rheight)+1;
    }
}
void printLevel(struct Tree*root,int level)
  {
      if(level==0)
      {
          printf("%d ",root->data);
      }
      else
      {
          printLevel(root->left,level-1);
          printLevel(root->right,level-1);

      }
  }
void levelOrderTravesal(struct Tree*root,int height){
for(int i=0;i<=height;i++)
{
    printLevel(root,i);
}
}
int main(){
    struct Tree*root=NULL;
    root=CreateTree();
    int height=HeightofBt(root);
    levelOrderTravesal(root,height);
    printf("\n height is %d\n",height);

    
    return 0; 
}