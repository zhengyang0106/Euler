/*************************************************************************
	> File Name: EP08.cpp
	> Author:zhengyang 
	> Mail:1021606521@qq.com 
	> Created Time: 2019年06月15日 星期六 16时38分00秒
 ************************************************************************/

#include<iostream>
using namespace std;
#define MAX_N 1000
char num[MAX_N + 5];


int main() {
    int len = 0;
    while (~scanf("%s", num + len)) len += strlen(num + len);
    long long  p = 1, zero_cnt = 0, ans = 0;
    for (int i = 0; num[i]; i++) {
        num[i] -= '0';
        if (num[i]) p *= num[i];
        else zero_cnt += 1;
        if (i - 13 < 0)  continue;

        if (num[i - 13]) p /= num[i- 13];
        else zero_cnt -= 1;
        if (zero_cnt == 0 && p > ans) ans = p;
        
    }
    printf("%lld\n",ans);
    return 0;
}
