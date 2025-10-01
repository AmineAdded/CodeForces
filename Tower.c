#include <stdio.h>
#include <stdlib.h>

void Tri(int *T, int n) {
    int temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (T[i] > T[j]) { // Sort in ascending order
                temp = T[i];
                T[i] = T[j];
                T[j] = temp;
            }
        }
    }
}

void solve(int *T, int n) {
    int maxLength = 1;
    int totalTowers = 0;

    int i = 0;
    while (i < n) {
        int length = 1;
        while (i + 1 < n && T[i] == T[i + 1]) {
            length++;
            i++;
        }
        if (length > maxLength) {
            maxLength = length;
        }
        totalTowers++;
        i++;
    }

    printf("%d %d\n", maxLength, totalTowers);
}

int main() {
    int n;
    scanf("%d", &n);
    int *T = malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
        scanf("%d", &T[i]);
    Tri(T, n);
    solve(T, n);
    free(T);
    return 0;
}
