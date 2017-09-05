#include<stdio.h>
#include<stdlib.h>
#include<stack>
using namespace std;
struct node{
	int data;
	struct node* next;
};
struct node* head;
void pus(int x)
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
void reverse()
{
	stack<struct node*> s;
	struct node* temp=head;
	while(temp!=NULL)
	{
		s.push(temp);
		temp=temp->next;
	}
	struct node* temp3=s.top();
	printf("%d\n",temp3->data);
	struct node* temp2=s.top();
	head=temp2;
	s.pop();
  while(!(s.empty()))
  {
	temp2->next=s.top();
	s.pop();
	temp2=temp2->next;
  }
  temp2->next=NULL;
}
int main()
{
	head=NULL;
	pus(60);
	print();
	pus(232);
	print();
	pus(242);
	print();
	pus(209);
	print();
	reverse();
	print();
   return 0;
}
