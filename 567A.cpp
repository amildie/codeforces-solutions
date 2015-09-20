// http://codeforces.com/problemset/problem/567/A

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
    
    int cities[n];
    for(int i = 0; i < n; ++i)
        cin >> cities[i];

    for(int i = 0; i < n; ++i) {

        int minCost = numeric_limits<int>::max();
        int maxCost = numeric_limits<int>::min();

        if(i == 0) {
            minCost = abs(cities[0]-cities[1]);
            maxCost = abs(cities[0]-cities[n-1]);
        } else if(i == n-1) {
            minCost = abs(cities[n-1]-cities[n-2]);
            maxCost = abs(cities[n-1]-cities[0]);
        } else {

            int firtCityCost = abs(cities[i]-cities[0]);
            int lastCityCost = abs(cities[i]-cities[n-1]);
            int nextCityCost = abs(cities[i]-cities[i+1]);
            int prevCityCost = abs(cities[i]-cities[i-1]);
            
            if(prevCityCost < nextCityCost)
                minCost = prevCityCost;
            else
                minCost = nextCityCost;

            if(firtCityCost > lastCityCost)
                maxCost = firtCityCost;
            else
                maxCost = lastCityCost;

        }

        cout << minCost << " " << maxCost << endl;

    } 

    return 0;
}
