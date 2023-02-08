// #include<stdio.h>
// int main()
// {
//     int i,j;
//     for(i=1;i<=5;i++){
//         for (j=1;j<=i;j++)
//         {
//             printf("%c",'*');
//         }
//         printf("\n");
//     }
// }

// program to check out whether the number is prime or composite

// #include<stdio.h>
// int main()
// {
//     int n,s=0,i;

// printf("enter a number");
// scanf("%d",&n);
// for(i=2;i<=n/2;i++)
// {
//     if (n%i==0)

// {
//     printf("composite");
//     s=1;
//     break;
// }
// }
// if (s==0){
//     printf("prime");
// }

// }

// wap to find prime numbers in range between 100 to 200

// #include<stdio.h>
// int main()
// {
//     int i,n,x;
//     for(n=100;n<=200;n++)
//     {
//         x=0;
//         for(i=2;i<=n/2;i++)
//         {
//             if(n%i==0)
//             {
//             x=1;
//             break;
//             }
//         }

//             if (x==0)
//             {
//             printf("%d \t",n);

//     }
// }
// }

// wap to print the composite numbers from 100 to 200

// #include<stdio.h>
// int main()
// {
//     int l,i,n;
//     for(l=100;l<=200;l++)
//     {
//         n=0;

//         for(i=2;i<=l/2;i++)
//     {

//     if(l%i!=0){
//         n=1;
//         break;{

//     else if(n==1)

//     }

//    {
//         printf("%d \t",l);
//     }
//     }
//     }
// }

// #include<stdio.h>
// int main()
// {
// int l,i,n;
// for(l=100;l<=200;l++)
// {
// n=0;
// for(i=2;i<=l/2;i++)
// {
// if(l%i==0)
// {
// n=1;
// break;
// }
// }
// if(n==1)
// {
// printf("%d \t",l);
// }
// }
// }

// program to find the prime numbers from 100-200
//  #include<stdio.h>
//  int main()
//  {
//      int l,i,n;
//      for(l=100;l<=200;l++)
//      {
//          n=0;
//          for(i=2;i<=l/2;i++)
//      {
//      if(l%i==0)
//      n=1;
//      }
//      if(n==0)
//      {
//          printf("%d \t",l);
//      }
//      }
//  }

// program to find the odd composite numbers from 100-200

// #include<stdio.h>

// int main() {
//     int i, j;

//     for (i = 100; i <= 200; i++)
//      {
//         if (i % 2 != 0) { // is odd number
//             int is_composite = 0;
//             for (j = 2; j <= i / 2; j++) {
//                 if (i % j == 0) {
//                     is_composite = 1;
//                     break;
//                 }
//             }
//             if (is_composite==1) {
//                 printf("%d\n", i);
//             }
//         }
//     }

//     return 0;
// }

// write a program to print odd prime numbers from 300 - 310
//  #include<stdio.h>
//  int main()
//  {
//      int i,j,k;
//      for(i=300;i<=310;i++)
//      {
//         if(i%2!=0)//checks odd or even
//          {
//              for (j=2;j<=i/2;j++)

//                 k=1;
//                 break;
//             }
//             if (k==1)
//             {
//                 printf("%d \t",i);
//             }

//         }

// }

// #include<stdio.h>
// int main()
// {
//     int i,j,flag;
//     for(i=300;i<=360;i++)
//     {
//         if(i%2!=0) //checks odd or even
//         {
//             flag=1;
//             for (j=2;j<=i/2;j++)
//             {
//                 if(i%j==0)
//                 {
//                     flag=0;
//                 }
//             }
//             if (flag)
//             {
//                 printf("%d \t",i);
//             }

//         }
//     }
//     return 0;
// }

// wap to print the prime prime numbers between 60 to 200

// what is the output of the given program?
//  #include<stdio.h>
//  int main()
//  {
//      int n;
//      n=printf("hello");
//      printf("return value is: %d",n);
//      return 0;
//  }

