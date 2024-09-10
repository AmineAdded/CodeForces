#include <stdio.h>
 
int main() {
    FILE *inputFile = fopen("input.txt", "r");
    FILE *outputFile = fopen("output.txt", "w");
 
    if (inputFile == NULL || outputFile == NULL) {
        perror("Error opening file");
        return 1;
    }
 
    char door[10];
    int rail;
 
    fscanf(inputFile, "%s", door);
    fscanf(inputFile, "%d", &rail);
 
    if (rail == 1) {
        if (door[0] == 'f') {
            fprintf(outputFile, "L\n"); 
        } else {
            fprintf(outputFile, "R\n");
        }
    } else { // rail == 2
        if (door[0] == 'f') {
            fprintf(outputFile, "R\n"); 
        } else {
            fprintf(outputFile, "L\n"); 
        }
    }
 
    fclose(inputFile);
    fclose(outputFile);
 
    return 0;
}
