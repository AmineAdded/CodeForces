#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to compare two strings for qsort
int compare(const void *a, const void *b) {
    return strcmp(*(const char **)a, *(const char **)b);
}

int main() {
    char *s = malloc(sizeof(char) * 101);  // Allocate memory for input string
    scanf("%s", s);  // Read the input string

    int n;
    scanf("%d", &n);  // Read the number of visited pages

    // Allocate memory for the array of strings
    char **pages = malloc(sizeof(char *) * n);
    for (int i = 0; i < n; i++) {
        pages[i] = malloc(sizeof(char) * 101);  // Allocate memory for each page
        scanf("%s", pages[i]);  // Read each page
    }

    // Sort the pages lexicographically
    qsort(pages, n, sizeof(char *), compare);

    // Find the first page that starts with `s`
    for (int i = 0; i < n; i++) {
        if (strncmp(pages[i], s, strlen(s)) == 0) {
            printf("%s\n", pages[i]);
            // Free the allocated memory
            free(s);
            for (int j = 0; j < n; j++) {
                free(pages[j]);
            }
            free(pages);
            return 0;  // Exit after finding the first valid page
        }
    }

    // If no page was found, print the input string
    printf("%s\n", s);

    // Free the allocated memory
    free(s);
    for (int i = 0; i < n; i++) {
        free(pages[i]);
    }
    free(pages);

    return 0;
}
