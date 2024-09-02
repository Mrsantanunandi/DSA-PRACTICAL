#include<stdio.h>
#include<stdlib.h>
#define N 50
int queue[N];
int front=-1;
int rare=-1;
void enqueue(int x)
{
	if(rare==N-1)
	{
		printf("\nQueue Overflow!!");
		return;
	}
     if(rare==-1)
	{
		front++;
	}
		rare++;
		queue[rare]=x;
		return;
}
int dequeue()
{
	if(front==-1)
	{
		printf("\nQueue Underflow!!");
		return 0;
	}
	int m=queue[front];
	if(rare==front)
	{
		front=rare=-1;
	}
	else
	{
		front++;
	}
	return m;
}
void display()
{
	int i;
	if(front!=-1)
	{
		for(i=front;i<=rare;i++)
		{
			printf("%d\t",queue[i]);
		}
	}
	else
	{
		printf("\nQueue is empty");
	}
}
int main()
{
	int ch,x;
	while(1){
		printf("\n1.Enqueue\n2.Dequeue\n3.display\n4.Exit");
		printf("\nEnter the option: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("\nEnter the num you want to insert: ");
				scanf("%d",&x);
				enqueue(x);
				break;
			case 2:
				dequeue();
				break;
			case 3:
				display();
				break;
			case 4:
				exit(0);
				default:
					printf("\nInvalid Choice");		
		}
	}
	return 0;
}
