#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
    Node(int val){
        data = val;
        next = NULL;
    }
};void display(Node *head){
    while(head!=NULL){
        cout<<head->data<<"\t";
        head=head->next;
    }
    cout<<endl;
}
node *insert_head(node *head,int 4)
{
node *nn=new node(val);
nn->next=head;
head=nn;
return head;}
node *insert_tail(node *head, int 3)
{
node *nn=new node(val);
node *temp=head;
while(temp->head!=NULL)
temp=temp->next;
temp->next=nn;
nn->next-NULL;
return head;
}
int main(){
    /*Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);*/
    Node *head = NULL;
    head = insert_tail(head, 1);
    head = insert_tail(head, 2);
    head = insert_tail(head, 3);
    head = insert_head(head, 4);
    display(head);}
    /*head = insert_after(head, 2, 7);
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
