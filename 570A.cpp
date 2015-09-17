// http://codeforces.com/problemset/problem/570/A

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
#ifdef TEST
    #include "tools.h" 
#endif
using namespace std;

int main(){
    
    #ifdef TEST
        freopen("test.in", "r", stdin);
        freopen("test.out", "w", stdout);
    #endif

    int n, m, t;
    cin >> n >> m;
    int cityVotes[n];
    memset(cityVotes, 0, 4*n);

    for(int i = 0; i < m; ++i) {
        int cityWinner = 0;
        int maxVotes = 0;
        for(int j = 0; j < n; ++j) {
            cin >> t;
            if(t > maxVotes) {
                cityWinner = j;
                maxVotes = t;
            }
        }
        cityVotes[cityWinner]++;
    }

    int winner = 0;
    for(int i = 0; i < n; ++i) {
        if(cityVotes[i] > cityVotes[winner])
            winner = i;
    }

    cout << winner+1 << endl;

    return 0;
}
