#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string str; getline(cin,str);
    stack<char> s;
    for(int i = 0; i < str.length(); i++) s.push(str[i]);
    for(char c : str) {
        if(s.top() != ' ') {
            cout << s.top();
            s.pop();
        } else {
            s.pop();
        }
    }

    return 0;
}
