#include<stdio.h>
#include<conio.h>
struct node *insert(struct node *r,struct node*n);
void inorder(struct node*r);
struct node
{
node *left;
int data;
node *right;
};

int main()
{
	struct node *nptr,*root=0;
	int n;
  while(1)
{
clrscr();
	printf("press 1 for insert:press 2 for disply:");
	scanf("%d",&n);

	if(n==1)
	{

	nptr=new(node);
	 scanf("%d",nptr->data);
	  nptr->left=nptr->right=0;
	  root=insert(root,nptr);
	}

	else
	{
	  inorder(root);

	}
	return 0;
}
}

	struct node *insert(struct node *r,struct node*n)
	{

	if(r==0)
	{
	r=n;
	}
	else if(r->data<n->data)
	r->right=insert(r->right,n);
	else if(r->data>n->data)
	r->left=insert(r->left,n);
	return r;
	}

       void inorder(struct node*r)
       {
       if(r)
       {
       inorder(r->left);
       printf("%d",r->data);
       inorder(r->right);
       }

       }


