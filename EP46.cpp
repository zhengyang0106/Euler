/*************************************************************************
	> File Name: EP46.cpp
	> Author:zhengyang 
	> Mail:1021606521@qq.com 
	> Created Time: 2019年06月29日 星期六 15时38分59秒
 ************************************************************************/

#include<iostream>
using namespace std;
#define MAX_N 100000
int prime[MAX_N + 5];
int is_prime[MAX_N + 5];

int func(int n) {
    return 2 * n*n;
}

bool binary_search(int (*f)(int),int l, int r, int val) {
    if(l > r) return false;
    int mid = (l + r) >> 1;
    if (f(mid) == val) return true;
    if(f(mid) > val) r =mid - 1;
    else l = mid + 1;
    return binary_search(f, l , r, val);

}

bool is_valid(int x) {
    for (int i = 1; i<= prime[0] && prime[i] < x; i++) {
        int val = x - prime[i];
        if (!binary_search(func, 1, val, val)) continue;
        return true;
    }
    return false;
}



int main() {
    for (int i = 2; i <= MAX_N; i++){
        if(!is_prime[i]) {
            prime[++prime[0]] = i;
        }
        for (int j = 1; j <= prime[0]; j++) {
            if(i *prime[j] > MAX_N) break;
            is_prime[i *prime[j]] = 1;
            if (i % prime[j] == 0) break;
        }
    }
    for(int i = 9; i <= MAX_N; i+= 2) {
        if(!is_prime[i]) continue;
        if(!is_valid(i)) {
            cout <<i <<endl;
            break;
        }
    }
    return 0;
}
