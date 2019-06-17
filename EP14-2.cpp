/*************************************************************************
	> File Name: EP14.cpp
	> Author:zhengyang 
	> Mail:1021606521@qq.com 
	> Created Time: 2019年06月15日 星期六 19时04分12秒
 ************************************************************************/

#include<iostream>

using namespace std;
#define MAX_KEEP_SIZE 1000000
int f[MAX_KEEP_SIZE];
int get_chain_length(long long x) {
    if (x == 1) return 1;
    if (x <= MAX_KEEP_SIZE && f[x] != 0) return f[x];
    int ret;
    if (x & 1) ret = get_chain_length(3 * x + 1) + 1; //注意如何判断奇数
    else ret = get_chain_length(x / 2) + 1;
    if (x <= MAX_KEEP_SIZE) f[x] = ret;
    return ret;
}


int main() {
    int max_len = 0, num = 0;
    for (int i = 1; i < 1000000; i++) {
        int l = get_chain_length(i);
        if (l > max_len) max_len = l, num = i;
    }
    cout << num << " " << max_len << endl;
    return 0;
}

/*
int main() {
    int l = 0, num = 0;
    for (int i = 1; i < 1000000; i++) {

    }
}*/
