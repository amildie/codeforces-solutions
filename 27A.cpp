// http://codeforces.com/problemset/problem/27/A

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
    vector<int> v;

    int t;
    for(int i = 0; i < n; ++i) {
    	cin >> t;
    	v.push_back(t);
    }

    sort(v.begin(), v.end());

    if(v[0] != 1) {
    	cout << "1" << endl;
    	return 0;
    }

    for(int i = 1; i < v.size(); ++i) {
    	if(v[i-1]+1 != v[i]) {
    		cout << v[i-1]+1 << endl;
    		return 0;
    	}
    }

    cout << v[v.size()-1]+1 << endl;


    return 0;
}