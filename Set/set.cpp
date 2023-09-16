#include<stdio.h>
#include<stdlib.h>
#define SIZE 6
int front=-1,rear=-1;
int set[SIZE];
void append();
void pop();
void show();
int checkAvail();
int main(){
	printf("1.Append \n2.Pop \n3.show");
	int choice;
	while(1){
		printf("\nEnter Choice : ");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				append();
				break;
			case 2:
				pop();
				break;
			case 3:
				show();
				break;
			default :
				printf("Invalid Choice");
				break;
		}
	}
	return 0;
}
int checkAvail(int ele){
	int i=front;
	int j=rear;
	while(i<=j){
		if(i==0 && j==0 && set[i]==ele){
			return 1;
		}
		else if(set[i]==ele){
			return 1;
		}
		else{
			return 0;
		}
		i-=1;
		printf("\n i= %d",i);
	}
	return 0;
}
void append(){
	int ele;
	printf("\nEnter element : ");
	scanf("%d",&ele);
	if(rear == -1 && front == -1){
		rear+=1;
		front+=1;
		set[rear]=ele;
		printf("%d Appended",ele);
	}
	else if(rear>SIZE-1 || front>rear){
		printf("\nOver Flow");
	}
	else{
		if(checkAvail(ele)){
			printf("Element already present");
		}
		else{
			rear+=1;
			set[rear]=ele;
			printf("%d Appended\n",ele);
		}
	}
}

void pop(){
	if(front == -1){
		printf("Under Flow\n");
		printf("\n %d %d ",front,rear);
	}
	else if(front>rear){
		rear=-1,front=-1;
		printf("Under Flow\n");
	}
	else{
		if(front==rear){
			printf("%d Popped\n",set[rear]);
			rear=-1;
			front=-1;
		}
		else{
		rear-=1;
		printf("%d Popped\n",set[rear+1]);
		}
	}
}
void show(){
	if(rear==-1 && front==-1){
		printf("No Element Present");
	}
	else{
		for(int i=front;i<=rear;i++){
		printf("%d ",set[i]);
		}
	}
	
}

