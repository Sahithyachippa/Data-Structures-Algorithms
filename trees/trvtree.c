#include<stdio.h>
#include<stdlib.h>
struct node{
int key;
struct node *lch;
struct node *rch;
};
struct node *createnode(int val)
{
struct node *nn;
nn=malloc(sizeof(struct node));
nn->key=val;
nn->lch=NULL;
nn->rch=NULL;
return nn;
}
struct node *insert(struct node *root,int key)
{
if(root==NULL)
return createnode(key);
if(key<root->key)
root->lch=insert(root->lch,key);
else if(key>root->key)
root->rch=insert(root->rch,key);
//return root;
return root;
}
void display(struct node *root)
{
if(root!=NULL)
{
display(root->lch);
printf("%d\n",root->key);
display(root->rch);
}
}
void preorder(struct node *root)
{
if(root==NULL)
return;
printf("%d\n",root->key);
preorder(root->lch);
preorder(root->rch);
}
void postorder(struct node *root)
{
if(root==NULL)
return;

postorder(root->lch);
postorder(root->rch);
printf("%d\n",root->key);
}
void inorder(struct node *root)
{
if(root==NULL)
return;

inorder(root->lch);
printf("%d\n",root->key);
inorder(root->rch);
}
int main()
{
struct node *root=NULL;
root=insert(root,50);
insert(root,10);
insert(root,5);
insert(root,12);
insert(root,8);
insert(root,11);
display(root);
printf("pre order is:\n");
preorder(root); 
printf("post order is:\n");
postorder(root); 
printf("in order is:\n");
inorder(root); 
return 0;
}
