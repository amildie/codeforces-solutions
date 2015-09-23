// http://codeforces.com/problemset/problem/574/A

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
    int b; cin >> b;

    int t;
    priority_queue<int> p;
    for(int i = 0; i < n-1; ++i) {
        cin >> t;
        p.push(t);
    }

    int res = 0;
    int maxVotes = p.top(); p.pop(); 
    while(b <= maxVotes) {
        maxVotes--;
        res++; 
        b++;
        p.push(maxVotes);
        maxVotes = p.top(); p.pop(); 
    }

    cout << res << endl;

    return 0;
}