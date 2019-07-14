/*************************************************************************
	> File Name: oj253.cpp
	> Author:zhengyang 
	> Mail:1021606521@qq.com 
	> Created Time: 2019年06月29日 星期六 19时00分47秒
 ************************************************************************/
#include<algorithm>
#include<iostream>
#define MAX_N 20000
using namespace std;
struct rang {
    int x;
    int y;
} arr[MAX_N+5];

int cmp(const rang &a, const rang &b) {
    if(a.y - b.y) return a.y < b.y;
    return a.x < b.x;
}


int cnt[MAX_N];
int main() {
    int n ,m;
    cin >> n >> m;
    for(int i = 0; i< m ; i++) {
        cin >> arr[i].x >>arr[i].y;
    }
    
        
    for(int i = 0; i< n; i++) {
        int a,b;
        cin >>a>>b;
        cnt[a] += b;
    }
    sort(arr,arr + n,cmp);
    int ans = 0;
    for(int j=0 ; j <=n; j++ ){
        int flag = -1;
        for(int i = arr[j].x; i < arr[j].y && flag == -1; i++) {
            if (cnt[i] == 0) continue;
            flag = i;
        }
        if (flag != -1){ 
        cnt[flag] -= 1;
        ans += 1;
    }}
    cout <<ans <<endl;
    return 0;


}
