#include<stdio.h>

typedef struct
{
    long long int x;
    long long int y;
    long long int m;
} Query;

int main()
{
    long long int n, q, TimeShop, TimeDelivery;
    scanf("%lld", &n);

    long long int Ta[n], prefixSum[n+1];
    prefixSum[0] = 0;

    for(int i = 0; i < n; i++)
    {
        scanf("%lld", &Ta[i]);
        prefixSum[i+1] = prefixSum[i] + Ta[i];
    }

    long long int totalSum = prefixSum[n];

    scanf("%lld", &q);
    Query Tq[q];

    for(int i = 0; i < q; i++)
        scanf("%lld %lld %lld", &Tq[i].x, &Tq[i].y, &Tq[i].m);

    for(int i = 0; i < q; i++)
    {
        TimeDelivery = prefixSum[Tq[i].m] + Tq[i].y;

        if (Tq[i].x > totalSum)
            TimeShop = Tq[i].x;
        else
            TimeShop = totalSum;

        printf("%lld\n", (TimeShop > TimeDelivery) ? TimeDelivery : TimeShop);
    }

    return 0;
}
