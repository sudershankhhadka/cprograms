//with argument without return type
//to add 2 integers

#include<stdio.h>
int add(int a,int b);   //int add(int,int);
int main()
{
    int a,b;
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
    add(a,b);
}
int add(int a,int b)
{
    int c;
    c=a+b;
    printf("The sum is %d",c);
}


