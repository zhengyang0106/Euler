/*************************************************************************
	> File Name: oj255.cpp
	> Author:zhengyang 
	> Mail:1021606521@qq.com 
	> Created Time: 2019年06月29日 星期六 19时57分05秒
 ************************************************************************/

#include<iostream>
using namespace std;
#include<algorithm>
#define MAX_N  20000
#include<math.h>

struct rang{
    double l ,r;

} arr[MAX_N];


int cmp(const rang &a, const rang &b){
    if(a.r -b.r) return a.r < b.r;
    return a.l >b.l;
}


int main() {
    int n;
    double d;
    int flag = 0;
    cin >> n >>d;
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >>x>>y;
        if (y >d) flag = 1;
        arr[i].l = x- sqrt( d* d - y*y );
        arr[i].r = x+ sqrt( d* d - y*y );
    }

    if (flag) {
        cout << -1<<endl;
        return 0;
    }
sort(arr,arr+n,cmp);
    int ans = 1;
    double p = arr[0].r;

    for(int i = 1; i< n; i++){
        if(p < arr[i].l){
            p = arr[i].r;
            ans++;
        }
    }
cout <<ans<<endl;
    return 0;
}
