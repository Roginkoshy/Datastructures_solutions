#include<iostream>
#include<deque>
using namespace std;
int main()
{
	deque<int> d;
	for(int i=0;i<5;i++)
	{
		d.push_back(i);
	}
	d.push_back(50);
	d.push_front(2);
		for(int i=0,n=d.size();i<n;i++)
	{
	   cout<<d[i]<<" ";
	}
	
	return 0;
}
