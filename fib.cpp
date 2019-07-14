/*************************************************************************
	> File Name: fib.cpp
	> Author:zhengyang 
	> Mail:1021606521@qq.com 
	> Created Time: 2019年07月01日 星期一 22时29分30秒
 ************************************************************************/

#include<iostream>
using namespace std;

#define MAX_N 4000000

int main() {
    long long sum = 0;
    int a = 0, b = 1;
    while (a + b < MAX_N) {
        b = a + b;
        a = b - a;
        if (b % 2 == 0) sum += b;
    }
    cout << sum <<endl;
}
