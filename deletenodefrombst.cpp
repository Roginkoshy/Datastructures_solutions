#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* right;
	struct node* left;
};
struct node* getnewnode(struct node* root,int data)
{
	struct node* temp=(struct node*)malloc(sizeof(struct node));
	temp->data=data;
	temp->right=NULL;
	temp->left=NULL;
	return temp;
}
struct node* insert(struct node* root,int data)
{
	if(root==NULL)
	root=getnewnode(root,data);
	else if(data>root->data)
	{
		root->right=insert(root->right,data);
	}
	else
	{
		root->left=insert(root->left,data);
	}
	return root;
}
struct node* search(struct node* root,int x)
{
	
	if(root==NULL)
	{
		printf("There is no such value\n");
		return NULL;
	}
	if(root->data==x)
	return root;
	else if(x>root->data)
	{
		search(root->right,x);
	}
    else
    {
    	search(root->left,x);
	}
	
}
void print(struct node* root)
{
	struct node* temp=root;
	if(root==NULL)
	return;
	printf("%d ",root->data);
	print(root->left);
	print(root->right);
	
}
struct node* findmin(struct node* root)
{
	
	if(root->left==NULL)
	return root;
	root->left=findmin(root->left);
	
}
struct node* deletenode(struct node* root,int x)
{
	if(root==NULL)
	return root;
	else if(x<root->data)
	root->left=deletenode(root->left,x);
	else if(x>root->data)
	root->right=deletenode(root->right,x);
	else
	{
	if(root->left==NULL&&root->right==NULL)
	{
		free(root);
		root=NULL;
	}
	else if(root->left==NULL)
	{
		struct node* temp=root;
		root=root->right;
		free(temp);
	}
	else if(root->right==NULL)
	{
		struct node* temp=root;
		root=root->left;
		free(temp);
	}
	else{
		struct node* temp=findmin(root->right);
		root->data=temp->data;
		root->right=deletenode(root->right,temp->data);
	}
  }
  return root;
}
int main()
{
	struct node* root=NULL;
	root=insert(root,13);
	print(root);
	printf("\n");
    root=insert(root,105);
print(root);
printf("\n");
	root=insert(root,2);
print(root);
printf("\n");
	root=insert(root,15);
	print(root);
	printf("\n");
	root=insert(root,12);
	print(root);
	printf("\n");
	root=insert(root,99);
	print(root);
	printf("\n");
	deletenode(root,99);
	print(root);
	printf("\n");
	root=insert(root,22);
	print(root);
	printf("\n");
	root=insert(root,19);
	print(root);
	printf("\n");
	root=insert(root,32);
	print(root);
	printf("\n");
	root=insert(root,1);
	print(root);
	printf("\n");
	root=insert(root,99);	
	print(root);
	printf("\n");
	root=deletenode(root,1);
    print(root);
    printf("\n");
    root=deletenode(root,777);
    print(root);
    printf("\n");
    root=insert(root,77);
    print(root);
    printf("\n");
	return 0;
}
