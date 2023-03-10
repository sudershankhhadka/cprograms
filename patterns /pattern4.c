/* K A T H M A N D U
     K A T H M A N
       K A T H M
         K A T 
           K         */



// #include<stdio.h>
// int main()
// {
//     int i,k,j,s = 1;
//     char word[]="KATHMANDU";
//     for(i=9;i>=1;i-=2){
//         for(k=1;k<=s;k++){
//             printf(" ");
//         }
//         s++;
//         for(j=0;j<=i;j++){
//           printf("%c ",word[j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }


#include <stdio.h>
#include<string.h>

int main() {
    char str[] = "KATHMANDU";
    int n = strlen(str);
    int i, j, k;

    for (i = n; i > 0; i-=2) {
        for (j = 1; j <= n-i; j++) {
            printf(" ");
        }
        for (k = 1; k <= i; k++) {
            printf("%c ", str[k-1]);
        }
        printf("\n");
    }
    
    return 0;
}
