#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    bool check = true;
    stack<char> st;
    vector<char> v(t);
    for(int i = 0; i < t; i++) cin >> v[i];

    for(size_t i = 0; i < v.size(); i++) {
        if(v[i] == '(') {
            st.push(v[i]); 
        } else {
            if(st.empty()) break;
            st.pop();
        }
    }

    if(st.empty()) cout << "YES";
    else cout << "NO";

    return 0;
}
