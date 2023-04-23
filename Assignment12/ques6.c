//Write a recursive function  to print first N even natural numbers in reverse order.
#include<stdio.h>
void print(int n)
{
    if(n==0)
    return;
    printf("%d\n",2*n);
    print(n-1);
}
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    print(n);
    return 0;
} 