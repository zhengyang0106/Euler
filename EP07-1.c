/*************************************************************************
	> File Name: EP07-1.c
	> Author:zhengyang 
	> Mail:1021606521@qq.com 
	> Created Time: 2019年06月15日 星期六 14时19分11秒
 ************************************************************************/

#include<stdio.h>
 inline bool is_prime(int x) {
    if (x <= 1) return false;
    for(int i = 2; i * i <= x; i++) {
        if(x % i == 0) return false;

    }
    return true;
}
/*
inline bool is_prime(int x) {
    if (x <= 1) return false;
    for (int i = 2; i * i < x; i++) {
        if (x % i == 0) return false;
    }
    else return  true;
}
*/


int main() {
    int cnt = 0,i = 1;
    while (cnt < 10001) {
        i++;
        if(is_prime(i)) cnt += 1;
    }
    printf("%d\n", i);

    return 0;
}

/*
inline bool is_prime(int x) {
    if (x <= 1) return false;
    for (int i = 2; i * i < x; i++) {
        if(x % i == 0) return false;
    }
    return true;
}


int main() {
    int cnt = 0, i = 1;
    while (cnt <= 10001) {
        i++;
        if(is_prime(i)) cnt++;
    }
    printf("%d\n", i);
}
*/


