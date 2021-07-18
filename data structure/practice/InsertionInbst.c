#include<stdio.h>
#include<stdlib.h>
#include<math.h>
struct node{
    int data;
    struct node*left,*right;
};
struct node* CreateAnode(int data)
{
    struct node*newnode=(struct node*) malloc(sizeof(struct node));
    newnode->data=data;
    newnode->left=NULL;
    newnode->right=NULL;
}
void InorderTraversal(struct node*root)
{
    if(root!=NULL)
    {
        InorderTraversal(root->left);
        printf("%d ",root->data);
        InorderTraversal(root->right);
    }
    else{
        return;
    }
}
void InsertionINBst(struct node*root)
{
    printf("Insert Your element in bst\n");
    int x;
    scanf("%d",&x);
    if(root==NULL)
    {
        CreateAnode(x);
        return;

    }
    else{
        struct node*prev=NULL;
        while(root!=NULL)
        {
            prev=root;
             if(root->data==x)
             {
                 printf("Cannot insert %d element already in bst\n",x);
                 return;
             }
             else if(root->data>x)
             {
                 root=root->left;
             }
             else{
                 root=root->right;
             }
        }
        if(prev->data>x)
        {
            prev->left=CreateAnode(x);
        }
        else{
            prev->right=CreateAnode(x);
        }
    }
}
int HeightofBst(struct node*root)
{
    int lHeight;
    int rHeight;
    if(root==NULL)
    {
        return -1;
    }
    lHeight=HeightofBst(root->left);
    rHeight=HeightofBst(root->right);


    return fmax(lHeight,rHeight)+1;

}
int main(){
    struct node*p=CreateAnode(9);
    struct node*p1=CreateAnode(7);
    struct node*p2=CreateAnode(14);
    struct node*p3=CreateAnode(3);
    struct node*p4=CreateAnode(8);
    struct node*p5=CreateAnode(12);
    
    p->left=p1;
    p->right=p2;

    p1->left=p3;
    p1->right=p4;

    p2->left=p5;

    InorderTraversal(p);
    InsertionINBst(p);
    InorderTraversal(p);

      int height=HeightofBst(p5);
      printf("Height is %d\n",height);
    return 0; 
}