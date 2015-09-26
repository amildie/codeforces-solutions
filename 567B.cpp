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
#include <set>
#include <queue>
#include <math.h>
#include <regex>
#include <cstdlib>
#ifdef TEST
    #include "tools.h" 
#endif
using namespace std;

int main() {
    
    #ifdef TEST
        freopen("test.in", "r", stdin);
        freopen("test.out", "w", stdout);
    #endif

    int n; cin >> n;

    bool m[1000001][n];
    memset(m, 0, sizeof(m));

    int hours[n];
    memset(hours, 0, sizeof(hours));

    set<int> exists;
    set<int> participated;
    for(int i = 0; i < n; ++i) {

        char c; cin >> c;
        int p; cin >> p;
        participated.insert(p);

        if(c == '+') {            
            exists.insert(p);
            for(int j = i; j < n; ++j) {
                m[p][j] = true;
            }
        } else {
            if(exists.find(p) != exists.end()) {
                exists.erase(p);
                for(int j = i+1; j < n; ++j) {
                    m[p][j] = false;
                }
            } else {
                for(int j = 0; j <= i; ++j) {
                    m[p][j] = true;
                }
            }
        }

    }

    for(auto &elem : participated) {
        for(int i = 0; i < n; ++i) {
            if(m[elem][i] == true) {
                hours[i]++;
            }
        }
    }

    int max = -1;
    for(int i = 0; i < n; ++i) {
        if(hours[i] > max) {
            max = hours[i];
        }
    }

    cout << max << endl;
    memset(m, 0, sizeof(m));
    memset(hours, 0, sizeof(hours));

    return 0;
}