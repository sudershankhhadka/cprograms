#include<stdio.h>
int main()
{
    int a[3][4],i,j,s=0;
    printf("Enter the 12 values ");
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
        scanf("%d",&a[i][j]);
        s=s+a[i][j];
    }
    }
    printf("the sum of the elements of the array is %d",s);
}

//