#include<stdio.h>
void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
int partition(int a[],int lb,int ub) {
	int start,end,pivot;
	start=lb+1;
	end=ub;
	pivot=a[lb];
	while(start<=end) {
	while(a[start]<=pivot)
	{
		start++;
	}
	while(a[end]>pivot) {
		end--;
	}
	if(start<=end) {
		swap(&a[start],&a[end]);
	}
}
	swap(&a[lb],&a[end]);
	return end;
}

void quicksort(int a[],int lb, int ub) {
	int loc;
	if(lb<ub)
	{
		loc=partition(a,lb,ub);
		quicksort(a,lb,loc-1);
		quicksort(a,loc+1,ub);
	}
	return;
}
int main()
{
	int a[20],i,n;
	printf("Enter size of the array: ");
	scanf("%d",&n);
	printf("Enter the element: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("The sorted Array is: ");
	quicksort(a,0,n-1);
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;	
}
