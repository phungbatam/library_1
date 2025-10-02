#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("DAYDEP.INP","r", stdin);
    freopen("DAYDEP.OUT", "w", stdout);
    int n; cin >> n;
    vector<int> a(n);
    map<int,int> mp;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        mp[a[i]]++;
    }

    int dem = 0;
    for(auto &x : mp) {
        if(x.first == x.second) {
            continue;
        } else if(x.first < x.second) {
            dem += (x.second - x.first);
        } else {
            dem += x.second;
        }
    }

    cout << dem;

    return 0;
}
