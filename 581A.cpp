// http://codeforces.com/problemset/problem/581/A

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
    int m; cin >> m;
    cout << min(n, m) << " " << (max(n, m)-min(n, m))/2 << endl;

    return 0;
}