#include<stdio.h>
#include<math.h>
struct point{
    float x,y;
}p1,p2,p3;
struct triangle{
    struct point A;
    struct point B;
    struct point C;
};
struct point centroid(struct triangle t)
{
    struct point ans;
    ans.x=(t.A.x+t.B.x+t.C.x)/3;
    ans.y=(t.A.y+t.B.y+t.C.y)/3;
    return ans;
};
int main()
{
    scanf("%f %f %f %f %f %f", &p1.x,&p1.y,&p2.x,&p2.y,&p3.x,&p3.y);
    struct triangle t={p1,p2,p3};
    struct point cent;
    cent=centroid(t);
    printf("Centroid Of Triangle is: (%.2f,%.2f)\n",cent.x,cent.y);

}