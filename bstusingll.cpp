#include<stdio.h>
#include<stdlib.h>
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
int main()
{
	struct node* root=NULL;
   
   root=insert(root,5);
   root=insert(root,4);
   if(search(root,4))
   printf("4 present\n");
   else 
   printf("4 absent\n");
   root=insert(root,123);
   root=insert(root,2);
   root=insert(root,44);
   root=insert(root,77);
   root=insert(root,23);
   if(search(root,123))
   printf("123 present\n");
  else 
   printf("123 absent\n");
   root=insert(root,86);
   root=insert(root,34);
   root=insert(root,3);
   if(search(root,99))
   printf("99 present\n");
   else 
   printf("99 absent\n");
	return 0;
}
