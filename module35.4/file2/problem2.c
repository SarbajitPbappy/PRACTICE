#include <stdio.h>

int main()
{
    int n, i;
    FILE *input, *output;
    input = fopen("input.txt", "r");
    output = fopen("output.txt", "w");
    if (input == NULL || output == NULL)
    {
        printf("Error in opening files!");
        return 0;
    }

    fscanf(input, "%d", &n);
    for (i = 1; i <= n; i++)
    {
        fprintf(output, "%d ", i);
    }

    fclose(input);
    fclose(output);
    return 0;
}