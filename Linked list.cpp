#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *ptr;
};

void linkedListTraversal(struct node *next){
	while(next!=NULL)
	{
		printf("%d --> ",next -> data);
	    next=next -> ptr;
	}

}
int main(){
	struct node *head;
	struct node *second;
	struct node *third;
	
	//Allocate memories for node in the linked list in Heap
	head=(struct node *)malloc(sizeof(struct node));
	second=(struct node *)malloc(sizeof(struct node));
	third=(struct node *)malloc(sizeof(struct node));
	
	//Linking first and second nodes
	head -> data = 7;
	head -> ptr = second;
	
	//Linking second third nodes
	second -> data = 9;
	second -> ptr = third;
	
	//Linking third and last node
	third -> data = 15;
	third -> ptr = NULL;
	linkedListTraversal(head);
	
	return 0;
}