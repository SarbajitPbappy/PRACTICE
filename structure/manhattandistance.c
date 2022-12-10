#include<stdio.h>
#include<math.h>
struct distance{
    int x,y;
}p1,p2;
int manhattan(struct distance p1,struct distance p2)
{
    return abs(p1.x - p2.x)+abs(p1.y - p2.y);
}
int main()
{
    scanf("%d %d %d %d",&p1.x,&p1.y,&p2.x,&p2.y);
    int ans=manhattan(p1,p2);
    printf("Manhattan Distance= %d\n",ans);
    return 0;
}