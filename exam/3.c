#include <stdio.h>
int num;
int w(int n, int *m){
    *m=*m * 10;
    n++;
    num=*m+n;
    return num;
    printf("W");
}
int main(){
    int a=5,b=5;
    num=w(a,&b);
    printf("%d %d %d",num,b,a);
}