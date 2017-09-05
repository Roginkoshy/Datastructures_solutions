#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stack>
using namespace std;
bool check(char *c,int n)
{   
    stack<char> s;
	int i=0;
	for(i=0;i<n;i++)
	{
      if(c[i]=='('||c[i]=='['||c[i]=='{')
      {
      	s.push(c[i]);
	  }
	  else
	  {
	  	if(s.empty())
	  	return false;
	    if(s.top()=='('&&c[i]==')')
	    s.pop();
	    else if(s.top()=='{'&&c[i]=='}')
	    s.pop();
	    else if(s.top()=='['&&c[i]==']')
	    s.pop();
	    else
	    return false;
	  }
	}
	if(s.empty())
	return true;
	
	return false;
}
int main()
{
	char c[100];
	printf("String\n");
	scanf("%s",c);
	int n=strlen(c);
  if(check(c,n))
  {
  	printf("balanced\n");
  }
  else
  printf("unbalanced\n");
return 0;
}
