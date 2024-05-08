#include <stdio.h>

int main() {
    int N, i, j, space;
    scanf("%d", &N);
    for(i = N-1; i >= 1; i--) {
        for(j = 1; j <= N*2; j++) {
            if(j <= i || j > N*2 - i) {
                printf("#");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    for(i = 1; i < N; i++) {
        for(j = 1; j <= N*2; j++) {
            if(j <= i || j > N*2-i ) {
                printf("#");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}
