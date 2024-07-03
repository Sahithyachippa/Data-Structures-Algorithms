#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *createNode(int val){
	struct node *nn;
	nn = (struct node *)malloc(sizeof(struct node));
	nn->data = val;
	nn->next = NULL;
	return nn;
}

void display(struct node *head){
    while(head!=NULL){
        printf("%d\t", head->data);
        head=head->next;
    }
    printf("\n\n");
}

struct node *insert_tail(struct node *head, int val){
    // YOUR CODE HERE
    
        
 struct node *nn,*temp;
 nn=createNode(val);
 if(head==NULL)
 { 
 head=nn;
 }
 else
 {
 temp=head;
 while(temp->next!=NULL)
 temp=temp->next;
 
 temp->next=nn;
 }
    return head;
 }


struct node *insert_head(struct node *head, int val)
{
    // YOUR CODE HERE
    
 struct node *nn;
 nn=createNode(val);
 if(head==NULL)
 { 
 head=nn;
 }
 else
 {
 nn->next=head;
 head=nn;
 }
 return head;
 
        
}

struct node *insert_pos(struct node *head, int pos, int x)
{
    // YOUR CODE HERE
    struct node *nn,*temp=head;
    nn=createNode(x);
    int i;
    for(i=0;i<pos-2;i++)
    {
        temp=temp->next;
    }
    nn->next=temp->next;
     temp->next=nn;
    return head;
}

struct node *delete_head(struct node *head)
{
    // YOUR CODE HERE
    struct node *temp;
    temp=head;
    head=temp->next;
    free(temp);
    return head;
}

struct node *delete_tail(struct node *head)
{
    // YOUR CODE HERE
    struct node *temp=head,*prev;
    while(temp->next!=0)
    {
     prev=temp;
        temp=temp->next;
        }
    prev->next=NULL;
    free(temp);
    return head;
}

// search Element
int search(struct node *head, int val){
    // YOUR CODE HERE
    int flag=0;
    struct node *temp;
    temp=head;
    while(temp!=0)
    {
        if(temp->data==val)
        {
            flag=1;
            break;
        }
        else
            temp=temp->next;
    }
    if(flag==1)
         printf("\n entered element %d found",val);
    else
         printf("\n not found\n");
    return 0;
}

int count(struct node *head){
    // YOUR CODE HERE
    struct node *temp=head;
    int flag=0;
    while(temp!=0)
    {
        flag=flag+1;
        temp=temp->next;
        
    }
    printf("\n %d is resultant count",flag);
    return 0;
}

// Insert After
struct node *insert_after(struct node *head, int data, int val){
     // YOUR CODE HERE
     struct node *nn,*prev,*temp=head;
    nn=createNode(val);
    while(temp->data!=data)
    {
        temp=temp->next;
    }
    nn->next=temp->next;
    temp->next=nn;
    return head;
}

// Insert Before
struct node *insert_before(struct node *head, int data, int val){
    // YOUR CODE HERE
    struct node *nn,*prev,*temp=head;
    nn=createNode(val);
    while(temp->data!=data)
    {
        prev=temp;
        temp=temp->next;
    }
    nn->next=prev->next;
    prev->next=nn;
    return head;
}

// delete element
struct node *delete_element(struct node *head, int ele){
    // YOUR CODE HERE
    struct node *prev,*temp;
    temp=head;
    while(temp->data!=ele)
    {
        prev=temp;
        temp=temp->next;
    }
    head=temp->next;
    free(temp);
    
    return head;

    
}

int main(){
    /*struct Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);*/
    struct node *head = NULL;
    head = insert_tail(head, 1);
    head = insert_tail(head, 2);
    head = insert_tail(head, 3);
    head = insert_head(head, 4);
    display(head);
    head = insert_after(head, 2, 7);
    display(head);
    head = insert_before(head, 2, 9);
    display(head);
    head = insert_pos(head, 3, 6);
    display(head);
    head = delete_head(head);
    display(head);
    head = delete_tail(head);
    display(head);
    head = delete_element(head, 1);
    display(head);
    return 0;
}


 
