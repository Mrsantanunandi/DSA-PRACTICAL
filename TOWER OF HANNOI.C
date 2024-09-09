#include<stdio.h>
void TOH(int n,char source,char dest,char temp)
{
    if(n==1)
    {
        printf("\nMove %d disk from %c to %c via %c",n,source,dest,temp);
    }
    else
    {
        TOH(n-1,source,temp,dest);
        TOH(1,source,dest,temp);
        TOH(n-1,temp,dest,source);
    }
}
int main()
{
    int n;
    char A,B,C;
    printf("Eneter num of disk: ");
    scanf("%d",&n);
    TOH(n,'A','B','C');
    return 0;
}
