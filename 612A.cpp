// http://codeforces.com/problemset/problem/612/A

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
    int p; cin >> p;
    int q; cin >> q;

    for(int i = 0; i <= n; ++i) {
        for(int j = 0; j <= n; ++j) {
            
            if(p*i + q*j == n) {
                int h = 0;
                string s; cin >> s;
                vector<string> vs;

                for(int t = 0; t < i; ++t) {
                    vs.push_back(s.substr(h, p));
                    h += p;
                }    
                for(int t = 0; t < j; ++t) {
                    vs.push_back(s.substr(h, q));
                    h += q;
                }

                cout << vs.size() << endl;
                for(auto &e : vs) {
                    cout << e << endl;
                }
                return 0;            
            }

        }
    }

    cout << "-1" << endl;
    return 0;
}
