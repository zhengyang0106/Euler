/*************************************************************************
	> File Name: EP03-1.c
	> Author:zhengyang 
	> Mail:1021606521@qq.com 
	> Created Time: 2019年05月19日 星期日 19时00分28秒
 ************************************************************************/

#include<stdio.h>

#define N 600851475143LL



int main() {
    long long num = N, ans, i = 2;
    while (i * i) {
        if(num % i == 0) ans = i;// ans 记录最大素因子
        while (num % i == 0) num /= i;
        i++;
    }
    if (num != 1) ans = num;// num 为什么一定是素数
    printf("%lld\n", ans);


    return 0;

