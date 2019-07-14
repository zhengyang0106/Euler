/*************************************************************************
	> File Name: EP43.cpp
	> Author:zhengyang 
	> Mail:1021606521@qq.com 
	> Created Time: 2019年06月26日 星期三 20时01分25秒
 ************************************************************************/

#include<iostream>
using namespace std;
#include<algorithm>
long long is_isteresting(int *a) {
    if(a[0] ==0) return 0;
    long long p[7] = {2,3,5,7,11,13,17},j = 0;
    long long  num = a[0], ret = a[0];
    for (int i = 1; i < 10; i++) {
        ret = ret * 10 + a[i];
        num = num * 10 + a[i];
        if (i < 3) continue;
        num -= 1000 * a[i - 3];
        if(num % p[j++]) return 0;
    }
    return ret;
}

int main() {
    int a[10] = {0,1,2,3,4,5,6,7,8,9};
    long long sum = 0,temp;
    do {
        sum += is_isteresting(a);
    } while(next_permutation(a, a + 10));

    cout << sum <<endl;


    return 0;
}

/*
#include <stdio.h>

#include <algorithm>

#include <inttypes.h>

using namespace std;

 

int64_t IsInteresting(int32_t *a) {

    if (a[0] == 0) return 0;

    int32_t p[7] = {2, 3, 5, 7, 11, 13, 17}, j = 0;

    int64_t num = a[0], ret = a[0];

    for (int32_t i = 1; i < 10; i++) {

        ret = ret * 10 + a[i];

        num = num * 10 + a[i];

        if (i < 3) continue;

        num -= 1000 * a[i - 3];

        if (num % p[j++]) return 0;

    }

    return ret;

}

 

int32_t main() {

    int32_t a[10] = {0};

    for (int32_t i = 0; i < 10; i++) {

        a[i] = i;

    }

    int64_t sum = 0, temp;

    do {

        sum += IsInteresting(a);

    } while(next_permutation(a, a + 10));

    printf("%"PRId64"\n", sum);

    return 0;

}*/
