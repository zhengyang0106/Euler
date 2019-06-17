/*************************************************************************
	> File Name: 1.c
	> Author:zhengyang 
	> Mail:1021606521@qq.com 
	> Created Time: 2019年06月11日 星期二 18时08分22秒
 ************************************************************************/

#include<stdio.h>
#include<algorithm>
#define MAX_N 100000
int arr[MAX_N + 5];


int main() {
    int n;
    scanf("%d",&n);
    for (int i = 0; i < n; i++) 
    scanf("%d",arr[i]);
    nth_element(arr, arr + n /2, arr + n);
    int pos = arr[n / 2], ans = 0;
    for (int i= 0; i < n; i++) {
        ans += abs(arr[i] - pos);
    }
    printf("%d\n",ans);

    return 0;
}
