#include <stdio.h>
void printstar();

int main()
{
   int n;
   printf("Enter the number stars:\n");
   scanf("%d", &n);

   printstar(n);
}

void printstar(int n)
{
   for (int i = 1; i <= n; i++)
   {
      printf("%c  ", '*');
   }
}