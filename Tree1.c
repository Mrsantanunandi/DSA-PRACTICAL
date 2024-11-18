// Online C compiler to run C program online
#include<stdio.h>
#include<stdlib.h>
typedef struct node{
	struct node* left;
	int data;
	struct node* right;
}Node;

Node* newnode(int item)
{
	Node* newnode=(Node*)malloc(sizeof(Node));
	newnode->data=item;
	newnode->left=newnode->right=NULL;
	return newnode;
}

Node* insert(struct node* root,int item)
{
	if(root==NULL)
	{
		return newnode(item);
	}
	if(item<(root->data))
	{
		root->left=insert(root->left,item);
	}
	else if(item>(root->data))
	{
		root->right=insert(root->right,item);
	}
	return root;
}

void inorder(struct node* root)
{
	if(root==NULL)
	{
		return;
	}
	inorder(root->left);
	printf("%d\t",root->data);
	inorder(root->right);
}

void preorder(struct node* root)
{
	if(root==NULL)
	{
		return;
	}
	printf("%d\t",root->data);
	preorder(root->left);
	preorder(root->right);
}

void postorder(struct node* root)
{
	if(root==NULL)
	{
		return;
	}
	postorder(root->left);
	postorder(root->right);
	printf("%d\t",root->data);
}
int main()
{
	struct node* root=NULL;
	int ch,x,y;
	while(1)
	{
		printf("\nMENU\n1.INSERT\n2.INORDER\n3.PREORDER\n4.POSTORDER\n5.EXIT\n");
		printf("\nENTER YOUR CHOICE: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("Enter data: ");
				scanf("%d",&x);
				root=insert(root,x);
				break;
			case 2:
				printf("INORDER-->\t");
				inorder(root);
				break;
			case 3:
				printf("PREORDER-->\t");
				preorder(root);
				break;
			case 4:
				printf("POSTORDER-->\t");
				postorder(root);
				break;
			case 5:
				exit(0);
			default:
					printf("\nInvalid input");
		}
	}
	return 0;
}


