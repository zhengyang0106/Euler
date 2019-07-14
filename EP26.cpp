/*************************************************************************
	> File Name: EP26.cpp
	> Author:zhengyang 
	> Mail:1021606521@qq.com 
	> Created Time: 2019年06月27日 星期四 18时45分22秒
 ************************************************************************/

#include<iostream>
using namespace std;
#include<math.h>
#include<stdio.h>
#define MAX_N 1000
 int r_len[MAX_N + 5];
int get_length(int d) {
    int r = 1, t = 1;
    memset(r_len, 0 ,sizeof(r_len));
    r_len[1] = 1;
    while(r) {
        r = r * 10 %d;
        t += 1;
        if(r_len[r]) return t - r_len[r];
        r_len[r] = t;
    }
    return 0;
}


int main() {
    int d = 0, len = -1;
    for (int i = 2; i < MAX_N; i++) {
        int temp = get_length(i);
        if (temp > len) {
            len = temp;
            d = i;
        }
    }
    cout << len <<endl;
    cout << len <<endl;
    return 0;
}
