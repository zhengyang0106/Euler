/*************************************************************************
	> File Name: EP02-1.c
	> Author:zhengyang 
	> Mail:1021606521@qq.com 
	> Created Time: 2019年05月19日 星期日 18时14分43秒
 ************************************************************************/

#include<stdio.h>

#define MAX 44
#define MAX_M 40000000
int fib[MAX + 5];

int main() {
    int n = 2;
    fib[1] = 1; fib[2] = 2;
    while (fib[n] + fib[n-1]  <= MAX_M) {
        fib[n+1] = fib[n] + fib[n-1];
        n++;
    }
    long long sum = 0;
    for (int i =1; i <= n; i++){
        if(fib[i] & 1) continue;
        sum += fib[i];

    }
    printf("%lld\n", sum);
    return 0;
}
