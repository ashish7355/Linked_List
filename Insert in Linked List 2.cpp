//Insert in Between
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
		ptr=ptr->next;
	}
}

struct node *insert_at_index(struct node *head,int data,int index){
	struct node *neo=(struct node *)malloc(sizeof(struct node));
	struct node *start=head;
	int i=0;
	
	while(i!=index-1){
		start = start -> next;
		i++;
	}
	neo -> data = data;
	neo -> next = start -> next;
	start -> next = neo;
	return head;
}
int main(){
	
	struct node *head=(struct node*)malloc(sizeof(struct node));
	struct node *second=(struct node*)malloc(sizeof(struct node));
	struct node *third=(struct node*)malloc(sizeof(struct node));
	
	head -> data = 7;
	head -> next = second;
	
	second -> data = 19;
	second -> next = third;
	
	third -> data = 67;
	third -> next = NULL;
	
	linkedListTraversal(head);
	printf("\n");
	head=insert_at_index(head,56,2);
	linkedListTraversal(head);
	return 0;
}