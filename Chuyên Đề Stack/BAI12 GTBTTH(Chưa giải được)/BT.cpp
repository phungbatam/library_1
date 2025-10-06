#include <bits/stdc++.h>

using namespace std;

int gtbt(char c) {
    if (c == '+' || c == '-') return 1;
    if (c == '*' || c == '/') return 2;
    if (c == '^') return 3;
    return 0;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s; cin >> s;
    stack<int> st;
    for(int i = 0; i < s.length(); i++) st.push(s[i]);

    return 0;
}