// program to check whether the given number is positive or negative
//  int main()
//  {
//      int n;
//      printf("enter the number to be tested");
//      scanf("%d",&n);
//      if(n<0)
//      {
//          printf("negative");
//      }
//      else {
//          printf("positive");
//      }
//      }

// program to find if the number is even or odd
//  int main()
//  {
//  int n;
//      printf("enter the number ");
//      scanf("%d",&n);
//      if(n%2!=0)
//      {
//          printf("odd");

//     }
//     else{
//         printf("even");
//     }
// }

// profit loss calculating program

// int main()
// {
//     int c,s,p,l;
//     printf("enter the cost price");
//     scanf("%d",&c);
//     printf("enter the selling price");
//     scanf("%d",&s);

//    if(s>c){
//     printf("there is profit \n");
//     p=s-c;
//     printf("the profit amount is %d \n ",p);
//    }
//    else{
//     printf("there is loss \n");
//     l=c-s;
//     printf("the loss amount is %d \n",l);
//    }

// }

// program to calculate the root of the quadratic equaton ax^2 + bx +c
//  #include<math.h>
//  int main()
//  {
//      float a,b,c,d,root1,root2;
//      printf("enter the values of a b c d of the quadratic euation");
//      scanf("%f %f %f",&a,&b,&c);
//      d = b*b - 4*a*c;
//      if(d>0)
//      {
//          printf("the roots are real");
//          d=sqrt(d);
//          root1 = (-b-d)/(2*a);
//          root2 = (-b-d)/(2*a);
//          printf("root1 and root2 %f %f",root1,root2);

//     }
//     else{
//         printf("its unreal/imaginary");
//     }
// }

// NESTED IF CASES

// program to find the smallest and greatest among the three nummbers

// #include<stdio.h>
// int main()
// {
//     int a,b,c;
//     printf("enter the three numbers");
//     scanf("%d %d %d",&a,&b,&c);
//     if(a>b && a>c){
//         printf("%d is the greatest",a);

//     }
//     else if(b>c &&b>a){
//         printf("%d is the greatest",b);

//     }
//    if(a<b && a<c){
//         printf("%d is the smallest number",a);
//     }
//     else if(b<c && b<a){
//        printf("%d is the smallest number ", b);
//     }
//     else if (c<a && c<b){
//         printf("%d is the smallest",c);
//     }
//     else {
//         printf("%d is the greatest",c);
//     }
// }

// program that demonstrates the use case of switch statement

// #include<stdio.h>
// int main()
// {
//     int choice;
//     printf("\n Which of these websites you want to visit?");
//     printf("\n Select 1 for facebook, 2 for Google, 3 for Yahoo");
//     printf("\n 1=>Facebook \n 2=> Google \n 3=> Yahoo");
//     printf("enter your choice ");
//     scanf("%d",&choice);

//     switch(choice)
//     {
//         case 1:
//         printf("You use face book");
//         break;

//         case 2:
//         printf("you love googling");
//         break;

//         case 3:
//         printf("you love yahoo");
//         break;

//         default:
//         printf("Invalid number entered");
//     }
//     return 0;
// }

// arithmetic operations using switch statement

// #include<stdio.h>
// int main()
// {
//     int a,b;
//     char ab;
//     printf("enter the two numbers");
//     scanf("%d %d ",&a,&b);
//     printf("choose the arithmetic operation you want to perfom");
//     scanf("%c",&ab);
//     switch(ab)
//     {
//         case '+':
//         printf("the sum is %d ",a+b);
//         break;

//         case '-':
//         printf("the subtracted value is %d",a-b);
//         break;

//         case '*':
//         printf("the multiplied value is %d",a*b);

//         default :
//         printf("invalid operation");
//     }
// }

// program to sum numbers from 1 to 100 using while loop

// #include<stdio.h>
// int main()
// {
//    int i=1,j=0;
//    while (i<=100){
//     j=j+i;
//     i++;
//    }
//    printf("sum is %d ", j);

