//program to demonstrate the loading or storing of data in a two dimensional array


#include<stdio.h>
int main()
{
    int a[3][4];
    int i,j;
    for(i=0;i<3;++i)
    for(j=0;j<4;++j)
    a[i][j]=i+j;
    for(i=0;i<3;++i)
    for(j=0;j<4;++j)
    printf("a[%d][%d]=%d",i,j,a[i][j]);
    printf("\n");
}


//