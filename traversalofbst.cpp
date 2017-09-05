#include<stdio.h>
#include<stdlib.h>
#include<queue>
using namespace std;
struct node{
	int data;
	struct node* right;
	struct node* left; 
};
bool search(struct node* root,int d)
{
	if(root==NULL)
	return false;
	else if(root->data==d)return true;
	else if(d<=root->data)return search(root->left,d);
	else return search(root->right,d);
}
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
void print(struct node* root)
{
	if(root==NULL)
	{
		return;
	}
 printf("%d ",root->data);
 print(root->left);
 print(root->right);
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
   root=insert(root,123);
   print(root);
   printf("\n");
   root=insert(root,2);
   print(root);
   printf("\n");
   root=insert(root,44);
   print(root);
   printf("\n");
   root=insert(root,77);
   print(root);
   printf("\n");
   root=insert(root,23);
   print(root);
   printf("\n");
   root=insert(root,86);
   print(root);
   printf("\n");
   root=insert(root,34);
   print(root);
   printf("\n");
   root=insert(root,3);
   print(root);
   printf("\n");
	return 0;
}
