//Write a recursive function  to print first N odd natural numbers-
#include<stdio.h>
void print(int n)
{
    if(n==0)
    return;
    print(n-1);
    printf("%d\n",2*n-1);
}
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    print(n);
    return 0;
}