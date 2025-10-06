#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);   
    freopen("STBRACKET.inp", "r", stdin);
    freopen("STBRACKET.out", "w", stdout);
    string s; cin >> s;
    stack<char> st;
    multimap<int,int> mul;
    for(size_t i = 0; i < s.length(); i++) {
        if(s[i] == '(') {
            st.push(i);
        } else {
            int index = st.top();
            mul.insert({index, i});
            st.pop();
        }
    }
    
    vector<pair<int,int>> v(mul.begin(), mul.end());
    sort(v.begin(), v.end(), [](pair<int,int> &a, pair<int,int> &b) {
        return a.second < b.second;
    });

    for(pair<int,int> ir : v) {
        cout << ir.first+1 << " " << ir.second+1 << "\n";
    }

    return 0;
}
