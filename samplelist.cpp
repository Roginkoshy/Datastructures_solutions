#include<iostream>
#include<algorithm>
#include<list>
using namespace std;
int main()
{
	list<int> l;
	l.push_back(5);
	for(int i=0;i<10;i++)
	{
		l.push_back(i+1);
	}
	list<int>::iterator itr=find(l.begin(),l.end(),8);
	l.erase(itr);
	l.push_front(99);
	for(list<int>::iterator itr1=l.begin();itr1!=l.end();itr1++)
	{
		cout<<*itr1<<" ";
	}
	
	return 0;
}
