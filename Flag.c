#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    char grid[n][m + 1];

    for (int i = 0; i < n; i++) {
        scanf("%s", grid[i]);
    }

    int valid = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m - 1; j++) {
            if (grid[i][j] != grid[i][j + 1]) {
                valid = 0;
                break;
            }
        }
        if (i < n - 1 && grid[i][0] == grid[i + 1][0]) {
            valid = 0;
            break;
        }
    }

    if (valid)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
