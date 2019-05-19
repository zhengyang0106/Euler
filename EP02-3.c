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
   
    long long sum = 0;
    int f[3] = {0, 1};
    int n = 1;
    while (f[n % 3] + f[(n - 1) % 3]< MAX_M) {
        n++;
        f[n % 3] = f[(n - 1) % 3] + f[(n - 2) % 3];
        if(!(f[n % 3] & 1)) sum += f[n % 3];
    }
    printf("%lld\n", sum);
    return 0;
}
