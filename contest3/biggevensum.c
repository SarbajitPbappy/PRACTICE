#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d", &t);

    int arr[t + 5], even[t], odd[t];

    for (int i = 0; i < t; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < t; i++)
    {
        for (int j = 1; j < t; j++)
        {
            if (arr[j] > arr[j - 1])
            {
                int temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            }
        }
    }

    int ev = 0;
    for (int i = 0; i < t; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even[ev] = arr[i];
            ev++;
        }
    }

    int od = 0;
    for (int i = 0; i < t; i++)
    {
        if (arr[i] % 2 != 0)
        {
            odd[od] = arr[i];
            od++;
        }
    }

    int a = 0, b = 0;
    a = even[0];
    for (int i = 1; i < ev; i++)
    {
        if (even[i] != a)
        {
            b = even[i];
            break;
        }
    }

    int c = 0, d = 0;

    if (od >= 2)
    {

        c = odd[0];
        for (int i = 1; i < od; i++)
        {
            if (odd[i] != d)
            {
                c = odd[i];
                break;
            }
        }
    }

    int sum1 = (a + b);
    int sum2 = (c + d);

    if (sum1 >= sum2)
    {
        printf("%d", sum1);
    }

    else
        printf("%d", sum2);

    return 0;
}