#include <stdio.h>
#include <math.h>

int main() {
   float x, term, sum = 0;
   int i, j, sign;

   printf("Enter the value of x in degrees: ");
   scanf("%f", &x);

   x = x * (3.14159 / 180.0);

   for (i = 1, sign = 1, term = x; i <= 10; i++, sign = -sign) {
      for (j = 1; j <= (2 * i - 1); j++) {
         term = term * x / j;
      }
      sum = sum + sign * term;
   }

   printf("sin(%.2f) = %.4f\n", x * (180.0 / 3.14159), sum);

   return 0;
}
