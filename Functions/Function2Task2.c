//Create a function int print(int a,int b) that prints all the number from a to b.


#include<stdio.h>
int print(int a, int b);
int main()
{
    int a,b;
    printf("enter the two numbers");
    scanf("%d%d",&a,&b);
    print(a,b);
}
int print(int a,int b)
{
    int i;
    for(i=a;i<=b;i++){
        printf("%d \t",i);
    }
}