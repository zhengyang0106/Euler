/*************************************************************************
	> File Name: EP15.cpp
	> Author:zhengyang 
	> Mail:1021606521@qq.com 
	> Created Time: 2019年06月16日 星期日 21时00分02秒
 ************************************************************************/

#include<iostream>
using namespace std;


int main() {
    long long ans = 1, n = 40, m = 20;
    while (n != 20 || m != 0) {
        if (n != 20 || m != 0) {
            if (n != 20) ans *= (n--);
            if (m && ans % m == 0) ans /= (m--);
        }
        cout << ans << endl;
        return 0;
    }
}
