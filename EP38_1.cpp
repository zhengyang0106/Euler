/*************************************************************************
	> File Name: EP38_1.cpp
	> Author:zhengyang 
	> Mail:1021606521@qq.com 
	> Created Time: 2019年06月26日 星期三 18时39分51秒
 ************************************************************************/

#include<iostream>
using namespace std;
#include<math.h>
#include<stdio.h>
int digts(long long x) {
    return floor(log10(x)) + 1;
}



long long is_cal(int x) {
    long long ans = 0;
    int n = 1;
    while (digts(ans) < 9) {
        ans *= pow(10, digts(n * x));
        ans += n * x;
        n++;
    }
    long long temp = ans;
    int num[10] = {0};
    num[0] = 1;
    if (digts(ans) != 9) return -1;
    while (temp) {
        if (num[temp % 10]) return -1;
        num[temp % 10] += 1;
        temp /= 10;
    }
    return ans;

}


int main() {
    long long temp, ans = 0;
    for (int i = 1; i <10000; i++) {
       temp = is_cal(i);
        if (ans < is_cal(i)) ans = temp;
    }
    cout << ans << endl;
    return 0;
}
