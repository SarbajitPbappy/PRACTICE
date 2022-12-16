#include <stdio.h>

int main()
{
    FILE *in, *out;
    int i, N;

    in = fopen("input.txt", "r");
    out = fopen("output.txt", "w");

    fscanf(in, "%d", &N);

    for (i = 1; i <= N; i++)
    {
        int j;
        for (j = 0; j < N - i; j++)
            fprintf(out, "  ");

        for (j = 0; j < N; j++)
            fprintf(out, "# ");

        fprintf(out, "\n");
    }

    fclose(in);
    fclose(out);

    return 0;
}