#include<stdio.h>

int sum_of_n_numbers(int n) {
    if (n == 0) {
        return 0;
    }
    return n + sum_of_n_numbers(n - 1);
}

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    printf("Sum of first %d natural numbers is %d\n", n, sum_of_n_numbers(n));
    return 0;
}