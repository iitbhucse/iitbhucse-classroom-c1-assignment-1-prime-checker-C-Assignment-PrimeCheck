#include <stdio.h>
#include <math.h>

int is_prime(int n) {
    if (n <= 1) return 0;
    if (n == 2) return 1;
    if (n % 2 == 0) return 0;
    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int n;
    scanf("%d", &n);  // ✅ Reads from stdin, compatible with < input.txt
    if (is_prime(n)) {
        printf("Prime\n");
    } else {
        printf("Not Prime\n");
    }
    return 0;
}
