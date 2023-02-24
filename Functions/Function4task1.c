//create a function int max(int a,int b) that returns the larger

#include<stdio.h>
int max(int a,int b);
int main()
{
    int a,b;
    printf("enter the numbers");
    scanf("%d%d",&a,&b);
    int m = max(a,b);
    printf("Max=%d",m);
}
int max(int a,int b)
{
    if(a>b)
    return a;
    else
    return b;
}