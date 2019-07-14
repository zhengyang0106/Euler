/*************************************************************************
	> File Name: fib_gundong.cpp
	> Author:zhengyang 
	> Mail:1021606521@qq.com 
	> Created Time: 2019年07月01日 星期一 22时38分17秒
 ************************************************************************/

#include<iostream>
using namespace std;


#define MAX_N 4000000

int main() {
    long long sum = 0 ;
    int fib[3] ={0 , 1};
    int i = 1;
    while (fib[(i % 3)] + fib[(i - 1) % 3] < MAX_N) {
        i++;
        fib[i % 3 ] = fib[(i - 1) % 3] + fib[(i - 2) % 3];
    
        if(!(fib[(i % 3)] & 1)) sum += fib[( i% 3)];
    
    }
    cout << sum <<endl;
    return 0;
}
