#include<stdio.h>
#include<stdlib.h>

typedef struct {
    int x;
    int t;
} House;

void sort(House *T, int n) {
    House temp;
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(T[i].x > T[j].x) {
                temp = T[i];
                T[i] = T[j];
                T[j] = temp;
            }
        }
    }
}

int main() {
    int n, t, ans = 2;
    scanf("%d %d", &n, &t);

    House *T = malloc(sizeof(House) * n);

    for(int i = 0; i < n; i++) {
        scanf("%d %d", &T[i].x, &T[i].t);
    }

    sort(T, n);
    int j = 1;
    for(int i = 0; i < n-1; i++) {
        float sup = T[i].x + ((float)T[i].t / 2);
        float inf = T[j].x - ((float)T[j].t / 2);

        if(sup + t < inf)
            ans++;
        if(inf - t > sup)
            ans++;
        if(sup + t == inf)
            ans++;
        j++;
    }
    printf("%d\n", ans);

    free(T);

    return 0;
}
