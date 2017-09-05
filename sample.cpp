#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
};
struct node* head=NULL;
void insert(int x)
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
int main()
{
	insert(4);
	print();
insert(2);
	print();
insert(34);
	print();
insert(56);
	print();
insert(58);
	print();
insert(67);
	print();
insert(87);
	print();
insert(78);
	print();
	
	return 0;
}
