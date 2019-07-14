/*************************************************************************
	> File Name: EP44.cpp
	> Author:zhengyang 
	> Mail:1021606521@qq.com 
	> Created Time: 2019年06月16日 星期日 15时35分47秒
 ************************************************************************/

#include<iostream>
using namespace std;
#define INF 0x7fffffffffffffffLL

long long  Pentagonal(long long n) {
    return  n * (3 * n - 1) / 2;
}

int binary_search(long long (*f)(long long), long long n, long long x) {
    long long head = 1, mid,tail = n; 
    while(head <= tail) {
    mid = (tail + head) / 2;
    if (f(mid) == x) return mid;
    if (f(mid) > x) tail = mid - 1;
    else  head = mid + 1;
    
    }
    return 0;
}

int main() {
    long long  pk, pj, D = INF;
    long long  n = 2;
    while (Pentagonal(n) - Pentagonal(n - 1) < D) {
        pk = Pentagonal(n);
        for (int i = n -1; i >= 1; i--){
            pj = Pentagonal(i);
            if (pk - pj >= D) break;
            int ans1 = binary_search(Pentagonal,2 * n, pk + pj);
            int ans2 = binary_search(Pentagonal,n, pk - pj);
            if (ans1 && ans2){ 
                D = pk -pj;
            }   
        }
        n++;
    }
    cout << D <<endl;

    return 0;
}


/*
int binary_search (long long (*func)(long long), long long n, long long x) {
    long long head = 1, tail = n, mid;
    while (head <= tail) {
        mid = (head + tail) >> 1;
        if(func(mid) == x) return mid;
        if (func(mid) < x) head = mid + 1;
        else tail = mid -1;
    }
    return 0;
}

int main() {
    long long D = INF;
    long long pk, pj, n = 2;
    while (Pentagonal(n) - Pentagonal(n -1) < D) {
        pk = Pentagonal(n); 
        for (int j = n-1;j >= 1;j--) {
            pj = Pentagonal(j);
            if (pk - pj >= D) break;
            int ind1 = binary_search(Pentagonal, 2 * n, pk + pj);
            int ind2 = binary_search(Pentagonal, n, pk -pj);
            if (ind1 && ind2) {
                D = pk - pj;
            }
        }
        n++;
    }
    cout << D << endl;
    return 0;
}*/

