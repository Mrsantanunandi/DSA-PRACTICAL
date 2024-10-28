#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	struct node* prev;
	struct node* next;
	int data;
}Node;
Node* head=NULL;

Node* createnode(int item)
{
	Node* newnode=(Node*)malloc(sizeof(Node));
	newnode->data=item;
	newnode->next=NULL;
	newnode->prev=NULL;
	return newnode;
}

void insert_beg(int item)
{
	Node* newnode=createnode(item);
	if(head==NULL)
	{
		head=newnode;
		return;
	}
	else
	{
		newnode->next=head;
		head->prev=newnode;
		head=newnode;
	}
}
void insert_last(int item)
{
	Node* newnode=createnode(item);
	if(head==NULL)
	{
		head=newnode;
		return;	
	}
	else
	{
		Node* temp=head;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=newnode;
		newnode->prev=temp;
	}
}
void delete_beg()
{
	if(head==NULL)
	{
		printf("Linked l;ist is empty..nothing to delete\n");
		return;
	}
	else
	{
		Node* del=head;
		head=head->next;
		head->prev=NULL;
		free(del);
		return;
	}
}
void delete_last()
{
	if(head==NULL)
	{
		printf("Linked-list is empty...nothing to delete\n");
		return;
	}
	else if(head->next==NULL)
	{
		Node* del=head;
		head=NULL;
		free(del);
	}
	else
	{
		Node* temp=head;
		while(temp->next->next!=NULl)
		{
			temp=temp->next;
		}
		Node* del=temp->next;
		temp->next=NULL;
		free(del);
	}
}
void display()
{
	Node* temp=head;
	while(temp!=NULL)
	{
		printf("%d\t",temp->data);
		temp=temp->next;
	}
}

int main()
{
	int a,b,ch;
	while(1)
	{
		printf("\nMENU\n1.Insert at beg\n2.Insert at last\n3.delete at beg\n4.Delete at last\n5.Display\n6.Exit\n");
		printf("Enter your choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("Enter the element you want to insert at beg: ");
				scanf("%d",a);
				insert_beg(a);
				break;
			case 2:
				printf("Enter the element you want to insert at last: ");
				scanf("%d",a);
				insert_last(a);
				break;
			case 3:
				delete_beg();
				break;
			case 4:
				delete_last();
				break;
			case 5:
				display();
				break;
			case 6:
				exit(0);
			default:
				printf("\nInvalid choice");
		}
	}
	return 0;
}
