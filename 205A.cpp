// http://codeforces.com/problemset/problem/205/A

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

    int n; cin >> n;
    map<int, pair<int, int> > m;
    
    int t;
    for(int i = 0; i < n; ++i) {

    	cin >> t;
    	auto it = m.find(t);
    	if(it != m.end()) {
    		it->second.second++;
    	} else {
    		m.insert(make_pair(t, make_pair(i+1, 1)));
    	}

    }

    if(m.begin()->second.second == 1) {
    	cout << m.begin()->second.first << endl;	
    } else {
    	cout << "Still Rozdil" << endl;
    }

    return 0;

}