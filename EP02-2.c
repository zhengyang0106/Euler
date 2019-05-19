/*************************************************************************
	> File Name: EP02-1.c
	> Author:zhengyang 
	> Mail:1021606521@qq.com 
	> Created Time: 2019年05月19日 星期日 18时14分43秒
 ************************************************************************/

#include<stdio.h>

#define MAX 44
#define MAX_M 40000000
int fib[MAX+5];

int main() {
    long long  sum =0;
    int a = 0,b = 1;
   
    while (a + b <= MAX_M) {
        b = a + b;//临时变量都省了
        a = b - a;
        if (!(b&1)) sum += b;//只有最后一个位数影响奇偶性
    }
    printf("%lld\n", sum);
    return 0;
}
