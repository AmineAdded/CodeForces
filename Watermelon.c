#include <stdio.h>

int main() {
    int w;
    do
    {
        printf("Enter the weight of the watermelon: ");
        scanf("%d", &w);
    }while(w<1 || w >100);

    if (w>2 && w % 2 == 0)
        printf("YES\n");
    else
        printf("NO\n");
}
