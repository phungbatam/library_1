#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("LENGTH.INP", "r", stdin);
    freopen("LENGTH.OUT", "w", stdout);
    string str; 
    getline(cin,str);
    vector<int> a;
    int cnt = 0;
    for(size_t i = 0; i < str.length(); i++) {
        if(str[i] != ' ') {
            cnt++;
        } else {
            if(cnt > 0) {
                a.push_back(cnt);
                cnt=0;
            }
        }
    }

    if(cnt > 0) a.push_back(cnt);
    for(auto &x : a) cout << x << " ";

    return 0;
}
