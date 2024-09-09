// Online C compiler to run C program online
#include<stdio.h>
int fact(int n){
    if(n==1 || n==0)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
}
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    int l=fact(n);
    printf("The factorail of %d is %d",n,l);
    return 0;
}
