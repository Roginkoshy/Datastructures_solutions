#include<iostream>
#include<map>
using namespace std;
int main()
{
	pair<char,int> x;
	map<char,int> m;
	for(char ch='a';ch<='z';ch++)
	{
		x.first=ch;
		x.second=int(ch);
		m.insert(x);
	}
   map<char,int>::iterator it;
   for(it=m.begin();it!=m.end();it++)
   {
   	cout<<(*it).first<<" "<<(*it).second<<"\n";
   }
   cout<<"finding a value\n";
   it=m.find('j');
   cout<<(*it).second<<"\n";
   cout<<m['k']<<"\n";
	
	return 0;
}
