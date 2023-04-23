//Write a recursive function to print squares of first N natural numbers.
#include<stdio.h>
void print(int n)
{
    if(n==0)
    return;
    print(n-1);
    printf("%d\n",n*n);
}
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    print(n);
    return 0;
}