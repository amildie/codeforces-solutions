// http://codeforces.com/problemset/problem/37/A

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
    map<int, int> m;

    int t;
    int maxVal = -1;
    int maxKey = -1;
    for(int i = 0; i < n; ++i) {
    
        cin >> t;
    	auto it = m.find(t);
        if(it != m.end()) {
            it->second++;
        } else {
            m.insert(make_pair(t, 1));
        }
    
        if(m[t] > maxVal) {
            maxVal = m[t];
            maxKey = t;
        }
    
    }

    cout << m[maxKey] << " " << m.size() << endl;

    return 0;

}