#include<stdio.h>
#include<math.h>
struct complx{
    double real;
    double imag;
};
void print(struct complx num)
{
    //printf("Complex Number %d\n",n);
    printf("Sum = %.1lf + %.1lfi\n",num.real,num.imag);
}
// char sign(char a,char b)
// {
//     if(a=='+' && b=='-')
//     return '-';
// }
struct complx add_cmplx(struct complx a,struct complx b)
{
    struct complx new;
    new.real = a.real + b.real;
    new.imag = a.imag + b.imag;
    return new;
};
struct complx multiply(struct complx m, struct complx n)
{
    struct complx mul;
    mul.real=m.real*n.real - m.imag*n.imag;
    mul.imag=m.imag*n.real + m.real*n.imag;
    return mul;
};
int main()
{

    struct complx c1 = { 3,4 };
    struct complx c2 = { 4,3 };

    print(multiply(c1, c2));
    printf("\n");
    print(add_cmplx(c1,c2));
}
// int n,i;
// scanf("%d",&n);
// for(i=1;i<=n;i++)
// {
//     scanf("%lf %lf",&cmplx[i].real,&cmplx[i].imag);
//     fflush(stdin);
// }
// for(i=1;i<=n;i++)
// print(c1,c2);