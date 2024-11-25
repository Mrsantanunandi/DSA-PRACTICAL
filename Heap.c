#include<stdio.h>
#define MAX 50
int heap[MAX];
int N=0;
void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
void insert(int item)
{
	N=N+1;
	int pos=N;
	int PAR;
	heap[N]=item;
	while(pos>1)
	{
		PAR=pos/2;
		if(heap[pos]<=heap[PAR])
		{
			return;
		}
		else
		{
			swap(&heap[pos],&heap[PAR]);
			pos=PAR;
		}
	}
}
int main() {
	int i,val,n;
	printf("Enter the size of the array: ");
	scanf("%d", &n);
	printf("Enter elements: ");
	for (i = 0; i < n; i++)
	{
		scanf("%d", &val);
		insert(val);
	}
	for (i = 1; i < n+1; i++)
	{
		printf("%d  ", heap[i]);
	}
	return;
}
