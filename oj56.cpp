/*************************************************************************
	> File Name: oj56.cpp
	> Author:zhengyang 
	> Mail:1021606521@qq.com 
	> Created Time: 2019年06月26日 星期三 22时35分26秒
 ************************************************************************/

#include<iostream>
using namespace std;
#include<algorithm>


int main() {
    int x, y;
    cin >> x >> y;
   // cout << x << y<<endl;
    int a[10] = {0};
    for (int i = 0; i < x; i++) {
        a[i] = i + 1;
    }
    while (--y) {
        next_permutation(a, a + x);
    }
    for(int i = 0; i < x; i++) {
        cout << a[i];
    }
    cout << endl;
    return 0;
}