// }

// program to find the sum and average of five subjects using while loops

// #include<stdio.h>
// int main()
// {
//     int marks,total,i;
//     float average;
//     i=1;
//     while (i<=5)
//     {
//         printf("\n enter the marks of %d subjects:", i);
//         scanf("%d",&marks);

//         total = total + marks;
//         i++;
//     }
//     average = (float)total/5;
//     printf("\n The sum =%d\t and average of marks of five subject is : %f", total,average);

// }

// program to print the input platform for 8 times

// #include<stdio.h>
// int main()
// {
//     int i,v,average;
//     while(i<=8){
//         printf("the %d number visualization is ",i);
//         scanf("%d",&v);
//         v+=i;
//         i++;
//     }
//     average = v/2;
//     printf("the average visualization is %d",average);
// }

// program to find the sum of the number provided by the user

// #include<stdio.h>
// int main()
// {
//     int n,s=0,r;
//     printf("enter the number");
//     scanf("%d",&n);
//     while(n>0){
//         r=n%10;
//         s=s+r;
//         n/=10;
//     }
//     printf("the number is %d", s);

// }

// wap to check whether the number is armstrong number or not

// #include<stdio.h>
// int main()
// {
//     int n,r,s=0;
//     int j;
//     printf("enter the number ");
//     scanf("%d",&n);
//     j=n;
//     while(n!=0){
//        r= n%10;
//        s+=r*r*r;
//        n/=10;

//     }
//     if(j==s){
//         printf("the number is armstrong number \n");
//     }
//     else{
//         printf("its not the armstrong number  \n");
//     }

// }

// program to display the reverse of the number

// #include<stdio.h>
// int main()
// {
//     int n,r=0,d;
//     printf("enter the number");
//     scanf("%d",&n);
//     while(n!=0){
//         d=n%10;
//         r=r*10+d;
//         n=n/10;
//     }
//     printf("the reverse number is %d",r);
// }

// program to check whether the number is palindrome or not

// #include<stdio.h>
// int main()
// {
//     int n,p,r,s=0;
//     printf("enter the number");
//     scanf("%d",&n);
//     p=n;
//     while(n!=0){
//         r=n%10;
//         s=s*10+r;
//         n/=10;

//     }
//     if(s==p){
//         printf("its the palindrome");
//     }
//     else {
//         printf("its not a palindrome");
//     }
// }

// program to convert binary to decimal

// #include<stdio.h>
// int main()
// {
//     int d=0,b,w=1,r;
//     printf("enter the decimal number");
//     scanf("%d",&b);
//     while ((b!=0))

//     {
//     r=b%10;
//     d= d+r*w;
//     b=b/10;
//     w=w*2;
//     }
//     printf("the decimal value is %d",d);
// }

////do while loop

// program to print all the numbers from 1-100 using do while loop

// #include<stdio.h>
// int main()
// {
//     int i=1;
//     do{
//         printf("%d \n",i);
//         i++;
//     }
//     while(i<=100);

// }

// to find the  nth fibonacci series

// #include<stdio.h>
// int main()
// {
//     int i,n;
//     int t1=0,t2=1;
//     int nextTerm = t1+t2;
//     printf("enter the number of terms");
//     scanf("%d",&n);

//     for(i=3;i<=n;i++){
//         t1=t2;
//         t2=nextTerm;
//         nextTerm=t1 + t2;
//     }
//     printf("%d",nextTerm);

// }

// fibonacci series upto n terms

// #include <stdio.h>
// int main() {
//   int t1 = 0, t2 = 1, nextTerm = 0, n;
//   printf("Enter a positive number: ");
//   scanf("%d", &n);

//   // displays the first two terms which is always 0 and 1
//   printf("Fibonacci Series: %d, %d, ", t1, t2);
//   nextTerm = t1 + t2;

