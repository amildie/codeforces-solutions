// http://codeforces.com/problemset/problem/577/A

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
#ifdef TEST
    #include "tools.h" 
#endif
using namespace std;

int main(){
    
    #ifdef TEST
        freopen("test.in", "r", stdin);
        freopen("test.out", "w", stdout);
    #endif

    int n; cin >> n;
    int x; cin >> x;

    if(x == 1) {
        cout << 1 << endl;
        return 0;
    }

    int res = 0;
    for(int i = 2; i <= n; ++i) {
        if(x%i == 0 && x/i <= n) {
            res++;
        }
    }

    if(x <= n) {
        res++;
    }

    cout << res << endl;

    return 0;
}