#include<stdio.h>
#include<stdlib.h>
#define MIN(a,b) ((a)<=(b)?(a):(b))

int main()
{
    int n, m, a, b, grid[51][51], min_count, count;
    scanf("%d %d", &n, &m);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &grid[i][j]);
        }
    }
    
    scanf("%d %d", &a, &b);
    
    min_count = n * m;
    
    // Essayer toutes les positions possibles pour le rectangle a x b
    for (int i = 0; i <= n - b; i++) {
        for (int j = 0; j <= m - a; j++) {
            count = 0;
            for (int L = i; L < i + b; L++) {
                for (int k = j; k < j + a; k++) {
                    if (grid[L][k] == 1) {
                        count++;
                    }
                }
            }
            min_count = MIN(count, min_count);
        }
    }

    // Essayer toutes les positions possibles pour le rectangle b x a (inversé)
    for (int i = 0; i <= n - a; i++) {
        for (int j = 0; j <= m - b; j++) {
            count = 0;
            for (int L = i; L < i + a; L++) {
                for (int k = j; k < j + b; k++) {
                    if (grid[L][k] == 1) {
                        count++;
                    }
                }
            }
            min_count = MIN(count, min_count);
        }
    }
    
    printf("%d\n", min_count);
    
    return 0;
}
