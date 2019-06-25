/*************************************************************************
	> File Name: EP31.cpp
	> Author:zhengyang 
	> Mail:1021606521@qq.com 
	> Created Time: 2019年06月15日 星期六 20时51分11秒
 ************************************************************************/

#include<iostream>
using namespace std;
#define MAX_N 8
#define MAX_M 200
int w[MAX_N + 5] = {1, 2, 5, 10, 20, 50, 100, 200};
long long f[MAX_M + 5];



int main() {
    f[0] = 1;
    for (int k = 0; k < MAX_N; k++) {
        for (int j = w[k]; j <= MAX_M; j++) {
            f[j] += f[j - w[k]];
        }
    }
    cout << f[MAX_M] <<endl;
    return 0;
}
