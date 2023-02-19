

// wap to input the values in the 3x4 matrix and find the sum of each rows

#include <stdio.h>
int main()
{
    int a[3][4];
    int i, j,s=0;
    printf("enter the elements ");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    // to find the sum of the rows

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
            {
            s = s + a[i][j];
            }
        {
                printf("\n the sum of the %d row is %d", i+1,s);
                s=0;
        }
    }
}
