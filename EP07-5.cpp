/*************************************************************************
	> File Name: EP07-5.cpp
	> Author:zhengyang 
	> Mail:1021606521@qq.com 
	> Created Time: 2019年06月15日 星期六 15时52分59秒
 ************************************************************************/
//线性
#include<iostream>
using namespace std;
#define MAX_N 200000
int is_prime[MAX_N + 5];
int prime[MAX_N + 5];

/*
int main() {
    for (int M = 2; M <= MAX_N; M++ ) {
        if(is_prime[M] == 0) {
            prime[++prime[0]] =M;
        }
        for (int j = 1; j<= prime[0]; j++) {
            if (prime[j] *M > MAX_N ) break;
            is_prime[prime[j] * M] = 1;
            if (M % prime[j] == 0) break;  // 用于判断是否素数J 是否已经是 M的 最小素数， 此为跳出条件。
        }
    }

    cout << prime[10001] << endl;

    return 0;
}
*/



int main() {
    for (int M = 2; M * M <= MAX_N; M++) {
        if(is_prime[M] == 0) {
            prime[++prime[0]] = M;
        } 
        for (int j = 1; j <= prime[0]; j++) {
            if (prime[j] * M > MAX_N) break;
            is_prime[prime[j] * M] = 1;
            if (M % prime[j] == 0) break;
            
        }

    }

    cout << prime[10001] << endl;



    return 0;
}

















