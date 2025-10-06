#include <iostream>
#include <stack>
#include <map>
#include <vector>
#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("STQUERY.inp", "r", stdin);
    freopen("STQUERY.out", "w",stdout);
    int t; cin >> t;
    stack<ll> st;
    while(t--) {
        ll n; cin >> n;
        switch (n)
        {
            case 1: {
                ll a; cin >> a;
                st.push(a);
                break;
            }
            case 2: {
                st.pop();
                break;
            }
            case 3: {
                if (!st.empty()) cout << st.top() << "\n";
                else cout << "Empty!";
                break;
            }
        }
    }

    return 0;
}
