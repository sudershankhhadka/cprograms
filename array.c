//placing data into anarray



// #include<stdio.h>
// int main()
// {
//  int i;
//  int marks[5];
//  for(i=0;i<=4;i++)
//  {
//     printf("\nEnter marks ");
//     scanf("%d",&marks);
//  }   
//  return 0;
// }


//Program that reads 10 float number entered from the user and displays it on the screen


#include<stdio.h>
int main()
{
    int i;
    float number[10];
    printf("enter the numbers");
    for (i=0;i<=9;i++){
        scanf("%f",&number[i]);
    }
    printf("The Numbers are \n");
    for(i=0;i<=9;i++){
        printf("%d %f \n",i+1,number[i]);
    }
return 0;
}
