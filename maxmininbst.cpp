#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* left;
	struct node* right;
};
struct node* getnewnode(int d)
{
	struct node* temp=(struct node*)malloc(sizeof(struct node));
	temp->data=d;
	temp->right=NULL;
	temp->left=NULL;
	return temp;
}
struct node* insert(struct node* root,int d)
{
	if(root==NULL)
	{
		root=getnewnode(d);
	}
	else if(d<=root->data)
	{
		root->left=insert(root->left,d);
	}
	else
	{
		root->right=insert(root->right,d);
	}
	return root;
}
int getmax(struct node* root)
{
	struct node* temp=root;
	int max=0;
	while(temp->right!=NULL)
	{
		temp=temp->right;
	}
	max=temp->data;
	return max;
}
int getmin(struct node* root)
{
	struct node* temp=root;
	int min;
	while(temp->left!=NULL)
	{
		temp=temp->left;
	}
   min=temp->data;
   return min;
}
int main()
{
	struct node* root=NULL;
	root=insert(root,4);
	root=insert(root,25);
	root=insert(root,245);
	root=insert(root,86);
	root=insert(root,78);
	root=insert(root,255);
	root=insert(root,67);
	root=insert(root,567);
	root=insert(root,285);
	root=insert(root,34);
	int max=getmax(root);
	int min=getmin(root);
	printf("The max value in the bst is %d\n",max);
	printf("The min value in the bst is %d\n",min);
	return 0;
}
