#include<stdio.h>
#include<stdlib.h>

struct node{
	int info;
	struct node *next;
};

struct node *insert_at_beg(struct node *head,int info){
	struct node *neo=(struct node *)malloc(sizeof(struct node));
	printf("Enter the info of the neo :");
	scanf("%d",&neo -> info);
	neo -> next = head;
	return neo;
}
void linkedListTraversal(struct node *ptr){
	while(ptr!=NULL)
	{
		printf("%d --> ",ptr -> info);
	    ptr=ptr -> next;
	}

}
struct node *insert_at_end(struct node *head,int info){
	struct node *start=(struct node *)malloc(sizeof(struct node));
	struct node *neo=(struct node *)malloc(sizeof(struct node));
	printf("Enter the info of the neo :");
	scanf("%d",&neo -> info);
	start=head;
	do{
		start = start -> next;
	}while(start -> next != NULL);
	neo -> next = NULL;
	start -> next = neo;
	}

int main(){
	struct node *head;
	struct node *first;
	struct node *second;
	struct node *third;
	struct node *fourth;
	
	head=(struct node *)malloc(sizeof(struct node));
	first=(struct node *)malloc(sizeof(struct node));
	second=(struct node *)malloc(sizeof(struct node));
	third=(struct node *)malloc(sizeof(struct node));
	fourth=(struct node *)malloc(sizeof(struct node));
	struct node *start = (struct node *)malloc(sizeof(struct node));
	
	head -> info = 100;
	head -> next = first;
	start = head;
	
	first -> info = 200;
	first -> next = second;
	
	second -> info = 300;
	second -> next = third;
	
	third -> info = 400;
	third -> next = fourth;
	
	fourth -> info = 500;
	fourth -> next = NULL;
	
	
	linkedListTraversal(head);
	printf("\n");
	head=insert_at_end(head,56);
	linkedListTraversal(head);
	return 0;
}