#include <stdio.h>
 
int main() {
    // Open input and output files
    FILE *inputFile = fopen("input.txt", "r");
    FILE *outputFile = fopen("output.txt", "w");
 
    int n, k;
    // Read n and k
    fscanf(inputFile, "%d %d", &n, &k);
 
    int a[n];
    // Read the state of the sectors (0 or 1)
    for (int i = 0; i < n; i++) {
        fscanf(inputFile, "%d", &a[i]);
    }
 
    // Adjust k to be zero-indexed (since the input is 1-indexed)
    k = k - 1;
 
    // Loop clockwise from sector k
    for (int i = 0; i < n; i++) {
        int index = (k + i) % n;
        if (a[index] == 1) {
            // Output the 1-indexed sector number
            fprintf(outputFile, "%d\n", index + 1);
            break;
        }
    }
 
    // Close the files
    fclose(inputFile);
    fclose(outputFile);
 
    return 0;
}