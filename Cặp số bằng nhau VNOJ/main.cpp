#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // freopen("CSBN.INP", "r", stdin);
    // freopen("CSBN.OUT", "w", stdout);
    int n; cin >> n;
    vector<ll> arr(n);
    unordered_map<ll,ll> mp;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        mp[arr[i]]++;
    }
    // O(n^2)
    /*
    int dem = 0;
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) dem++;
        }
    }
    cout << dem;
    */
    // O(n)
    ll res = 0;
    for(auto &x : mp) {
        if(x.second > 1) {
            res += ((x.second * (x.second - 1)) / 2);
        }
    }
    cout << res;
    return 0;
}
