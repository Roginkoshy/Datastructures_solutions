#include<iostream>
#include<stdio.h>
using namespace std;
void merge(int *left,int *right,int *a,int n)
{
int nl,nr,i,j,k;
   nl=n/2;
   nr=n-n/2;
   i=j=k=0;
   while(i<nl&&j<nr)
   {
   	if(left[i]<=right[j])
   	{
   		a[k]=left[i];
   		i++;
    }
	   else
	   {
	    a[k]=right[j];
		j++; 	
	   }
   	k++;
   }
   while(i<nl)
   {
   	a[k]=left[i];
   	i++;
   	k++;
   }
   while(j<nr)
   {
   	a[k]=right[j];
   	j++;
   	k++;
   }	

}
void merge_sort(int *a,int n)
{
	if(n<2)
	return;
	int left[n/2],right[n-n/2],i,j,k;
   for(i=0;i<n/2;i++)
   {
   	left[i]=a[i];
   	cout<<a[i]<<" ";
   }
   cout<<"\n";
   for(;i<n;i++)
   {
   	right[i-n/2]=a[i];
   	cout<<a[i]<<" ";
   }
   
  merge_sort(left,n/2);
   merge_sort(right,n-n/2);
   merge(left,right,a,n);
}
int main()
{
	int a[100],n;
	cout<<"enter a number\n";
	cin>>n;
	cout<<"Enter the values\n";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	merge_sort(a,n);
	cout<<"\nThe updated array is\n";
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<"\n";
	return 0;
}
