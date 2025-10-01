#include <stdio.h>

int main()
{
    int indBall, indCup1, indCup2;

    FILE *input = fopen("input.txt", "r");
    fscanf(input, "%d", &indBall);
    for (int i = 0; i < 3; i++)
    {
        fscanf(input, "%d %d", &indCup1, &indCup2);
        if (indBall == indCup1)
            indBall = indCup2;
        else if (indBall == indCup2)
            indBall = indCup1;
    }
    fclose(input);

    FILE *output = fopen("output.txt", "w");
    fprintf(output, "%d", indBall);
    fclose(output);

    return 0;
}
