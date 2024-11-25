#include<stdio.h>
void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

int partition(int a[], int left, int right) {
	int pivot = a[left];
	int up = right;
	int down = left;

	while (down < up) {
		while (a[down] <= pivot && down < up) {
			down++;
		}
		while (a[up] > pivot) {
			up--;
		}
		if (down < up) {
			swap(&a[down], &a[up]);
		}
	}
	swap(&a[left], &a[up]);
	return up;
}

void quicksort(int a[], int left, int right)
{
	if (left < right) 
	{
		int pivot = partition(a, left, right);
		quicksort(a, left, pivot - 1);
		quicksort(a, pivot + 1, right);
	}
}

int main() {
	int i, a[20], n;
	printf("Enter the size of the array: ");
	scanf("%d", &n);
	printf("Enter %d elements: ", n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("The array is: ");
	for (i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
	quicksort(a, 0, n - 1);
	printf("\nThe sorted array is: ");
	for (i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}
