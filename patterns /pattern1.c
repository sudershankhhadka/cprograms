/*   N
     NE
     NEP
     NEPA
     NEPAL */




#include<stdio.h>
#include<string.h>

int main()
{
    int i,j;
    char a[]="NEPAL";
    for(i=0;i<=4;i++){
        for(j=0;j<=i;j++){
            printf("%c",a[j]);
        }
    printf("\n");
    }
}