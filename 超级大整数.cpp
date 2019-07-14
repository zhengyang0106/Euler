/*************************************************************************
	> File Name: 超级大整数.cpp
	> Author:zhengyang 
	> Mail:1021606521@qq.com 
	> Created Time: 2019年07月02日 星期二 11时47分44秒
 ************************************************************************/
#include <stdio.h>
#include <string.h>
#define max 5000

int mul[max + 5] = {0};
int result[max + 5] = {0};

int main() {
    int x;
    while (scanf("%d", &x) != EOF) {
        if (x <= 1 || x >= 500) break;
        memset(mul, 0, sizeof(mul));
        memset(result, 0, sizeof(result));
        mul[0] = mul[1] = 1;
        result[0] = result[1] = 1;
        for (int i = 1; i <= x; i++) {
            for (int j = 1; j <= mul[0]; j++) {
                mul[j] *= i;
            }
            for (int j = 1; j <= mul[0]; j++) {
                if (mul[j] < 10) continue;
                mul[j + 1] += mul[j] / 10;
                mul[j] %= 10;
                if (j == mul[0]) ++mul[0];
            }
        }

        for(int i = 1; i <= mul[0]; i++) {
            if (mul[i] == 0) continue;
            for (int j = 1; j <= result[0]; j++) {
                result[j] *= mul[i];
            }
            for (int j = 1; j <= result[0]; j++) {
                if (result[j] < 10) continue;
                result[j + 1] += result[j] / 10;
                result[j] %= 10;
                if (j == result[0]) ++result[0];
            }
        }
        
        for (int i = result[0]; i >= 1; i--) {
            printf("%d", result[i]);
        }
        printf("\n");
    }
    return 0;
}
