/*************************************************************************
	> File Name: EP28-1.c
	> Author:zhengyang 
	> Mail:1021606521@qq.com 
	> Created Time: 2019年05月19日 星期日 20时31分16秒
 ************************************************************************/

#include<stdio.h>

int  main() {
    int sum =1;
    for (int l = 3; l <= 1001; l+=2) {
        sum += 4*l*l -6*l +6;
    }
    printf("%d\n", sum);
    int sum2 = 1;
    sum2 = 4 * 
    return 0;// 推通项公式
}


/*
int main() {
    int sum = 1;
    for (int l = 3; l <= 1001; l += 2) {
        sum += 4 * l * l - 6 * l  + 6;
    }
    cout << sum<< endl
    return 0;
}*/
