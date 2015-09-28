// http://codeforces.com/problemset/problem/581/B

#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>
#include <string>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <cmath>
#include <limits>
#include <map>
#include <cctype>
#include <cstring>
#include <queue>
#include <math.h>
#include <regex>
#include <cstdlib>
using namespace std;

int main(){
    
    #ifdef TEST
        freopen("test.in", "r", stdin);
        freopen("test.out", "w", stdout);
    #endif

    int n; cin >> n;
    int a[n]; memset(a, 0, sizeof(a));
    int b[n]; memset(b, 0, sizeof(b));

    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int m = -1;
    for(int i = n-1; i >= 0; --i) {
        if(a[i] > m) {
            m = a[i];
            b[i] = 0;
        } else if(a[i] == m) {
            b[i] = 1;
        } else {
            b[i] = m-a[i]+1;    
        }   
    }

    for(int i = 0; i < n; ++i) {
        cout << b[i] << " ";
    }

    return 0;
}
