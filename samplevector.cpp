#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> v(10);
	for(int i=0,n=v.size();i<n-1;i++)
	{
	   v[i]=i*10;
	}
		for(int i=0,n=v.size();i<n;i++)
	  {
	   cout<<v[i]<<" ";
    	}
	v.push_back(-20);
	cout<<v[10]<<"\n\n\n"<<v[9]<<"\n\n\n\n";
	v.resize(20);
		for(int i=0,n=v.size();i<n;i++)
	{
	   cout<<v[i]<<" ";
	}
	vector<int> v1=v;
	cout<<"\n\nmasala ";
		for(int i=0,n=v.size();i<n;i++)
	{
	   cout<<v1[i]<<" ";
	}
	
}
