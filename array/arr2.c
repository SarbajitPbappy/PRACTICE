#include <stdio.h>
int main()
{
    int arr[5], i,even=0,odd=0;

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0;i<5;i++)
    {
        if(arr[i]%2==0)
        {
            even++;
        }
        else odd++;
    }
    printf("NUMBER OF EVEN: %d\n",even);
printf("NUMBER OF ODD: %d\n",odd);
}