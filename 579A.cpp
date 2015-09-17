// http://codeforces.com/problemset/problem/579/A

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
#ifdef TEST
    #include "tools.h" 
#endif
using namespace std;

int main(){
    
    #ifdef TEST
        freopen("test.in", "r", stdin);
        freopen("test.out", "w", stdout);
    #endif

    int n, m = 1, b = 0;
    cin >> n;

    while(n > 0) {
        m = 1;
        while(2*m <= n)
            m *= 2;
        b++;
        n -= m;
    }

    cout << b << endl;

    return 0;
}
