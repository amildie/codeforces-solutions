// http://codeforces.com/problemset/problem/569/B

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

int main(){
    
    #ifdef TEST
        freopen("test.in", "r", stdin);
        freopen("test.out", "w", stdout);
    #endif

    int n; cin >> n;
    int inv[n];
    map<int, int> a;
    
    int t;
    for(int i = 0; i < n; ++i) {
        cin >> t;
        inv[i] = t;
        auto it = a.find(t);
        if(it == a.end()) {
            a.insert(make_pair(t, 1));
        } else {
            a[t]++;
        }
    }

    // next smallest element in O(1)
    priority_queue<int, vector<int>, greater<int> > next;
    for(int i = 1; i <= n; ++i) {
        if(a[i] == 0) {
            next.push(i);
        }
    }

    // fixing duplicates
    for(int i = 0; i < n; ++i) {
        if(a[inv[i]] > 1) {
            int new_elem = next.top(); next.pop();
            a[inv[i]]--;
            inv[i] = new_elem;
        }
    }

    // fixing out of range elements
    int max = 0;
    while(max != n){
        max = 0;
        int k;
        for(int i = 0; i < n; ++i) {
            if(inv[i] > max) {
                k = i;
                max = inv[i];
            }
        }
        if(max == n) {
            break;
        }
        a[inv[k]]--;
        inv[k] = next.top(); next.pop(); 
    }
    
    for(int i = 0; i < n; ++i) {
        cout << inv[i] << " ";
    }

    return 0;
}