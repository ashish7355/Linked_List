#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node * next;
};

void insertNode(struct node *head, int data){
    int count=0,i;
    struct node * neo = (struct node *)malloc(sizeof(struct node));
    neo->data=data;
    struct node * start = (struct node *)malloc(sizeof(struct node));
    start=head;
    struct node * p = (struct node *)malloc(sizeof(struct node));
    p=head; 
    while(start->data < data){
        start=start->next;
        count++;
    }
    for(i=0;i<count-1;i++){
        p=p->next;
    }
    p->next=neo;
    neo->next=start;
}

int main(){
    struct node * start = (struct node *)malloc(sizeof(struct node));
    struct node *head;
    struct node * first = (struct node *)malloc(sizeof(struct node));
    struct node * second = (struct node *)malloc(sizeof(struct node));
    struct node * third = (struct node *)malloc(sizeof(struct node));
    head= first;

    first->next=second;
    first->data=100;

    second->next=third;
    second->data=200;

    third->next=NULL;
    third->data=600;
    
    printf("Before Insertion");printf("\n");


    start=head;
    while(start!=NULL){
        printf("%d --> ",start->data);
        start=start->next;
    }
    printf("\n");
    printf("After Insertion");
    printf("\n");

    insertNode(head, 120);

    start=head;
    while(start!=NULL){
        printf("%d --> ",start->data);
        start=start->next;
    }
}
