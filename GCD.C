// Online C compiler to run C program online
#include<stdio.h>
int gcd(int a,int b)
{
    if(b==0)
    {
        return a;
    }
    else
    {
        return gcd(b,a%b);
    }
}
int main()
{
    int a,b;
    printf("Enter a: ");
    scanf("%d",&a);
    printf("Enter b: ");
    scanf("%d",&b);
    int x=gcd(a,b);
    printf("\nGCD of %d , %d is %d",a,b,x);
    return 0;
}
