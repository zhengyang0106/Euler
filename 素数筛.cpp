/*************************************************************************
	> File Name: 素数筛.cpp
	> Author:zhengyang 
	> Mail:1021606521@qq.com 
	> Created Time: 2019年07月02日 星期二 15时30分03秒
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
#define MAX_N 200000
int is_prime[MAX_N + 5];

int main() {
    for (int i = 2; i * i <= MAX_N; i += 1 + (i % 2)) {
        if (is_prime[i]) continue;
        is_prime[i] = i;
        for (int j = i * i; j <= MAX_N; j += i) {
            if (is_prime[j] == 0) is_prime[j] = i;
        }
    }
    for (int i = 2; i <= MAX_N; i++) {
        if (is_prime[i]) continue;
        is_prime[++is_prime[0]] = i;
    }
    cout << is_prime[10001] << endl;
    return 0;
}
