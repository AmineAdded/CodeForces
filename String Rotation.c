#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    long long int n, x;
    scanf("%lld %lld", &n, &x);

    char *s = (char *)malloc((n + 1) * sizeof(char));
    char *t = (char *)malloc((n + 1) * sizeof(char));

    scanf("%s %s", s, t);

    char *result = (char *)malloc((n + 1) * sizeof(char));

    x = x % n;

    strncpy(result, s + n - x, x);
    strncpy(result + x, s, n - x);
    result[n] = '\0';

    long long int nb = 0;
    for (int i = 0; i < n; i++) {
        if (result[i] != t[i]) {
            nb++;
        }
    }

    printf("%lld\n", nb);

    free(s);
    free(t);
    free(result);

    return 0;
}
