#include <stdio.h>

int main() {
   int n, i, max=0, num;

   printf("Enter the value of n: ");
   scanf("%d", &n);

   for (i=1; i<=n; i++) {
      printf("Enter integer number %d: ", i);
      scanf("%d", &num);

      if (num > max) {
         max = num;
      }
   }

   printf("The biggest number is %d\n", max);

   return 0;
}
