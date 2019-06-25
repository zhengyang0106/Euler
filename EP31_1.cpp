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
int w[8] = {1, 2, 5, 10, 20, 50, 100, 200};
long long f[2][MAX_M + 5];



int main() {
    for (int k = 0; k < MAX_N; k++) {
        int i = k % 2;
        f[i][0] = 1;
        for (int j = 1; j <= MAX_M; j++) {
            f[i][j] = f[i ^ 1][j];
            if (j >= w[k]) f[i][j] += f[i][j - w[k]];

        }
    }
    cout << f[(MAX_N-1) % 2][MAX_M] <<endl;
    return 0;
}
