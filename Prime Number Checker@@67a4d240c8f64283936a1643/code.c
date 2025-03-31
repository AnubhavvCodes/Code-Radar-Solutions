#include <math.h>

int isPrime(int n) {
    if (n <= 1) {
        return 0; // 1 and numbers less than 1 are not prime
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return 0; // If divisible, it's not prime
        }
    }
    return 1; // If no divisors found, it's prime
}
