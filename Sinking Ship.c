#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct {
    char name[11];
    char status[11];
    int priority;
    int originalIndex;
} Member;

void Tri(Member *T, int n) {
    int temp1, temp3;
    char temp2[11], temp4[11];
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(T[i].priority > T[j].priority || (T[i].priority == T[j].priority && T[i].originalIndex > T[j].originalIndex)) {
                // Swap priorities
                temp1 = T[i].priority;
                T[i].priority = T[j].priority;
                T[j].priority = temp1;

                // Swap original indices
                temp3 = T[i].originalIndex;
                T[i].originalIndex = T[j].originalIndex;
                T[j].originalIndex = temp3;

                // Swap names
                strcpy(temp2, T[i].name);
                strcpy(T[i].name, T[j].name);
                strcpy(T[j].name, temp2);

                // Swap statuses
                strcpy(temp4, T[i].status);
                strcpy(T[i].status, T[j].status);
                strcpy(T[j].status, temp4);
            }
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);
    Member *T = malloc(sizeof(Member) * n);
    for(int i = 0; i < n; i++) {
        scanf("%s %s", T[i].name, T[i].status);
        T[i].originalIndex = i;
        if(strcmp(T[i].status, "rat") == 0)
            T[i].priority = 0;
        else if(strcmp(T[i].status, "woman") == 0 || strcmp(T[i].status, "child") == 0)
            T[i].priority = 1;
        else if(strcmp(T[i].status, "man") == 0)
            T[i].priority = 2;
        else
            T[i].priority = 3;
    }
    Tri(T, n);
    for(int i = 0; i < n; i++)
        printf("%s\n", T[i].name);
    free(T);
    return 0;
}
