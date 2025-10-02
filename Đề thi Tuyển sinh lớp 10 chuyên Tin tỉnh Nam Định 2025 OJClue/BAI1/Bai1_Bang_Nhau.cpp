#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> arr;
    int t = 4;
    for(int i = 0; i < t; i++) {
        int x; cin >> x;
        arr.push_back(x);
    }
    sort(arr.begin(), arr.end());
    if((arr[0] + arr[t-1]) == (arr[1] + arr[2])) {
        cout << "CO";
    } else {
        cout << "KHONG";
    }

    return 0;
}
