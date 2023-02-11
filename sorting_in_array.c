// WAP to find the sum of 10 integers using array

// #include <stdio.h>
// int main()
// {
//     int n[10], sum = 0,i;
//     printf("Enter the 10 numbers");
//     for (i = 0; i < 10; i++)
//     {
//         scanf("%d", &n[i]);

//         sum = sum + n[i];
//     }
//     printf("the required sum is %d ", sum);
// }

//Sort the elements of the array
//Selection sort

#include<stdio.h>
int main()
{
    int  a[]={23,232,434,656,433};
    int i,j,temp,n=5;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]>a[j]){
                temp = a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("The sorted form of  the array is ");
    for(i=0;i<n;i++){
    printf("%d \t",a[i]);
}
}

//bubble sort


#include<stdio.h>
int main()
{
    int a[]={23,232,434,656,433};
    int i,j,temp,n=5;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(a[i]>a[j+1]){
               temp = a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(i=0;i<n;i++){
        printf("%d \t",a[i]);
    }
}