#include<stdio.h>
#include<string.h>
#include<stack>
using namespace std;
void reverse(char *c,int n)
{ 
    stack<char> s;
	int i;
	for(i=0;i<n;i++)
	{
		s.push(c[i]);
	}
	
	
	for(i=0;i<n;i++)
	{
		c[i]=s.top();
		s.pop();
	}
	printf("Reverse string %s\n",c);
}

int main()
{
	char c[1000];
	printf("Enter a string\n");
	scanf("%s",c);
	reverse(c,strlen(c));
	
return 0;	
}
