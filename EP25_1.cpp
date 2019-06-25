/*************************************************************************
	> File Name: EP25_1.cpp
	> Author:zhengyang 
	> Mail:1021606521@qq.com 
	> Created Time: 2019年06月24日 星期一 19时22分38秒
 ************************************************************************/

#include<iostream>
#include<math.h>
using namespace std;
int f[3][1005];

int main() {
    int n = 2;
    f[1][0] = f[2][0] = f[1][1] = f[2][1] = 1;
    while(f[n % 3][0]< 1000) {
        n++;
        int n0 = n % 3, n1 = (n - 1) % 3, n2 = (n - 2) % 3;
        for( int i = 1; i <= f[n1][0]; i++) {
            f[n0][i] = f[n1][i] + f[n2][i];
        }
        f[n0][0] = f[n1][0];
        for(int i = 1; i <= f[n0][0]; i++) {
            if (f[n0][i] < 10) continue;
            f[n0][i + 1] += f[n0][i] / 10;
            f[n0][i] = f[n0][i] % 10;
            f[n0][0] += (f[n0][0] == i);
        }
        
    }
    cout << n <<endl;
    return 0;
}