//   while (nextTerm <= n) {
//     printf("%d, ", nextTerm);
//     t1 = t2;
//     t2 = nextTerm;
//     nextTerm = t1 + t2;
//   }

//   return 0;
// }

// program to print the nth fibonacci series

// #include<stdio.h>
// int main()
// {
//   int fib1,fib2,prev,next,num;
//   fib1=1;
//   fib2=1;
//   prev=fib1;
//   printf("enter the nth term for the fibpnacci number");
//   scanf("%d",&num);
//   do{
//     next=fib1+prev;
//     prev=fib2;
//     fib2=next;
//     printf("%d",prev);

//   }
//   while(num>next);
// }

// program to print the fibonacci number

// #include<stdio.h>
// int main()
// {
//   int n,s=0;
//   printf("enter the fibonacci number to be printed");
//   scanf("%d",&n);
//   s=(n-1)+(n-2);
//   printf("%d",s);
// }

// FOR LOOPS

// write a program using for loop to print the number from 1-100

// #include<stdio.h>
// int main()
// {
//   int n;
//   for(n=1;n<=100;n++)
//   printf("%d \n",n);
// }

// program to calculate the factorial of a positive number read from the user

// #include<stdio.h>
// int main()
// {
//   int n,f=1,t;
//   printf("enter the number of which the factorial is to be calculated");
//   scanf("%d",&n);
//   {
//   for(t=1;t<=n;t++)
//   f=f*t;
//   }
// printf("the factorial is %d",f);
// }

// reprogrammed to find the factorial of a number

// #include<stdio.h>
// int main()
// {
//     int n,i;
//     printf("enter the number to find the factorial");
//     scanf("%d",&n);
//     int fact=1;
//     for(i=1;i<=n;i++){
//         fact=i*fact;

//     }
//     printf("the resuired factorial is %d",fact);
// }

// program to illustrate break within a loop

// #include<stdio.h>
// int main()
// {
//     int x;
//     for(x=1;x<=10;x++){
//         if(x>4)
//         break;
//         printf("%d\t",x);
//     }
//     printf("next executed \n");
//     return 0;
// }

// program to illustrate the use of continue statement

// #include<stdio.h>
// int main()
// {
//     int x;
//     for (x=0;x<=100;x++){
//         if(x>5)
//         continue;
//         printf("%d \t",x);
//     }
//     printf("\n executed next");
// }

// the return statement

// #include<stdio.h>
// int main()
// {
//     int findmax(int a, int b)
//     {
//         if(a>b)
//             return a;
//             return b;

//     }
// }

// the goto statement

// program to print using goto statement without using the label and loop statements

// #include<stdio.h>
// int main()
// {
//     int x=1;
//     loop1:
//     printf("%d \t",x);
//     x++;
//     if(x<10)
//     goto loop1;
// }

// program to print numbers using goto statement

// #include<stdio.h>
// int main()
// {
//     int c=9;
//     loop1:
//     printf("%d \t",c);
//     c--;
//     if(c>0)
//     goto loop1;
// }

//******

// //program to display my name 5 times using for loop
// #include<stdio.h>
// int main()
// {
//     char name[9] = "sudershan";
//     int i;
//     for(i=1;i<=5;i++){
//         printf("\n %c",name[i]);
//     }
// }

// program to display C programming 5 times using while loop

// #include<stdio.h>
// int main()
// {
//     int i=1;
//     while(i<=5){
//         printf("\n C programming");
//         i++;
//     }
// }

// program to display "c programming " 5 times using do while loop

// #include<stdio.h>
// int main()

// {
//     int i=1;
//     do{
//         printf("C programming \n");
//         i++;
//     }
//     while(i<=5);
// }

// program to display temperature from 0 degree celsius to 100 degree and their fahrenheit equivalent

// #include<stdio.h>
// int main()
// {
//  float c,f;
//  for(c=0;c<=100;c++){
//  f=(9*c+160)/5;

//  printf("%f \n",f);
//  }
// }

