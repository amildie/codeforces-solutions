// http://codeforces.com/problemset/problem/560/A

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
    bool hasOne = false;

    int t; 
    for(int i = 0; i < n; ++i) {
        cin >> t;
        if(t == 1)
            hasOne = true;
    }

    if(hasOne)
        cout << "-1" << endl;
    else
        cout << "1" << endl;

    return 0;
}
