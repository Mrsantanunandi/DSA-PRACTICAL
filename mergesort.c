#include<stdio.h>
void mergesort(int a[],int lb,int ub)
{
	int mid;
	if(lb<ub)
	{
		mid=(lb+ub)/2;
		mergesort(a,lb,mid);
		mergesort(a,mid+1,ub);
		
		merge(a,lb,mid,ub);
	}
}
void merge(int a[],int lb,int mid,int ub) {
		int n1,n2;
		n1=mid-lb+1;
		n2=ub-mid;
		int x[n1],y[n2],i,j,k;
		for(i=0;i<n1;i++)
		{
			x[i]=a[lb+i];
		}
		for(i=0;i<n2;i++) {
			y[i]=a[mid+1+i];
		}
		i=0;
		j=0;
		k=lb;
		while(i<n1 && j<n2)
		{
			if(x[i]<=y[j])
			{
				a[k]=x[i];
				i++;
				k++;
			}
			else
			{
				a[k]=y[j];
				k++;
				j++;
			}
		}
		while(i<n1)
		{
			a[k]=x[i];
			i++;
			k++;
		}
		while(j<n2)
		{
			a[k]=y[j];
			k++;
			j++;
		}
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
	mergesort(a,0,n-1);
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;	
}

