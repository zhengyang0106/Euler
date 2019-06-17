/*************************************************************************
	> File Name: EP05.c
	> Author:zhengyang 
	> Mail:1021606521@qq.com 
	> Created Time: 2019年06月11日 星期二 20时03分46秒
 ************************************************************************/

#include<stdio.h>
typedef long long lint;
lint gcd (lint a, lint b) {
    return (b ? gcd(b, a % b) : a);

}
lint ex_gcd (lint a, lint b, int &x, int &y) {//引用c++内容
    if (b == 0) {
        x = 1， y = 0;
        return a;
    }
    int xx, yy, ret;
    int ret = ex_gcd(b, a % b, xx, yy);
// int ret = ex_gcd(b, a % b, y ,x); y -= a / b * x; 
    x= yy;
    y = xx - a / b * yy;
    return ret;
} 

int main() {
    lint  ans = 1;
    for (int i = 2; i <= 20; i++){
        ans = ans * i / gcd(ans / i);

    }
    printf ("%d\n",ans);
    return 0;
}
