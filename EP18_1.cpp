/*************************************************************************
	> File Name: EP18.cpp
	> Author:zhengyang 
	> Mail:1021606521@qq.com 
	> Created Time: 2019年06月25日 星期二 18时42分28秒
 ************************************************************************/

#include<iostream>
using namespace std;
#include<stdio.h>
#define MAX_N 15
int val[MAX_N + 5][MAX_N + 5];

int main() {
    for (int i= 0; i < MAX_N; i++) {
        for (int j = 0; j <= i; j++) {
            cin >> val[i][j];
        }
    }
    for (int i = MAX_N - 2; i >= 0; --i) {
        for (int j = 0; j <= i; j++) {
            val[i][j] += max(val[i + 1][j], val[i + 1][j + 1]);
        }
    }
    cout << val[0][0] <<endl;

    return 0;
}
