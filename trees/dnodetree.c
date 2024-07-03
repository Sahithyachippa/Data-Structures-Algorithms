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
struct node *minvalnode(struct node *node)
{
struct node *c=node;
while(c&&c->lch!=NULL)
c=c->lch;
return c;
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

struct node *delnode(struct node *root,int key)
{
if(root==NULL)
return root;
if(key<root->key)
root->lch=delnode(root->lch,key);
else if(key>root->key)
root->rch=delnode(root->rch,key);
else
{
if(root->lch==NULL)
{
struct node *t=root->lch;
free(root);
return t;
}
else if(root->rch==NULL)
{
struct node *t=root->rch;
free(root);
return t;
}
struct node *t=minvalnode(root->rch);
root->key=t->key;
root->rch=delnode(root->rch,t->key);
}
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

int main()
{
struct node *root=NULL;
root=insert(root,30);
insert(root,20);
insert(root,40);
insert(root,70);
insert(root,74);
display(root);
printf("\n");
root=delnode(root,30);
display(root);
printf("\n");
root=delnode(root,74);
display(root);
return 0;
}
