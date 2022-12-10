#include<stdio.h>
#include<math.h>
struct point{
    float x;
    float y;
}p1,p2;
struct point midPoint(struct point m,struct point n)
{
    struct point ans;
    ans.x=(m.x+n.x)/2; 
    ans.y=(m.y+n.y)/2;
    return ans;
};
int main()
{
    scanf("%f %f %f %f",&p1.x,&p1.y,&p2.x,&p2.y);
    struct point mid;
    mid=midPoint(p1,p2);
    printf("%.2f, %.2f",mid.x,mid.y);
}