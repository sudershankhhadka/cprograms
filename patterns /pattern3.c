/*
            K
          K A T
        K A T H M
      K A T H M A N
    K A T H M A N D U
                        */



#include<stdio.h>
int main()
{
  int i,j,k,s=8;
  char w[]="KATHMANDU";
  for(i=1;i<=9;i+=2){
    for(k=1;k<=s;k++)
    {
      printf("  ");
    }
    s--;
    for(j=0;j<i;j++)
      {
        printf("%c ",w[j]);
      } 
      printf("\n");   
    
  }
  return 0;
}




// #include <stdio.h>
// int main() {
//     char w[] = "KATHMANDU";
//     int length = 9; // length of w[] including null character
//     int i, j, k, s = 8;
    
//     for (i = 1; i <= length; i += 2) {
//         for (k = 1; k <= s; k++) {
//             printf("  ");
//         }
//         s--;
//         for (j = 0; j < i; j++) {
//             printf("%c ", w[j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }




// #include<stdio.h>
// int main()
// {
//     int i,j,k;
//     for(i=1;i<=5;i++){
//         for(j=8;j>i;j--){
//             printf(" ");
//         }
   
//     for(k=1;k<=i;k++){
//         printf("* ");
//     }
//     printf("\n");
//      }
//      return 0;
// }                     




//program to print the triangular pattern of 3 rows'*'

// #include<stdio.h>
// int main()
// {
//     int i,j,k;
//     for(i=1;i<=3;i++){
//         for(j=4;j>i;j--){
//             printf(" ");
//         }
//         for(k=1;k<=i;k++){
//             printf("* ");
//         }
//     printf("\n");
//     }
  
// }