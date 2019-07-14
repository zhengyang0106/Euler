/*************************************************************************
	> File Name: 炒鸡大整数.cpp
	> Author:zhengyang 
	> Mail:1021606521@qq.com 
	> Created Time: 2019年07月02日 星期二 14时14分08秒
 ************************************************************************/

#include<iostream>
using namespace std;
#include<string.h>
#include<stdio.h>
#define MAX_N 5000
int num[MAX_N + 5] = {0};
int sum[MAX_N + 5] = {0};
int main() {
    int x;
    while(~(scanf("%d", &x))) {
        if (x < 0 || x > 500) break;
        memset(num, 0, sizeof(num));
        memset(sum, 0, sizeof(sum));
     num[0] = num[1] = 1;
     sum[0] = sum[1] = 1;
        for (int i = 1; i <= x; i++) {
            for (int j = 1; j <= num[0]; j++) {
                num[j] *= i;
            }
            for (int j = 1; j <= num[0]; j++) {
                if (num[j] < 10) continue;
                num[j + 1] += num[j] / 10;
                num[j] %=  10;
                num[0] += (num[0] == j);
            }
        }

        for (int i = 1; i <= num[0]; i++) {
            if (num[i] == 0) continue;
            for(int j = 1; j <= sum[0]; j++) {
                sum[j] *= num[i];
            }
            for (int j = 1; j <= sum[0]; j++) {
                if (sum[j] < 10) continue;
                sum[j + 1] += sum[j] / 10;
                sum[j] %= 10;
                sum[0] += (sum[0] == j);
            }
        }
        for (int i = sum[0]; i >= 1; i--) {
            cout << sum[i];
        }
        cout << endl;
        
    }

    return 0;
}
