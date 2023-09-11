#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
int Top=-1;
int stack[SIZE];
// implementig Stack
void push();
void pop();
void show();
int main(){
	int choice;
	printf(" 1.Push \n 2.Pop \n 3.Show \n 4.Exit");
	while(1){
		printf("\n Enter choice : ");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				show();
				break;
			case 4:
				exit(1);
				break;
			default :
				printf("Invalid Choice");
				
		}
	}
	return 0;
}
void push(){
	if(Top == SIZE-1){
		printf("Overflow");
	}
	else{
		int ele;
		printf("\n Enter element to add: ");
		scanf("%d",&ele);
		Top=Top+1;
		stack[Top]=ele;
		printf(" %d added to the stack",ele);
	}
}
void pop(){
	if(Top==-1){
		printf("%d ",Top);
		printf("Underflow");
	}
	else{
		Top=Top-1;
		printf(" %d popped",stack[Top+1]);
	}
}
void show(){
	while(Top>=0){
		printf(" %d ",stack[Top]);
		Top-=1;
	}
	
}

