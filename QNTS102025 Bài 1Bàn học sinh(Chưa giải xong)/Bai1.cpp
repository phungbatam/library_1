#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,b,x,y; cin >> a >> b >> x >> y;
    if(x > y) {
        cout << (a/x) + (b/x);
    } else {
        cout << (a/y) + (b/y);
    }

    return 0;
}
