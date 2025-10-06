#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("STMEDIAN.inp", "r", stdin);
    freopen("STMEDIAN.out", "w", stdout);
    int n,m; cin >> n >> m;
    vector<int> v(n);
   
    for(int i = 0; i < n; i++) cin >> v[i];
    // O(n)
    /*
    for(int i = 0; i < m; i++) {
        int mid = ((v.size()+1) / 2)-1;
        cout << v[mid] << " ";
        v.erase(v.begin() + mid);
    }
    */
    // dùng stack
    stack<int> left, right;
    int mid = (n+1)/2;
    for(int i = 0; i < mid; i++) left.push(v[i]);
    for(int i = n - 1; i >= mid; --i) right.push(v[i]);
    for(int i = 0; i < m; i++) {
        cout << left.top() << " ";
        left.pop();
        if(right.size() > left.size()) {
            left.push(right.top());
            right.pop();
        }
    }
    return 0;
}
