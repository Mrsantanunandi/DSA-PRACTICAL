#include<stdio.h>
int btod(int bin)
{
    if(bin==0)
    return 0;
    else
    return (bin%10)+2*btod(bin/10);
}
int main()
{
    int n,z;
    printf("Enter a no: ");
    scanf("%d",&n);
    z=btod(n);
    printf("\n Decimal=%d",z);
    return 0;
}
