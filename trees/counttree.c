#include<stdio.h>
#include<stdlib.h>
struct node
{
int key;
struct node *lch,*rch;
};
struct node *createnode(int data)
{
struct node *nn=malloc(sizeof(struct node));
nn->key=data;
nn->lch=NULL;
nn->rch=NULL;
return nn;
}
struct node *insert(struct node *root,int key)
{
if(root==NULL)
return createnode(key);
else if(key<root->key)
root->lch=insert(root->lch,key);
else if(key>root->key)
root->rch=insert(root->rch,key);
return root;
}
void inorder(struct node *root)
{
if(root!=NULL)
{
inorder(root->lch);
printf("%d\t",root->key);
inorder(root->rch);
}
}
void preorder(struct node *root)
{
if(root!=NULL)
{
printf("%d\t",root->key);
preorder(root->lch);
preorder(root->rch);
}
}
void postorder(struct node *root)
{
if(root!=NULL)
{
postorder(root->lch);
postorder(root->rch);
printf("%d\t",root->key);
}
}
int count=0;
struct node *countnodes(struct node*root)
{

if(root!=NULL)
{
countnodes(root->lch);
count++;
countnodes(root->rch);
}
return count;
}
int main()
{
struct node *root=NULL;
root=insert(root,50);
insert(root,60);
insert(root,20);
insert(root,10);
insert(root,40);
insert(root,60);
printf("inorder is:\n");
inorder(root);
printf("\n");
printf("preorder is:\n");
preorder(root);
printf("\n");
printf("postorder is:\n");
postorder(root);
printf("\n");
printf("no. of node in the given tree are:%d",countnodes(root));
}


