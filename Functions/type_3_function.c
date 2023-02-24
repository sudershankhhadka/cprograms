//without arugument with return type function

//to add 2 integers


#include<stdio.h>
int add();
int main()
{
    int s=add();
    printf("sum is %d",s);
    return 0;
}
int add()
{
    int a,b,c;
    printf("Enter the two numbers");
    scanf("%d%d",&a,&b);
    c=a+b;
    return c;
}
