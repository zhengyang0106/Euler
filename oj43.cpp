/*************************************************************************
	> File Name: oj43.cpp
	> Author:zhengyang 
	> Mail:1021606521@qq.com 
	> Created Time: 2019年06月25日 星期二 19时29分41秒
 ************************************************************************/

#include<iostream>
using namespace std;
#include<stdio.h>

int val[1005][1005];

int dfs(int i, int j ,int n) {
    if (i + 1 == n) return val[i][j];
    int max1 = dfs(i + 1, j ,n);
    int max2 = dfs(i + 1, j + 1,n);
    return (max1 > max2 ? max1 : max2 ) + val[i][j];
}





int main() {
    int a;
    int sum = 0;
   // int max[a][a]={0};
    scanf("%d",&a);
    for(int i = 0; i < a; i++) {
        for (int j = 0; j <= i; j++){
            //scanf("%d", max[i][j]);
            cin >> val[i][j];
        }
    }
     sum = dfs(0, 0, a); 
    printf("%d\n", sum);




    return 0;
}
