//Write a recursive function to print reverse of a given number.
#include<stdio.h>
void print(int n)
{
    if(n==0)
     return;
    printf("%d",n%10);
    print(n/10);
}
int main()
{
    print(123);
    printf("\n\n");
    return 0;
}