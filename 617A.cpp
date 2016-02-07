// http://codeforces.com/problemset/problem/617/A

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
#include <numeric>
#ifdef TEST
    #include "tools.h" 
#endif
using namespace std;

int main(){
    
    #ifdef TEST
        freopen("test.in", "r", stdin);
        freopen("test.out", "w", stdout);
    #endif
    
    int tS = 0;
    int pS[5] = {5, 4, 3, 2, 1};
    int x; cin >> x;

    for(int i = 0; i < 5; ++i) {
        int t = x/pS[i];
        tS += t;        
        if(x%pS[i] == 0) {
            break;
        }
        x -= t*pS[i];        
    }

    cout << tS << endl;

    return 0;

}
