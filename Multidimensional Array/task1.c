// program to find the diagonal of the matrix

#include <stdio.h>
int main()
{
    int a[3][3], i, j;
    printf("enter the elements for the array");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    // for finding the diagonal elements in a matrix
    printf("the diagonal elements are ");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {

            if (i== j)
            {
                printf("%d", a[i][j]);
            }
        }
    }
}

// program to print the reverse diagonal of the matrix

#include <stdio.h>
int main()
{
    int a[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int i, j;
    printf("The reverse diagonal is ");
    for (i = 0; i < 3; i++)
    {
        // for (j = 0; j < 3; j++)
        // {
            // if (i + j == 2)
            // {
            //     printf("%d", a[i][j]);
            printf("%d",a[i][2-i]);
            }
        }
//     }
// }