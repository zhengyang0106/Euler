/*************************************************************************
	> File Name: oj-250.c
	> Author:zhengyang 
	> Mail:1021606521@qq.com 
	> Created Time: 2019年06月11日 星期二 18时18分44秒
 ************************************************************************/

#include<stdio.h>
int main() {
    int n;
    long long total = 0;
    scanf("%ld", arr + i);
    total += arr[i];

}
    long long c = total / n, ans = 0;
    sum[0] = arr[0] - c;
    for (int i = 1; i < n; i++ ) {
        ans += abs(c - sum[i]);
    }
    }
