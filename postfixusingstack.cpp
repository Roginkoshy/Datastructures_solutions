#include<stdio.h>
#include<stdlib.h>
#include<stack>
#include<string.h>
using namespace std;
int main()
{
	stack<char> s;
	int i;
	char c[10];
	int n=strlen(c);
	printf("Character array\n");
	scanf("%s",c);
	for(i=0;i<n;i++)
	{
		
	if(c[i]>=48&&c[i]<=57)
	{
		s.push(c[i]);
	}
	else
	{
		char w=s.top();
	    int op2=w-48;
        s.pop();       
		w=s.top();  
        int op1=w-48;
		s.pop();
		if(c[i]=='*')
		{
			int r=op2*op1;
		s.push(r+48);
		}
		if(c[i]=='+')
		{
	    int r=op2+op1;	
		s.push(r+48);
	}
		if(c[i]=='-')
		{
		int r=op1-op2;
		s.push(r+48);
		}
		if(c[i]=='/')
		{
		int r=op1/op2;
		s.push(r+48);
	}
	}
   }
   printf("%d\n",atoi(s.top()));
   return 0;
}
