//create a function void check(int n) that checks whether the number is odd or even


#include<stdio.h>
int check(int n);   //function declaration
int main()
{
    int n;
    printf("enter the number to be tested");
    scanf("%d",&n);
    check(n);    //function call
}
int check(int n)  //function body 
{
    if(n%2==0){
        printf("its even");
    }
    if(n%2==1){
        printf("its odd");
    }
}