// program to calculate the sum of first 10 even  numbers

// #include<stdio.h>
// int main()
// {
//     int n=0,j=0,s=0;
//   while(j<10){
//         n+=2;
//         s=s+n;
//         j++;
//     }
//     printf("%d ",s);
//     }

// program to find the sum of all numbers completely divisible by 5 among n numbers given by the user

// #include<stdio.h>
// int main()
// {
//     int n,k,s=0;
//     printf("enter the number ");
//     scanf("%d",&n);
//   for(k=5;k<=n;k+=5){
//     s=s+k;

//   }
//   printf("%d",s);

// }

// program to determine the sum of the harmonic series (1+1/2+1/3+1/4.....1/n) for the given value of n

// #include<stdio.h>
// int main()
// {
//     int n,i;
//     float s=0;
//     printf("Enter n");
//     scanf("%d",&n);
//     for (i=1;i<=n;i++)
//     s=s+1.0/i;
//     printf("%f",s);
// }

// program to find the sum of the series 1+x2+3x2+4x2+...+nx2

// #include<stdio.h>
// int main()
// {
//     int n,i,x,s;
//     printf("enter the vaues of x and n \n");
//     scanf("%d %d",&x,&n);
//     s = 1+x*x;
//     for(i=3;i<=n;i++)
//     s=s+i*x*x;
//     printf("sum =%d",s);
// }

// program to calculate the sum of the sequence 1/1!+2/2!+3/3!+ .....+n/n!

// n is the number given by the user

// #include<stdio.h>
// int main()
// {
//     int n,i,j,fact;
//     float sum = 0;
//     printf("enter n");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++){
//         fact =1;
//         for (j=1;j<=i;j++)
//         fact =j*fact;
//         sum = sum + (float)i/fact;

//     }
//     printf("%f",sum);
// }

// program to display sum of the following series upto n terms

// sum = x-x^2+x^3-x^4+.....
//  #include<stdio.h>
//  #include<math.h>
//  int main()
//  {
//      int i,x,sum=0,n;
//      printf("enter the value of x and n");
//      scanf("%d%d", &x,&n);
//      for (i=1;i<=n;i++){
//      if(n%2==0)
//          sum = sum-pow(n,x);

//     else
//     sum = sum + pow(n,x);

//     }
//     printf("%d",sum);
// }

// program to fnd X of the following series for the given value of a and N

// X = a-a^2/2+a^3/3-a^4/4......upto N

// #include<stdio.h>
// #include<math.h>
// int main()
// {
//     int X=0,N,a,i;
//     printf("enter the value of a and N");
//     scanf("%d%d",&a,&N);
//     for(i=1;i<=N;i++){
//         if(i%2==0)
//         X= X - pow(N,a)/i;
//         else
//         X=X+pow(N,a)/i;

//     }
//     printf("%d",X);
// }

// program to display all prime numbers less than hundred

// #include<stdio.h>
// int main()
// {
//     int i , j ,prime;
//     for(i=2;i<=100;i++)
//     {
//         prime = 1;
//         for(j=2;j<=i/2;j++){
//         if(i%j==0)
//         {
//         prime=0;
//         break;
//         }

//     }
//     if(prime)
//         printf("%d \n",i );
//     }
// }

// program to enter a number and check whether its prime or composite

// #include<stdio.h>
// int main()
// {
// int n,i,x=0;
// printf("enter the number ");
// scanf("%d",&n);
// for(i=2;i<=n/2;i++){
//     if(n%i==0){
//     printf("its composite ");
//     x=1;
//     break;
//     }
// }
// if(x==0)
// {
//     printf("its prime number");
// }
// }

// program to display all prme numbers less than hundred

// #include<stdio.h>
// int main()
// {
//     int n,i,f=0;
//     for(i=1;i<=100;i++)
//     {
//         for(n=2;n<=i/2;n++)
//         {

