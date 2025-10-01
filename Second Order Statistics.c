#include<stdio.h>
#include<stdlib.h>
void Tri(int *T,int m) {
    int Temp;
    for (int i = 0; i < m - 1; i++) {
        for (int j = i + 1; j < m; j++) {
            if (T[i] >= T[j]) {
                Temp = T[i];
                T[i] = T[j];
                T[j] = Temp;
            }
        }
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int *T=malloc(sizeof(int)*n);
    for(int i=0;i<n;i++)
        scanf("%d",&T[i]);
    Tri(T,n);
    if(n==1)
    {
        printf("NO");
        return 0;
    }
    if(T[1]>T[0])
        printf("%d",T[1]);
    else
    {
        int i = 1;
        while (i < n && T[i] == T[0]) {
            i++;
        }
        if (i < n) {
            printf("%d", T[i]);
        } else {
            printf("NO");
        }
    }
    return 0;
}
