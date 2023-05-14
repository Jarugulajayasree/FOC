#include <stdio.h>

int main() {
    int num = 18;
    long long factorial = 1;

    for(int i = 1; i <= num; i++) {
        factorial *= i;
    }

    printf("Factorial of %d is %lld", num, factorial);
    return 0;
}
