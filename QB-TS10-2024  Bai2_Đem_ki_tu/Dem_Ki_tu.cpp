#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("COUNT.INP", "r", stdin);
    freopen("COUNT.OUT", "w", stdout);
    string str; getline(cin,str);
    char c; cin >> c;
    map<char,int> mp;
    for(int i = 0; i < str.length(); i++) {
        mp[str[i]]++;
    }

    for(pair<char,int> ir : mp) {
        if(ir.first == c) {
            cout << ir.second;
            break;
        }
    }

    return 0;
}
