#include <stdio.h>

int main()
{
    int n, sum = 0;
    FILE *input, *output;
    input = fopen("input.txt", "r");
    if (input == NULL)
    {
        printf("Unable to open file.");
        return 0;
    }
    fscanf(input, "%d", &n);
    int num;
    for (int i = 0; i < n; i++)
    {
        fscanf(input, "%d", &num);
        sum += num % 10;
    }
    output = fopen("output.txt", "w");
    if (output == NULL)
    {
        printf("Unable to open file.");
        return 0;
    }
    fprintf(output, "SUM=%d", sum);
    fclose(input);
    fclose(output);

    return 0;
}