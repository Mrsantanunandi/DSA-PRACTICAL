#include <stdio.h>

int max(int a[], int n) {
    if (n == 1)
    {
        return a[0];
    }
    int m = max(a, n - 1);
    if (a[n - 1] > m) 
    {
        return a[n - 1];
    } 
    else 
    {
        return m;
    }
}
int min(int a[], int n) {
    if (n == 1)
    {
        return a[0];
    }
    int m = min(a, n - 1);
    if (a[n - 1] < m) 
    {
        return a[n - 1];
    } 
    else 
    {
        return m;
    }
}

int main() {
    int n, a[30], i;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    if (n <= 0 || n > 30) {
        printf("Invalid size. Please enter a size between 1 and 30.\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int x = max(a, n);
    printf("The max element is %d\n", x);
    int y=min(a,n);
    printf("The max element is %d\n", y);

    return 0;
}
