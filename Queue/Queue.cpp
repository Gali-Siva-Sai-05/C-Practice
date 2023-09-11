#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
int front=-1;
int rear=-1;
int queue[SIZE];

void enqueue();
void dequeue();
void show();

int main(){
	int choice;
	printf("1.Enqueue \n2.Dequeue\n3.show\n4.Exit");
	while(1){
		printf("\nEnter your choice : ");
		scanf("%d",&choice);
		switch(choice){
		case 1:
			enqueue();
			break;
		case 2:
			dequeue();
			break;
		case 3:
			show();
			break;
		case 4:
			exit(1);
		default :
			printf("Invalid Choice");
		}
	}
	
}

void enqueue(){
	if(rear==SIZE-1 || front>rear){
		printf("\noverflow");
	}
	else if(rear == -1 && front == -1){
		int ele;
		printf("\nEnter elenment to enqueue : ");
		scanf("%d",&ele);
		front=front+1;
		rear=rear+1;
		queue[rear]=ele;
		printf("\nAdded %d ",queue[rear]);
	}
	else{
		int ele;
		printf("\nEnter elenment to enqueue : ");
		scanf("%d",&ele);
		rear=rear+1;
		queue[rear]=ele;
		printf("\nAdded %d ",queue[rear]);
	}
}

void dequeue(){
	if(front==-1 || front >= SIZE || front>rear){
		printf("\nUnderflow");
		rear=-1;
		front=-1;
	}
	else{
		printf("\n%d Removed",queue[front]);
		front=front+1;
	}
}
void show(){
	for(int i=front;i<=rear;i++){
		printf(" %d ",queue[i]);
	}
//	printf("%d front",front);
//	printf("%d rear ",rear);
}
