/*************************************************************************
	> File Name: EP04-1.c
	> Author:zhengyang 
	> Mail:1021606521@qq.com 
	> Created Time: 2019年05月19日 星期日 19时16分48秒
 ************************************************************************/

#include<stdio.h>
int is_vaild(int x) {
    int raw =x ,temp = 0;
    while (x) {//证明 base 的正确性
        temp = temp * 10 + x%10;
        x /= 10;
    }
    return temp == raw;
}

int main() {
    int ans = 0;
    for (int i = 100; i < 1000; i++ ) {
        for (int j = i; j < 1000; j++) {
            if (is_vaild(i * j, 10) && i *j > ans) ans = i * j;
        }
    }
    printf("%d\n" ,ans);
    return 0;

}

/*

int is_vaild(int x, int base) {
    int raw  = x, temp  = 0;
    while (x) {
        temp = temp * base + x % base;
        x /= base;
    }

    return temp == raw;
}





int main() {
    int ans = 0;
    for (int i = 100; i < 1000; i++) {
        
        for (int j = 100; j < 1000; j++) {
            if (is_vaild(i * j, 10) && i * j > ans) ans = i *j;
        }
    }

    printf ("%d\n", ans);
    return 0;
}

*/
