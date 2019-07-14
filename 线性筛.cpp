/*************************************************************************
	> File Name: 线性筛.cpp
	> Author:zhengyang 
	> Mail:1021606521@qq.com 
	> Created Time: 2019年07月02日 星期二 15时31分53秒
 ************************************************************************/

#include<iostream>
using namespace std;
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <vector>
#include <map>
#include <cmath>
using namespace std;
#define MAX_N 100
int is_prime[MAX_N + 5];
int prime[MAX_N + 5];
/*
int main() {
    for (int M = 2; M <= MAX_N; M++) {
        if (is_prime[M] == 0) {
            prime[++prime[0]] = M;
        }
        for (int j = 1; j <= prime[0]; j++) {
            if (prime[j] * M > MAX_N) break;
            is_prime[prime[j] * M] = 1;
            printf("%d = %d * %d\n", prime[j] * M, prime[j], M);
            if (M % prime[j] == 0) break;
        }
    }
    return 0;
}*/

















int main() {
    for (int i = 2; i * 2 <= MAX_N; i++)  {
        if (prime[i] == 0) {
            prime[++prime[0]] = i;
        }
        for (int j = 1; prime[j] * i <= MAX_N; j++) {
            prime[prime[j] * i] = 1;
            printf("%d = %d * %d\n", prime[j] * i, prime[j], i);
            if(i % prime[i] == 0) break;
        }
    }
}





























