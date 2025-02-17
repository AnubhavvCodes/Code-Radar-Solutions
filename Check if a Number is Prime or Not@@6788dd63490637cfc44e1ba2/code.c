#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);

    if (n < 2) {
        printf("NoTPrime");
    } else {
        i = 2;
        if (n == 2) {
            printf("Prime");
        } else {
            if (n % i == 0) {
                printf("Prime Number");
            } else {
                i = 3;
                if (n % i == 0 && n != 3) {
                    printf("NoT Prime");
                } else {
                    i = 5;
                    if (n % i == 0 && n != 5) {
                        printf("NoT Prime");
                    } else {
                        printf("Prime");
                    }
                }
            }
        }
    }

    return 0;
}
