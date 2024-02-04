// Online C compiler to run C program online
#include <stdio.h>
int calc(int x, int f)
{
    if (x == 50)
    {
        return f * .5;
    }
    else if (x == 25)
    {
        return f * .25;
    }
    else
        return f * .1;
}
int main()
{
    int waiver;
    scanf("%d", &waiver);
    int semester_fee;
    scanf("%d", &semester_fee);
    int a = calc(waiver);
    printf("%d", a);
}