#include<stdio.h>
#include<iostream>
using namespace  std;
int partition(int *a,int start,int end)
{
	int pindex=start;
	int pivot=a[end];
	for(int i=start;i<end;i++)
	{
		if(a[i]<=pivot)
		{
			int temp=a[pindex];
			a[pindex]=a[i];
			a[i]=temp;
			pindex++;
		}
	}
	int temp=a[pindex];
	a[pindex]=a[end];
	a[end]=temp;
	return pindex;

}
void quicksort(int *a,int start,int end)
{
	if(start<end)
	{
	
	int pindex=partition(a,start,end);
	quicksort(a,pindex+1,end);
	quicksort(a,start,pindex-1);
    }
}
int main()
{
	int a[15]={12,23,4,0,451,12,34,23,47,68,21,22,23,2344,56};
	quicksort(a,0,14);
	cout<<"The sorted list is\n";
	for(int i=0;i<15;i++)
	{
		cout<<a[i]<<" ";
	}
	
	return 0;
}
