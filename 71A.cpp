// http://codeforces.com/problemset/problem/71/A

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
#include <tuple>
#ifdef TEST
    #include "tools.h" 
#endif
using namespace std;

int main(){
    
    #ifdef TEST
        freopen("test.in", "r", stdin);
        freopen("test.out", "w", stdout);
    #endif

    string s = "";
    int n; cin >> n;
    for(int i = 0; i < n; ++i) {
        
        cin >> s;
        if(s.length() > 10) {
            cout << s[0] << s.length()-2 << s[s.length()-1] << endl;
        } else {
            cout << s << endl;
        }

    }

    return 0;

}