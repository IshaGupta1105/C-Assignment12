//Write a recursive function to print binary of a given decimal number.
#include<stdio.h>
void binary(int n)
{
    if(n==0)
    return;
    binary(n/2);
    printf("%d",n%2);
}
int main()
{
    binary(14);
    printf("\n\n");
    return 0;
}