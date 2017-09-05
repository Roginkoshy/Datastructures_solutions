#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
};
struct node* head;
void push(int x)
{
	struct node* temp=(struct node*)malloc(sizeof(struct node));
	temp->data=x;
	temp->next=head;
	head=temp;
}
void print()
{
	struct node* temp=head;
	while(temp!=NULL)
	{
		printf("%d ",temp->data);
     temp=temp->next;
	}
	printf("\n");
}
void pop()
{
	struct node* temp=head;
	printf("funny value %d \n",temp->data);
	head=temp->next;
}
void top()
{
	printf("%d\n",head->data);
}
int main()
{
	head=NULL;
	push(15);
	print();
	push(12);
	print();
	push(241); 
	print();
	push(53);
	print();
	pop();
	print();
	printf("The top element is \n");
	top();
	push(242);
	print();
    return 0;	
}
