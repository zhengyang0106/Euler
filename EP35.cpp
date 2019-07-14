/*************************************************************************
	> File Name: EP35.cpp
	> Author:zhengyang 
	> Mail:1021606521@qq.com 
	> Created Time: 2019年06月25日 星期二 23时26分21秒
 ************************************************************************/

#include<iostream>
using namespace std;
 

#include <stdio.h>

#include <inttypes.h>

#include <math.h>

 

#define MAX_RANGE 9999999

#define MAX_N 1000000

 

int32_t isPrime[MAX_RANGE+ 5] = {0};
int32_t prime[MAX_RANGE+ 5] = {0};
void initPrime() {
    for (int32_t i = 2; i <= MAX_RANGE; i++) {
        if (!isPrime[i]) {prime[++prime[0]] = i;}
        for (int32_t j = 1; j <= prime[0]; j++) {
            if (prime[j] * i >= MAX_RANGE) break;
            isPrime[prime[j] * i] = 1;
            if (i % prime[j] == 0) break;
        }
    }
}
 
bool isCircularPrime(int32_t n) {
    if (isPrime[n] != 0) return false;
    int32_t x = n, h, j;
    h = (int32_t)pow(10, floor(log10(n)));
    j = (int32_t)(floor(log10(n))) + 1;
    for (int32_t i = 0; i < j; i++) {
        x = x / 10 + (x % 10) * h;
        if (isPrime[x] != 0) return false;
    }
    return true;
}
 

int32_t solve() {
    int32_t many = 0;
    for (int32_t i = 1; i <= prime[0]; i++) {
        if (prime[i] > MAX_N) break;
        if (isCircularPrime(prime[i])) many++;
    }
    return many;
}

int32_t main() {
    initPrime();
    int32_t many = solve();
    printf("%d\n", many);
    return 0;
}
