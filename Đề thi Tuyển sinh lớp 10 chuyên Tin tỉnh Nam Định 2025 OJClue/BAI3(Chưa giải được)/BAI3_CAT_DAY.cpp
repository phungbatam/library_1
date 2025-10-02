#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // freopen("CATDAY.INP", "r", stdin);
    // freopen("CATDAY.OUT", "w", stdout);
    int n,k; cin >> n >> k;
    int part = k + 1;
    int r = n / part;
    int q = n % part;
    int maxLen = 0, countLen = 0;
    if(r == 0) {
        maxLen = q;
        countLen = part;
    } else {
        maxLen = q + 1;
        countLen = r;
    }

    cout << maxLen << " " << countLen;

    return 0;
}
