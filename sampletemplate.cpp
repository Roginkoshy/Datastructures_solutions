#include<iostream>
using namespace std;
template<typename t>
t add(t a,t b)
{
	return a+b;
}
int main()
{
	int a=10;
	int b=99;
	float c=10.2;
	float d=32.233;
	cout<<add<float>(c,d)<<"\n";
	cout<<add<int>(a,b)<<"\n";
	
	
	return 0;
}
