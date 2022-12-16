#include<stdio.h>
#include<stdbool.h>
#include<windows.h>
int winner(int n,int a[][4]){
    for(int i=1;i<=n;i++){
        if(a[i][1]==a[i][2] && a[i][2]==a[i][3] && a[i][1]!=-1){
            return a[i][1];
        }
    }
    for (int j = 1; j <= n; j++)
    {
        if (a[1][j] == a[2][j] && a[2][j] == a[3][j] && a[1][j] != -1)
        {
            return a[1][j];
        }
    }
    if(a[1][1]==a[2][2] && a[2][2]==a[3][3] && a[1][1]!=-1){
        return a[1][1];
    }
    return -1;
}
void printCell(int n,int a[][4]){
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (a[i][j] == -1)
            {
                printf(" ");
            }
            if(a[i][j]==1){
                printf("X");
            }
            if(a[i][j]==2){
                printf("O");
            }
            if (j < n)
            {
                printf("\t|\t");
            }
        }
        printf("\n");
        if (i < n)
        {
            printf("__________________________________");
        }
        printf("\n\n");
    }
}
int main(){
    int n=3;
    int a[4][4];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            a[i][j]=-1;
        }
    }
    int r,c;
    bool p1=true,p2=false;
    while(true){
        system("cls");
        printCell(n,a);
        if(p1){
            Flag:
            printf("Player 1 Turn(X),Enter Row & Column: ");
            scanf("%d %d",&r,&c);
            if(a[r][c]!=-1){
                printf("Wrong Choice!\n");
                goto Flag;
            }
            a[r][c]=1;
            p1=false;
            p2=true;
        }
        else{
            Flag2:
            printf("Player 2 Turn(O),Enter Row & Column: ");
            scanf("%d %d", &r, &c);
            if (a[r][c] != -1)
            {
                printf("Wrong Choice!\n");
                goto Flag2;
            }
            a[r][c] = 2;
            p2=false;
            p1=true;
        }
        if(winner(n,a)==1){
            printCell(n,a);
            printf("Player 1 Winner\n");
            break;
        }
        else if(winner(n,a)==2){
            printCell(n, a);
            printf("Player 2 Winner\n");
            break;
        }
    }
    if (winner(n, a) == -1)
    {
        printCell(n, a);
        printf("Draw\n");
       // break;
    }
}