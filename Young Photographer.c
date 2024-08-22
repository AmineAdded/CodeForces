#include<stdio.h>
#include<stdlib.h>

int min(int a, int b) {
    return (a <= b) ? a : b;
}

int max(int a, int b) {
    return (a >= b) ? a : b;
}

int main() {
    int n, x, a, b, count = 0;
    int left = 0, right = 1000;
    scanf("%d %d", &n, &x);

    for (int i = 0; i < n; i++) {
        scanf("%d %d", &a, &b);
        int segment_min = min(a, b);
        int segment_max = max(a, b);
        left = max(left, segment_min);
        right = min(right, segment_max);
    }

    if (left <= right) {
        if (x < left) {
            count += left - x;
        } else if (x > right) {
            count += x - right;
        }
        printf("%d\n", count);
    } else {
        printf("-1\n");
    }

    return 0;
}
