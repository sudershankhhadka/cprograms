#include <stdio.h>

int main() {
   int num = 42;   // declare an integer variable and initialize it to 42
   int *p;         // declare a pointer variable that can point to an integer

   p = &num;       // assign the address of num to the pointer variable p

   printf("Value of num: %d\n", num);   // output the value of num
   printf("Address of num: %p\n", &num);   // output the address of num
   printf("Value of p: %p\n", p);   // output the value of p, which is the address of num
   printf("Value pointed to by p: %d\n", *p);   // output the value pointed to by p, which is the value of num

   return 0;
}
