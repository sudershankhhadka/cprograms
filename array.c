// placing data into anarray

#include<stdio.h>
int main()
{
 int i;
 int marks[5];
 for(i=0;i<=4;i++)
 {
    printf("\nEnter marks ");
    scanf("%d",&marks);
 }
 return 0;
}

// Program that reads 10 float number entered from the user and displays it on the screen

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

// program that accepts marks for 5 subjects and displays sum and average


#include<stdio.h>

int main()
{
    int marks[5], sum = 0, i;
    float avg;

    for(i = 0; i < 5; i++)
    {
        printf("Enter the marks obtained %d:", i + 1);
        scanf("%d", &marks[i]);
        sum = sum + marks[i];
    }

    avg = sum / 5.0;
    printf("Average = %.2f", avg);

    return 0;
}



//Program that accepts the price and stock of  5  different bulbs,calculate the total stock value


#include<stdio.h>
int main()
{
	int i,total = 0,stock[i],price[i];
	for(i=0;i<5;i++){
		printf("Enter the no. of bulbs of %d category",i+1);
		scanf("%d",&stock[i]);
		printf("Enter the price of %d ranked bulb",i+1);
		scanf("%d",&price[i]);
		total = total + stock[i] * price[i];
	}
	printf("The calculated stock value is %d",total);
}



//Program to find the smallest and the largest element in an array


#include<stdio.h>

int main()
{
	int i, n;
	int small, large, a[50];
	printf("Value of n: ");
	scanf("%d", &n);

	for(i = 0; i < n; i++)
	{
		printf("Enter the %d element that is meant to be in an array: ", i + 1);
		scanf("%d", &a[i]);
	}

	printf("\nThe elements of the array are: ");
	for(i = 0; i < n; i++)
		printf("%d\t", a[i]);

	small = a[0];
	large = a[0];
	for(i = 0; i < n; i++)
	{
		if(small > a[i])
			small = a[i];
		if(large < a[i])
			large = a[i];
	}
	printf("\nThe smallest element = %d and the largest element = %d", small, large);

	return 0;
}
