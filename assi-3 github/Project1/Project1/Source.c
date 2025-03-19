#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "is_prime.h"

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    const char* result = is_prime(num);
    printf("%s\n", result);

    return 0;
}
