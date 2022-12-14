//Insert at first
#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
};

void linkedListTraversal(struct node *ptr){
	while(ptr!=NULL)
	{
		printf("%d --> ",ptr -> data);
	    ptr=ptr -> next;
	}

}

struct node *insert_at_beg(struct node *head,int data){
	struct node *ptr=(struct node *)malloc(sizeof(struct node));
	ptr -> next = head;
	ptr -> data = data;
	return ptr;
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
	head -> next = second;
	
	//Linking second third nodes
	second -> data = 9;
	second -> next = third;
	
	//Linking third and last node
	third -> data = 15;
	third -> next = NULL;
	linkedListTraversal(head);
	printf("\n");
	head=insert_at_beg(head,56);
	linkedListTraversal(head);
	return 0;
}