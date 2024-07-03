#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	int priority;
	struct node *next;
};
struct node *front=NULL;			/* Queue is empty*/
struct node *createNode(int element, int priority){
	struct node *nn;
	nn = (struct node *) malloc(sizeof(struct node));
	printf("Addr: %p", (void *)nn);
	nn->data = element;
	nn->priority = priority;
	nn->next = NULL;
	return nn;
}

void enqp(int e, int p){
	struct node *nn, *temp= front;
	nn = createNode(e, p);
	if(front==NULL || p <  front->priority){		/*When Queue is empty*/
        nn->next = front;
		front=nn;
    }
	else{					/*When Queue is not empty*/
        while(temp->next != NULL && temp->next->priority<= p)
            temp = temp->next;
		nn->next=temp->next;
		temp->next = nn;	/*now newNode will be rear*/
	}
}

void deqp(){
	struct node *temp=front;
	if(front == NULL)			/*When Queue is empty*/
		printf("Queue underflow\n");
	else{					/*When Queue is not empty*/
		front=front->next;
		free(temp);
	}
}

void display(){
	struct node *temp = front;
	if(temp==NULL){				/*When Queue is empty*/
        	printf("\nQueue is empty \n");
        	return;
	}
	while(temp != NULL){			/*When Queue is not empty*/
		printf("\n%d\t%d",temp->data, temp->priority);
		temp = temp->next;
	}
	printf("\n\n");
}

int main(){
	int elem;
	enqp(10, 1);
    enqp(30, 3);
    enqp(40, 5);
    enqp(50, 7);
    enqp(20, 6);
	//enqp(20, 4);
	display();
	deqp();
    deqp();
 	display();
	return 0;
}
