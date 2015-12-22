// http://codeforces.com/problemset/problem/63/A

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

    vector<string> rats, womenAndChildren, men;
    string captain;

    int n; cin >> n;
    for(int i = 0; i < n; ++i) {
        
        string name, status;
        
        cin >> name;
        cin >> status;

        if(status == "rat") {
            rats.push_back(name);
        } else if(status == "woman" || status == "child") {
            womenAndChildren.push_back(name);
        } else if(status == "man") {
            men.push_back(name);
        } else {
            captain = name;
        }

    }

    for(auto e : rats) {
        cout << e << endl;
    }
    for(auto e : womenAndChildren) {
        cout << e << endl;
    }
    for(auto e : men) {
        cout << e << endl;
    }
    cout << captain << endl;

    return 0;

}