//         if(i%n==0){
//         f=1;
//         break;
//         }
//         }
//     }
//         if(f==0)
//         printf("%d",i);
// }

// program to display prime number less than 100

// #include<stdio.h>
// int main()
// {
//     int i,j,prime;
//     printf("prime number from 1-100 are :\n");
//     for (i=2;i<=100;i++){
//         prime =1;
//         for(j=2;j<=i/2;j++)
//         {
//             if (i%j==0)
//             {
//                 prime = 0;
//                 break;
//             }

//         }
//         if (prime==1)
//         printf("%d\t",i);
//     }
// }

// program to display all the leap years starting form 1900 to 2000

// #include<stdio.h>
// int main()
// {
//     int year;
//     printf("leap years starting from 1900-2000: \n");
//     for(year=1900;year<=2000;year++)
//     if((year%100!=0&&year%4==0))
//     printf("%d \t",year);
// }

// write a program to display the folloeing menu

/*a. to find the area of a circle
b. to chech if the given number is odd or even
c.to find the sum of n numbers
d.exit
*/

// #include<stdio.h>
// #include<stdlib.h>
// #define TRUE 1
// #define PI 3.145
// int main()
// {
//     int choice,n,N,i;
//     float r,a,num,sum;
//     printf("1. Find the area of a cirlce \n");
//     printf("2. check the given number is odd or even \n");
//     printf("3. find the sum of N numbers \n");
//     printf("4. Exit \n");
//     while(TRUE)
//     {
//         printf("enter a choice ");
//         scanf("%d",&choice);
//          switch(choice)
//          {
//             case 1:
//             printf("enter the value of radius");
//             scanf("%f",&r);
//             a = PI*r*r;
//             printf("Area of the circle is : %f \n",a);
//             break;
//             case 2:
//             printf("Enter a number :");
//             scanf("%d",&n);
//             if(n%2==0){
//                printf("Its even");
//                 }
//                else{
//                   printf("Its odd");
//             }
//             break;
//             case 3:
//             sum=0;
//             printf("Enter the nth number of which sum is to be found");
//             scanf("%d",&N);
//             printf("enter the %d numbers :",N);
//             for(i=1;i<N;i++)

//             {
//                scanf("%f",&num);
//                sum = sum+num;

//             }
//             printf("The sum upto Nth term is %d",sum);
//             break;
//             case 4:
//             exit(0);
//             default:
//             printf("wrong choice");

//          }
//             }
// }

// program to find the sum of nth numbers

// #include <stdio.h>

// int main()
// {
//     int N, i, num, sum = 0;

//     printf("Enter the value of N: "); // how many inputs
//     scanf("%d", &N);

//     printf("Enter %d numbers: \n", N);//value of the inputs
//     for (i = 0; i < N; i++)//loop for the N number of the inputs
//     {
//         scanf("%d", &num);
//         sum = sum + num;
//     }

//     printf("Sum of %d numbers is %d\n", N, sum);

//     return 0;
// }

// program to display all the prime numbers less than 100
//  #include<stdio.h>
//  int main()
//  {
//     int i,n,p;
//     for(i=2;i<=100;i++){
//        p=1;
//        for(n=2;n<=i/2;n++){
//           if(i%n==0){
//           p=0;
//           break;
//           }

//       }
//       if(p){
//          printf("%d \n",i);
//       }
//    }
// }

// program to print  numbers divisible by 3 between 1-100

// #include<stdio.h>
// int main()
// {
// int i;
// for(i=1;i<=100;i++){
//    if(i%3==0)
//    printf("%d \n",i);
// }
// }

// printing the patterns in c

// #include<stdio.h>
// int main()
// {
//    int i,j;
//    for(i=1;i<=5;i++){
//       for(j=1;j<=i;j++)
//       printf("%d \t",i);
//    printf("\n");
//    }
// }

// #include<stdio.h>
// int main()
// {
//    int i,j,p;
//    for(i=0;i<=8;i++){
//       for(j=0;j<=i;j++){
//          p=(i+2*j)+1;
//       printf("%d \t",p);
//       }

