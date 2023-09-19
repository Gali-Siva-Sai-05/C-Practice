#include<stdio.h>
#include<stdlib.h>
int arr[10]={11,2,33,4,23,6,28,7,0,9};
int LinearSearch(int ele1);
int main(){
	int ele,choice;
	printf("1.Search an element\n2.Exit");
	
	while(1){
		printf("\nEnter choice : ");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("Enter an element to search : ");
				scanf("%d",&ele);
				if(LinearSearch(ele)){
					printf("Element found");
				}
				else{
					printf("No such element found");
				}
				break;
			case 2:
				exit(1);
			default:
				printf("Invalid choice");
				break;
				
				
		}
	    
	}
	
}

int LinearSearch(int ele1){
	for(int i=0;i<=9;i++){
		if(ele1==arr[i]){
			return 1;
		}
	}
	return 0;
}
