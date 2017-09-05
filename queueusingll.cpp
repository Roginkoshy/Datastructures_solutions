#include<stdio.h>
#include<stdlib.h>
struct node{
	int data; 
	struct node* next;
};
struct node* head=NULL;
struct node* tail=NULL;
void enqueue(int x)
{
	struct node* temp=(struct node*)malloc(sizeof(struct node));
	temp->data=x;
	temp->next=NULL;
	if(head==NULL&&tail==NULL)
	{
		head=temp;
		tail=temp;
		return;
	}
	tail->next=temp;
	tail=temp;
}
void dequeue()
{
	struct node* temp=head;
	if(head==NULL)
	{
		printf("Queue empty\n");
		return;
	}
	if(head==tail)
	{
	head=NULL;
	tail=NULL;
	}
	else
	head=head->next;
   free(temp);
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
int main()
{ 
    enqueue(54);
    print();
	enqueue(23);
	print();
	dequeue();
	print();
	enqueue(24);
	print();
	enqueue(125);
	print();
	enqueue(54);
	print();
	enqueue(35);
	print();
	enqueue(64);
	print();
	dequeue();
	print();
	enqueue(24);
	print();
	return 0;
}
