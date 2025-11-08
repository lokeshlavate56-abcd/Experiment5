// Lokesh Lavate,UIN:-251P083,YEAR:-F.E,DIV.D
#include <stdio.h>

long long factorial_iterative(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

long long factorial_recursive(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial_recursive(n - 1);
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial of negative number doesn't exist.\n");
    } else {
        printf("\nFactorial of %d (Iterative) = %lld\n", num, factorial_iterative(num));
        printf("Factorial of %d (Recursive) = %lld\n", num, factorial_recursive(num));
    }

    return 0;
}