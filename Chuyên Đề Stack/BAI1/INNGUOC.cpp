#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("INNGUOC.INP", "r", stdin);
    freopen("INNGUOC.OUT", "w", stdout);
    int n; cin >> n;
    vector<int> v(n);
    stack<int> s;
    for(int i = 0; i < n; i++) {
        cin >> v[i];
        s.push(v[i]);
    }

    for(int i = 0; i < n; i++) {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}
