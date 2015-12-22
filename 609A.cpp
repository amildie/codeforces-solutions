// http://codeforces.com/problemset/problem/609/A

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

    int n, z;
    cin >> n >> z;

    vector<int> sz;
    for(int i = 0; i < n; ++i) {
        int t; cin >> t;
        sz.push_back(t);        
    }
    sort(sz.begin(), sz.end(), greater<int>());

    int i = 0, k = 0;
    while(k < z) {
        k += sz[i];
        i++;
    }

    cout << i << endl;

    return 0;
}
