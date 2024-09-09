// Online C compiler to run C program online
#include<stdio.h>
int fib(int n){
    if(n==1 ||n==0)
    {
        return n;
    }
    else
    {
        return fib(n-2)+fib(n-1);
    }
}
int main(){
    int n;
    printf("Enter num of term: ");
    scanf("%d",&n);
    int l=fib(n);
    printf("%d ",l);
    return 0;
}
