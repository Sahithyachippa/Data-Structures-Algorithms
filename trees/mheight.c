#include<stdio.h>
#include<stdlib.h>
struct node{
int key;
struct node *lch;
struct node *rch;
};
struct node *root=NULL;
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
root=createnode(key);

else if(key<root->key)
root->lch=insert(root->lch,key);

else if(key>root->key)
root->rch=insert(root->rch,key);




return root;

}

int maxDepth(struct node* node)
{
	if (node == NULL)
		return 0;
	else {

		int lDepth = maxDepth(node->lch);
		int rDepth = maxDepth(node->rch);
		if (lDepth > rDepth)
			return (lDepth + 1);
		else
			return (rDepth + 1);
	}
}

/*void display(struct node *root)
{
struct node *temp;
temp=root;
if(root==NULL)
{
printf("NO TREE\n");
}
else
{
while(root!=NULL)
{
printf("the left side elements are\n");
printf("%d\n",root->key);
root=root->lch;
}

while(temp!=NULL)
{
printf("the right side elements are\n");
printf("%d\n",temp->key);
temp=temp->rch;
}

}




}*/

int main()
{
//struct node *root=NULL;
root=insert(root,8);

insert(root,3);
insert(root,10);
insert(root,6);
insert(root,13);
//insert(root,4);
//insert(root,7);
//display(root);
printf("Height of tree is %d", maxDepth(root));

}






//HEIGHT(DEPTH--NORMAL HEIGHT+1) OF BST IMPLEMENTED PERFECTLY


