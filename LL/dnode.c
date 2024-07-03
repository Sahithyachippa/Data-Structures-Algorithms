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
struct node *deletenode(struct node *root,int key)
{
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

int main()
{
struct node *root=NULL;
root=insert(root,30);
insert(root,20);
insert(root,40);
insert(root,70);
insert(root,34);
display(root);
root=deletenode(root,30);
display(root);
return 0;
}
