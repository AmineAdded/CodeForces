#include <stdio.h>
#include <stdlib.h>

typedef struct {
    long long int a;
    int b;
} Container;

void Tri(Container *T, long long int m) {
    Container Temp;
    for (int i = 0; i < m - 1; i++) {
        for (int j = i + 1; j < m; j++) {
            if (T[i].b <= T[j].b) {
                Temp = T[i];
                T[i] = T[j];
                T[j] = Temp;
            }
        }
    }
}

int main() {
    long long int n;
    int m;
    scanf("%lld %d", &n,&m);
    Container *T = malloc(sizeof(Container) * m);
    for (int i = 0; i < m; i++) {
        scanf("%lld %d", &T[i].a, &T[i].b);
    }
    Tri(T, m);

    long long int S=0,i=0;
    while(n!=0 && m!=0)
    {
        if(T[i].a<=n)
        {
            S+=T[i].a*T[i].b;
            n-=T[i].a;
            m--;
        }
        else
        {
            S+=n*T[i].b;
            n=0;
        }
        i++;
    }

    printf("%lld",S);

    free(T);
    return 0;
}
