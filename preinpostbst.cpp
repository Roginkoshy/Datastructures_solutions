#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* right;
	struct node* left;
};
struct node* getnewnode(int x)
{
	struct node* temp=(struct node*)malloc(sizeof(struct node));
	temp->data=x;
	temp->left=NULL;
	temp->right=NULL;
	return temp;
}
struct node* insert(struct node* root,int x)
{
	if(root==NULL)
	{
		root=getnewnode(x);
	}
   else	if(x>root->data)
	{
		root->right=insert(root->right,x);
	}
	else
	{
		root->left=insert(root->left,x);
	}
	return root;
}
void print(struct node* root)
{
	if(root==NULL)
	return;
	printf("%d ",root->data);
	print(root->left);
	print(root->right);
}
void preorder(struct node* root)
{
	
	if(root==NULL)
	return;
	printf("%d ",root->data);
	print(root->left);
	print(root->right);
}
void inorder(struct node* root)
{
	
	if(root==NULL)
	return;
	
	print(root->left);
	printf("%d ",root->data);
	print(root->right);
}
void postorder(struct node* root)
{
	if(root==NULL)
	return;
	
	print(root->left);
	print(root->right);
    printf("%d ",root->data);
}
int main()
{
	struct node* root=NULL;
	root=insert(root,5);
	print(root);
	printf("\n");
	root=insert(root,4);
	print(root);
	printf("\n");
	root=insert(root,13);
	print(root);
	printf("\n");
	root=insert(root,512);
	print(root);
	printf("\n");
	root=insert(root,42);
	print(root);
	printf("\n");
	root=insert(root,563);
	print(root);
	printf("\n");
	root=insert(root,0);
	print(root);
	printf("\n");
	root=insert(root,12);
	print(root);
	printf("\n");
	root=insert(root,78);
	print(root);
	printf("\n");
	root=insert(root,56);
	print(root);
	printf("\n");
	root=insert(root,3);
	print(root);
	printf("\n");
	root=insert(root,1);
	print(root);
	printf("\n");
	preorder(root);
	printf("\n");
	inorder(root);
	printf("\n");
	postorder(root);
	printf("\n");
	return 0;
}
