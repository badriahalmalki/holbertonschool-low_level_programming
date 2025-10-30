#incloud "main.h"

int is_prime_number(int n)
int n;

do {
    printf("Input a positive integer greater than 1: ");
            scanf("%d", &n);

    if (n <= 1)
        printf("Invalid input. Try again.\n");
} while (n <= 1);


if (IsPrime(n))
    printf("%d is a prime number.\n", n);
else 
    printf("%d is not a prime number.\n", n);

return 0;