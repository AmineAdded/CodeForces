#include<stdio.h>

int main() {
    long long int n;
    scanf("%lld", &n);

    char* names[] = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
    int i = 0;
    long long int count = 1;
    while (n > count * 5) {
        n -= count * 5;
        count *= 2;
    }

    int index = (n - 1) / count;
    printf("%s\n", names[index]);

    return 0;
}
