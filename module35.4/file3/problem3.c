#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T;
    FILE *in;
    FILE *out;
    int n;
    int i, j,k;

    in = fopen("input.txt", "r");   
    out = fopen("output.txt", "w");
    fscanf(in, "%d", &T);

    for (i = 1; i <= T; i++)
    {
        fscanf(in, "%d", &n);

        if (n > 0)
        {
            for (j = n; j >= -n; j--)
            {
                fprintf(out, "%d ", j);
            }
            fprintf(out, "\n");
        }
        else if(n<0)
        {
            for (k = -n; k <= n; k++)
            {
                fprintf(out, "%d ", k);
            }
            fprintf(out, "\n");
        }
    }

    fclose(in);
    fclose(out);

    return 0;
}