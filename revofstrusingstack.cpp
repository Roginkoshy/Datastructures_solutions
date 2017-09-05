#include<stdio.h>
#include<stdlib.h>
#include<string.h>
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
int pop()
{
	struct node* temp=head;
	head=temp->next;
	return temp->data;
}
void top()
{
	printf("%d\n",head->data);
}
int main()
{
	head=NULL;
	printf("Enter a string\n");
    char s[100];
	scanf("%s",s);
	int n=strlen(s);
    int i=0;
	while(i!=n)
	{
		push(s[i]);
		i++;
	}
    i=0;
	while(i!=n)
	{
		s[i]=pop();
		i++;
	}	
	printf("The reverse of the string is %s",s);
    return 0;	
}
