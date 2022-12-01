// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     if(n%5==0)
//     {
//         printf("%d\n",n/5);
//     }
//     else if(n%5!=0)
//     {
//         printf("%d\n",(n/5)+1);
//     }
// }
main(n){scanf("%d",&n);printf("%d",1+~-n/5);}