//     printf("\n");
//    }
// }

// program to print the following pattern

/* 5 10 15 20  25
   10 15 20 25 30
   15 20 25 30 35
   20 25 30 35 40
   25 30 35 40 45*/

// #include<stdio.h>
// int main()
// {
//    int i,j,sum;
//    for(i=1;i<=5;i++){
//       for(j=1;j<=5;j++){
//          sum = (i+j)*5;
//       printf("%d \t",sum);

//       }
//       printf("\n");
//    }
// }

// program to display the pattern

// #include<stdio.h>
// int main()
// {
//    int i,j,k;
//    for(i=1;i<=5;i++){
//       for(j=1;j<=10;j++){
//          k=i*j;
//          printf("%d \t",k);
//       }
//       printf("\n");
//    }
// }

// 1 in ascending upto 5

// #include<stdio.h>
// int main()
// {
//    int i,j;
//    for(i=1;i<=5;i++){
//       for(j=1;j<=i;j++)
//       printf("%d\t ",1);

//    printf("\n");
//    }
// }

// write a c program to print 5 positive integers and find the factorial

// #include<stdio.h>
// int main()
// {
//   int a,i,n,f;
//   for(a=1;a<=5;a++)
//   {
//    printf("\n Enter a positive integer :");
//    scanf("%d",&n);
//    if(n>0){
//       f=1;
//       for(i=1;i<=n;i++){
//          f=f*i;
//       }
//       printf("\n The value of the factorial is %d",f);
//    }
//   }
//   return 0;
// }

// C program to read the positive integer less than 20 and display its multiplication table

// #include<stdio.h>
// int main()
// {
//    int n,i,m;
//    printf("Enter a number ");
//    scanf("%d",&n);
//    if(n>0 && n<20)
//    {
//       for(i=1;i<=10;i++){
//          m=n*i;
//          printf("\n%d*%d=%d",i,n,m);
//       }
//       printf("\n");
//    }
//    else{
//       printf("the number is negative or not within the range");
//    }
//    return 0;

// }

// C program to display the sum of even numbers upto n terms

// #include <stdio.h>
// int main()
// {
//    int n, sum, i,j=2;
//    printf("Enter the nth term ");
//    scanf("%d", &n);
//    for (i = 1; i <= n; i++)
//    {
      
//          sum = sum + j;
//          j=j+2;
      
//    }
//          printf("%d", sum);
// }


//c program to find the sum of the even terms only upto  nth terms


// #include <stdio.h>

// int main()
// {
//     int sum = 0,n;
//     printf("enter the nth term");
//     scanf("%d",&n);

//     for (int i = 2; i <= n; i += 2) {
//         sum += i;
//     }

//     printf("Sum of even numbers upto %d is %d\n", n,sum);

//     return 0;
// }



// // program to print the first 10 terms of the folloeing series using for loop 1 5 9 13....
//   #include<stdio.h>
//   int main()
//   {
//       int i=1,j;
//       for(j=1;j<=10;j++){

//       printf("%d \n",i);
//       i=i+4;
//       }
      
//   }


// // program to read the four digit number and display it in the reverse order



// #include<stdio.h>
// int main()
// {
//       int n,s,r;
//       printf("enter the 4 digit number");
//       scanf("%d",&n);
//       if(n>1000&&n<9999){
//             s=0;
//       while(n>0){
//             r=n%10;
//             s=s*10+r;
//             n=n/10;
//       }
//       printf("The reverse number is %d",s);
//       }
//       else 
//       {
//       printf("Its not a 4 digit number ");
//       }
// }



// // C program to input an integer and check it is prime or not


// #include<stdio.h>
// int main()
// {
//       int n;
//       printf("Enter a number");
//       scanf("%d",&n);
//       for(i=1;i<=n;i++){
//             for(j=1;j<=n/2;j++)
//       }
// }