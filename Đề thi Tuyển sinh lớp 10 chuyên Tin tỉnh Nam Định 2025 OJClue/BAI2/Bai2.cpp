#include <bits/stdc++.h>

using namespace std;

bool uc(int a, int b) {
    int cnt = 0;
    for(int i = 1; i <= min(a,b); i++) {
        if(a % i == 0 && b % i == 0) {
            cnt++;
        }
    }
    if(cnt > 2) return false;
    return true; 
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("KHACNHAU.INP", "r", stdin);
    freopen("KHACNHAU.OUT", "w", stdout);
    int x,n; cin >> x >> n;
    vector<int>tmp;
    for(int i = 1; i <= n; i++) {
        if(uc(x,i) && x != i) {
            tmp.push_back(i);
        }
    }
    cout << tmp.size() << "\n";
    for(auto &x : tmp) cout << x << " ";

    return 0;
}
