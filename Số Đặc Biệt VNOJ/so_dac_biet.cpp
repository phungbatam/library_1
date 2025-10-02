#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("SDB.INP", "r", stdin);
    freopen("SDB.OUT", "w", stdout);
    int n; cin >> n;
    vector<ll> a(n),tmp;
    unordered_map<ll,int> mp;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        mp[a[i]]++;
    }

    for(int i = 0; i < n; i++) {
        if(mp[a[i]] == 1) tmp.push_back(a[i]);
    }
    cout << tmp.size() << "\n";
    for(size_t i = 0; i < tmp.size(); i++) cout << tmp[i] << "\n";

    return 0;
}
