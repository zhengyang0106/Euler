/*************************************************************************
	> File Name: EP07-3.cpp
	> Author:zhengyang 
	> Mail:1021606521@qq.com 
	> Created Time: 2019年06月15日 星期六 14时31分51秒
 ************************************************************************/
//最大素因
#include<iostream>
using namespace std;
#define MAX_N 200000

int is_prime[MAX_N+5];

int main() {
    for(int i = 2; i * i < MAX_N; i++) {  //i+= 1+(i%2)  // i <= MAX_N
        if(is_prime[i]) continue;
        is_prime[i] = i;
        for (int j = i * i; j <= MAX_N; j += i) {  // j = 2 * i
       // if(is_prime[j] == 0) 
            is_prime[j] = i;
            
        }
    }
    int n;
    while (~scanf("%d",&n)) {
        printf ("is_prime[%d] = %d\n", n, is_prime[n]);
    }
    for (int i = 2; i<= MAX_N; i++) {
        if (is_prime[i]) continue;
        is_prime[++is_prime[0]] = i;
    }
    cout << is_prime[10001] << endl;
    return 0;
}
