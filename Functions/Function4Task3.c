//Create a function int sum(int n[]) that return the sum of the elements in an array
//function with argument and with return type

#include<stdio.h>
int sum(int n[]);     //declaration of function
int main()
{
    int i,s;
    int n[5];
    printf("Enter the elements of the array:");
    for(i=0;i<5;i++){
        scanf("%d",&n[i]);
    }
    s = sum(n);     //calling the function
    
}
int sum(int n[])     //function body 
{
    int i,s=0;
    for(i=0;i<5;i++){
        s=s+n[i];
    }
    printf("The sum is : %d",s);
    return s;     //returning the function
}