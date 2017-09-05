#include<stdio.h>
int a[10];
int head=-1,tail=-1;
bool Isempty()
{
	if(head==-1&&tail==-1)
	{
		return true;
	}
	return false;
}
bool Isfull()
{
	if((tail+1)%10==head)
	return true;
	return false;
}
void enqueue(int x)
{
	if(Isfull())
	{
		printf("Queue already full\n");
		return;
	}
	if(Isempty())
	{
		head=0;
		tail=0;
	}
	else
	{
		tail=(tail+1)%10;
	}
	a[tail]=x;
}
void dequeue()
{
	if(Isempty())
	{
		printf("Queue already empty\n");
		return;
	}
	else if(head==tail)
	{
		head=-1;
		tail=-1;
	}
	else
	{
		head=(head+1)%10;
	}
	
	
}
void print()
{
 int i;
 int count=(tail+10-head)%10+1;
 for(int i=0;i<count;i++)
 {
 	int index=(head+i)%10;
 printf("%d ",a[index]);
}
 printf("\n");
}
int main()
{
	if(Isempty())
	printf("Queue Empty\n");
	enqueue(4);
	print();
	enqueue(13);
	print();
	if(Isempty())
	printf("Queue Empty\n");
	enqueue(82);
	print();
	enqueue(24);
	print();
	dequeue();
	print();
	enqueue(234);
	print();
	if(Isfull())
    printf("Queue Full\n");
	enqueue(678);
	print();
	enqueue(65);
	print();
	dequeue();
	print();
	enqueue(45);
	print();
	enqueue(9);
	print();
	enqueue(1);
	print();
	enqueue(0);
	print();
	dequeue();
	print();
	enqueue(87);
	print();
	if(Isfull())
    printf("Queue Full\n");
    enqueue(76);
    print();
	return 0;
}
