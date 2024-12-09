#include<stdio.h>
#include<stdlib.h>
#define MAX 10

int hash[MAX];
void init()
{
	int i;
	for(i=0;i<MAX;i++)
	{
		hash[i]=-1;
	}
	return;
}

void insert(int val)
{
	int pos;
	pos=val%MAX;
	if(hash[pos]==-1)
	{
		hash[pos]=val;
	}
	else
	{
		printf("Collision: hash[%d] alraedy has element %d",pos,hash[pos]);
		printf("\nUnable to insert");
	}
	
}
void del(int val)
{
	int pos;
	pos=val%MAX;
	if(hash[pos]==-1)
	{
		printf("There is no element to delete\n");
	}
	else
	{
		hash[pos]=-1;
	}
}
void search(int val)
{
	int pos;
	pos=val%MAX;
	printf("%d , %d\n",pos,val);
	if(hash[pos]==val)
	{
		printf("element found\n");
	}
	else
	{
		printf("Item not found\n");
	}
}

void print()
{
	int i;
	for(i=0;i<MAX;i++)
	{
		printf("%d\t",hash[i]);
	}
}

int main()
{
	int ch,c,y;
	init();
	while(1)
	{
		printf("\nMENU\n1.Insert\n2.DELETE\n3.SEARCH\n4.DISPLAY\n5.EXIT");
		printf("\nEnter your choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("Enter the value for insert: ");
				scanf("%d",&c);
				insert(c);
				break;
			case 2:
				printf("Enter the value for delete: ");
				scanf("%d",&c);
				del(c);
				break;
			case 3:
				printf("Enter the value for search: ");
				scanf("%d",&c);
				search(c);
				break;
			case 4:
				printf("The Hash-Table is:\n");
				print();
				break;
			case 5:
				exit(0);
			default:
				printf("Invalid choice");
		}
	}
	return 0;
}
