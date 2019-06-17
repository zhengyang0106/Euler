/*************************************************************************
	> File Name: EP12.cpp
	> Author:zhengyang 
	> Mail:1021606521@qq.com 
	> Created Time: 2019年06月16日 星期日 20时01分09秒
 ************************************************************************/
//考试会考 线性筛  这类题
#include<iostream>
using namespace std;
#define MAX_N 100000
int prime[MAX_N + 5];
int f[MAX_N + 5],cnt[MAX_N + 5];


int main() {
    f[1] = 1;
    for (int i = 2; 2 * i <= MAX_N; i++) {
        if (!prime[i]) {
            prime[++prime[0]] = i;
            f[i] = 2;
            cnt[i] = 1;
        }
        for (int j = 1; prime[j] * i <= MAX_N; j++) {
            prime[prime[j] * i] = 1;
            if (i % prime[j] == 0) {
                f[prime[j] * i] = f[i] / (cnt[i] + 1) * (cnt[i] + 2);
                cnt[prime[j] * i] = cnt[i] + 1;
                break;
            }  else {
                f[prime[j] * i]  = f[prime[j]] * f[i];
                cnt[prime[j] * i] = 1;
            }
        }
    }
    long long n = 1;
    while (true) {
        int f_nums;
        if (n % 2) {
            f_nums = f[n] * f[(n + 1) / 2];
        } else {
            f_nums = f[n / 2] * 
        }
    }


    return 0;
}
