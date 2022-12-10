#include<stdio.h>
void func(int x,int y,int* l, int* s)
{
    *l=x>y?x:y;
    *s=x<y?x:y;
}
int main()
{
    int p,q;
    int large,small;
    scanf("%d %d",&p,&q);
    func(p,q,&large,&small);
    printf("Large=%d Small=%d\n",large,small);
}