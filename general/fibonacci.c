Fibonacci series C program using for loop
/* Fibonacci series program in C language */
#include <stdio.h>
 
int main()
{
  int n, first = 0, second = 1, next, c;
 
  printf("Enter the number of terms\n");
  scanf("%d", &n);
 
  printf("First %d terms of Fibonacci series are:\n", n);
 
  for (c = 0; c < n; c++)
  {
    if (c <= 1)
      next = c;
    else
    {
      next = first + second;
      first = second;
      second = next;
    }
    printf("%d\n", next);
  }
 
  return 0;
}
Output of program:
Fibonacci series C program output

Fibonacci series C program using recursion
#include<stdio.h>
 
int f(int);
 
int main()
{
  int n, i = 0, c;
 
  scanf("%d", &n);
 
  printf("Fibonacci series terms are:\n");
 
  for (c = 1; c <= n; c++)
  {
    printf("%d\n", f(i));
    i++;
  }
 
  return 0;
}
 
int f(int n)
{
  if (n == 0 || n == 1)
    return n;
  else
    return (f(n-1) + f(n-2));
}
The recursive method is less efficient as it involves repeated function calls and there are chances of stack overflow as the function will frequently be called for calculating larger Fibonacci numbers.
