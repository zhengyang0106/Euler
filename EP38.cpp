/*************************************************************************
	> File Name: EP38.cpp
	> Author:zhengyang 
	> Mail:1021606521@qq.com 
	> Created Time: 2019年06月16日 星期日 15时05分25秒
 ************************************************************************/

#include<iostream>
#include<math.h>
using namespace std;

int digits(long long num) { //注意 longlong类型 因为传过来的参数是longlong类型 用int 容易溢出
    return floor(log10(num)) + 1;
}

long long calc(int x) {
    long long ans = 0;
    int n = 1;
    while (digits(ans) < 9) {
        ans *= pow(10, digits(n * x));
        ans += n *x;
        n += 1;

    }
    if (digits(ans) != 9) return -1;
    int num[10] = {0};
    num[0] = 1;
    long long temp = ans;
    while (temp) {
        if(num[temp % 10]) return -1;
        num[temp % 10] += 1;
        temp /= 10;
    }
    return ans;
}


int main() {
    long long temp = 0, ans = 0;
    for (int i = 1; i < 10000; i++) {
        temp = calc(i);
        if(temp > ans)  ans = temp;
    }
    cout << ans << endl;
    return 0;
}




