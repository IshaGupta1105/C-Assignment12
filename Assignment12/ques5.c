//Write a recursive function  to print first N even natural numbers.
#include<stdio.h>
void print(int n)
{
    if(n==0)
    return;
    print(n-1);
    printf("%d\n",2*n);
}
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    print(n);
    return 0;
}