#include "is_prime.h"

const char* is_prime(int num) {
    static const char* NOT_PRIME = "Not Prime";
    static const char* PRIME = "Prime";

    if (num <= 1) {
        return NOT_PRIME;
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return NOT_PRIME;
        }
    }

    return PRIME;
}
