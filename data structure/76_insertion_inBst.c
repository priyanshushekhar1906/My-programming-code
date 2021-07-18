#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*left;
    struct node*right;
};
struct node* createNode(int data){
    struct node*n=(struct node*) malloc(sizeof(struct node));
    n->data=data;
    n->left=NULL;
    n->right=NULL;
    return n;
}
void insertinBst(struct node*root,int key)
{
    struct node*prev=NULL;
    while(root!=NULL)
    {
        prev=root;
        if(root->data==key)
        {
            printf("Cannot insert %d Already in Bst",key);
            return;
        }
     
        else if(root->data>key)
        {
            root=root->left;
        }
        else{
            root=root->right;
        }
    }
    struct node*new=createNode(key);
    if(prev->data>key){
        prev->left=new;
    }
    else{
        prev->right=new;
    }




}
int main(){
    struct node*p=createNode(10);
    struct node*p1=createNode(8);
    struct node*p2=createNode(15);
    struct node*p3=createNode(6);
    struct node*p4=createNode(9);
    struct node*p5=createNode(13);
    struct node*p6=createNode(17);

    p->left=p1;
    p->right=p2;

    p1->left=p3;
    p1->right=p4;

    p2->left=p5;
    p2->right=p6;

    insertinBst(p,14);
    printf("%d ",p->right->left->right->data);

    
    return 0; 
}