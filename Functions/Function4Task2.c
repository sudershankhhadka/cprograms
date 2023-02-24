// Create a function int reverse(int n) that returns the reverse of the given number

#include <stdio.h>
int reverse(int n);
int main()
{
    int n;
    printf("enter the number ");
    scanf("%d", &n);
    int r = reverse(n);
    printf("Reverse = %d", r);
}
int reverse(int n)
{
    int r = 0;
    while(n!=0){
        r=10*r + n%10;
        n=n/10;
    }
    return r;
}