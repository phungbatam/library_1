#include <iostream>
#include <vector>
#define MAX 100001

using namespace std;

vector<bool> prime;
void snt(int n) {
    prime.resize(n + 1, true);
    prime[0] = prime[1] = false;
    for(int i = 2; i * i <= n; i++) {
        if(prime[i]) {
            for(int j = i * i; j <= n; j += i) prime[j] = false;
        }
    } 
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    vector<int> arr(n);
    // 2*10^6 vì theo điều kiện đề bài thì a[i] + a[j] = 10^6 + 10^6 = 2 * 10^6
    snt(2000000);
    for(int i = 0; i < n; i++) cin >> arr[i];
    int dem = 0;
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(prime[arr[i] + arr[j]]) {
                dem++;
            }
        }
    }
    cout << dem;
    return 0;
}
