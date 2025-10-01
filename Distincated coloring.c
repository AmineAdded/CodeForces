#include <stdio.h>
long long int min(long long int x,long int y)
{
    if(x<=y)
        return x;
    return y;
}
int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        long long int n, m, k;
        scanf("%lld %lld %lld", &n, &m, &k);
        printf("%lld\n",min(n,k)*min(m,k));
    }

    return 0;
}

