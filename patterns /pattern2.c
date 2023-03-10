/*   NEPAL
     NEPA
     NEP
     NE
     N   */  



     #include<stdio.h>
    
     int main()
     {
        int i,j;
        char a[]="NEPAL";
        for(i=4;i>=0;i--){
            for(j=0;j<=i;j++){
                printf("%c",a[j]);
            }
            printf("\n");
        }
     }