// http://codeforces.com/problemset/problem/676/A

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
#include <list>
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

    int n, t, min, max;
    cin >> n;

    min = numeric_limits<int>::max();
    max = numeric_limits<int>::min();
    unsigned int max_i, min_i;

    for(int i = 0; i < n; ++i) {
        cin >> t;

        if(t < min) {
            min = t;
            min_i = i;
        }
        if(t > max) {
            max = t;
            max_i = i;
        }
    }

    int a = abs((n-1) - max_i);
    int b = abs((n-1) - min_i);

    vector<int> v;
    v.push_back(a);
    v.push_back(b);
    v.push_back(max_i);
    v.push_back(min_i);

    cout << *max_element(begin(v), end(v)) << endl;

    return 0;
}