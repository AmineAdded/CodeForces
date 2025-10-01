#include <stdio.h>
#include <stdlib.h>

int main() {
    long long int x, n = 0, pos = 0;
    scanf("%lld", &x);

    x = llabs(x);

    if (x == 0) {
        printf("0\n");
        return 0;
    }

    while (pos < x || (pos - x) % 2 != 0) {
        n++;
        pos += n;
    }

    printf("%lld\n", n);
    return 0;
}
