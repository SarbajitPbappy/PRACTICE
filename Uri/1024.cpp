#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main() {
    int T;
    scanf("%d", &T);
    getchar();
    while (T--) {
        char str[1005], str1[1005];
        fgets(str, 1005, stdin);
        int k = strlen(str) - 1;
        for (int i = 0; i < k; i++) {
            if (isalpha(str[i])) {
                str[i] = str[i] + 3;
            }
        }
        int n = 0;
        for (int j = k - 1; j >= 0; j--) {
            str1[n] = str[j];
            n++;
        }
        str1[n] = '\0';
        int l = k / 2;
        for (int i = l; i < k; i++) {
            str1[i] = str1[i] - 1;
        }
        printf("%s\n", str1);
    }
    return 0;
}
