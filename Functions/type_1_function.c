//without argument and without return type
//function of this type to add 2 integer
#include<stdio.h>
int add(); //function prototype
int main()
{
    add(); //function call
}
int  add()   //function body
{
    int a,b,c;
    printf("enter  2 numbers");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("The sum is %d",c);
}