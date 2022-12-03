#include <stdio.h>
#include<math.h>
int i_love_digit_7(int *arr, int n)
{
    int love = 0;
    for (int i = 0; i < n; i++)
    {
        while (arr[i])
        {
            int loving_digit = arr[i] % 10;
            if (loving_digit == 7)
            {
                love++;
            }
            arr[i] /= 10;
        }
    }
    return love;
}
int main()
{

    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int h=ceil(n/2);
    if (i_love_digit_7(arr,n) >= h)
    {
        printf("Beautiful");
    }
    else
    {
        printf("Ugly");
    }
}