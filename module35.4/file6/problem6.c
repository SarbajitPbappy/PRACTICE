#include <stdio.h>
#include <conio.h>

int main()
{
    int year;
    FILE *input, *output;
    input = fopen("input.txt", "r");
    output = fopen("output.txt", "a");
    fscanf(input, "%d", &year);
    if(year<1582){
        if(year%4==0){
            fprintf(output, "%d-->YES\n", year);
        }
    }
    else if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        fprintf(output, "%d-->YES\n",year);
    }
    else
    {
        fprintf(output, "%d-->NO\n", year);
    }
    fclose(input);
    fclose(output);
    return 0;
}