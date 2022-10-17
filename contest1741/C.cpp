/*
Not my own code.
From https://codeforces.com/contest/1741/submission/175584583
Author: Kubogi 
*/
#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
using namespace std;

const int maxn = 2e5+5, inf = 1e9+7, infl = 1e18+5, mod = 1e9+7;
int n, arr[maxn];
 
int divide(int d) {
    int cur = 0, len = 0, maxi = 0;
    for (int i = 1; i <= n; i++) {
        cur += arr[i];
        len++;
        if (cur == d) {
            cur = 0;
            maxi = max(maxi, len);
            len = 0;
        }
        else if (cur > d) return inf;
    }
    if (cur != 0) return inf;
 
    maxi = max(maxi, len);
    // cerr << d << " " << maxi << "\n";
    return maxi;
}
 
void solve() {
    cin >> n; int sum = 0;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
 
    int res = inf;
    for (int i = 1; i*i <= sum; i++) {
        if (sum%i == 0) res = min(res, min(divide(i), divide(sum/i)));
    }
    cout << res;
}
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
        cout << "\n";
    }
    return 0;
}