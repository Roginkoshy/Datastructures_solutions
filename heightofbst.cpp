#include<stdio.h>
#include<stdlib.h>
struct node{
	
	int data;
	struct node* left;
	struct node* right;
};
struct node* getnewnode(struct node* root,int d)
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
	root=getnewnode(root,d);
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
int max(int a,int b)
{
	if(a>b)
	return a;
	else
	return b;
}
int getheight(struct node* root)
{
	if(root==NULL)
	{
		return -1;
	}
	int heightl=getheight(root->left);
	int heightr=getheight(root->right);
	return max(heightl,heightr)+1;
	
}
int main()
{
	struct node* root=NULL;
	root=insert(root,56);
	root=insert(root,32);
	root=insert(root,5);
	root=insert(root,78);
	root=insert(root,87);
	root=insert(root,4);
	root=insert(root,56);
	int y=getheight(root);
	printf("The height of the tree is %d\n",y);
	return 0;
}
