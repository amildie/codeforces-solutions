// http://codeforces.com/problemset/problem/615/A

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
#include <tuple>
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
    int m; cin >> m;
    bool bulbs[m]; memset(bulbs, 0, sizeof(bulbs));

    for(int i = 0; i < n; ++i) {
        int t; cin >> t;
        for(int j = 0; j < t; ++j) {
            int k; cin >> k;
            bulbs[k-1] = true;
        }
    }

    for(int i = 0; i < m; ++i) {
        if(bulbs[i] == false) {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;

}
