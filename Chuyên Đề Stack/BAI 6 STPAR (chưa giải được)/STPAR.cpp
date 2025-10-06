#include <bits/stdc++.h>
#define ll long long

using namespace std;

bool isCheckSort(vector<int> &v) {
    for(int i = 1; i < v.size(); i++) {
        if(v[i] < v[i - 1]) return false;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    stack<int> st;
    bool check = false;
    while(true) {
        int n; cin >> n;
        if(n == 0) break;
        vector<int> v(n), tmp;
        for(int i = 0; i < n; i++) cin >> v[i];
        for(size_t i = 0; i < v.size(); i++) {
            check = true;
            if(check) {
                st.push(v[i]);
                check = false;
            } else if(st.top() > v[i] && st.top() < v[i + 1]) {
                st.push(v[i]);
            }
            tmp.push_back(v[i]);
        }
        for(size_t i = 0; i < st.size(); i++) {
            tmp.push_back(st.top());
            st.pop();
        }
        if(isCheckSort(v)) cout << "yes" << "\n";
        else cout << "no" << "\n";
    }
    return 0;
}
