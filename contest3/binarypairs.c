#include <stdio.h>
int main()
{
    int test;
    scanf("%d", &test);
    for (int k = 0; k < test; k++)
    {
        int n, val = 0;
        scanf("%d", &n);
        char b_str[n];
        scanf("%s", b_str);
        for (int i = 0; i < n; i++)
        {
            if ((b_str[i] == '0' && b_str[i + 1] == '1') || (b_str[i] == '1' && b_str[i + 1] == '0'))
            {
                val++;
            }
        }
        printf("%d\n", val);
    }
}