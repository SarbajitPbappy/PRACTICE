#include <stdio.h>
int main()
{
    int x , y;
    int rows;
    printf("Enter the number of rows = ");
    scanf("%d", &rows);
    for (x = 1; x <= rows; ++x)
    {
        for (y = 1; y <= x; ++y)
        {
            if ((y == 1) || (y == x) || (x == rows))
            {
                // Print star
                printf("#");
            }
            else
            {
                // Print space
                printf(" ");
            }
        }
        // Print new line
        printf("\n");
    }
    return 0;
}