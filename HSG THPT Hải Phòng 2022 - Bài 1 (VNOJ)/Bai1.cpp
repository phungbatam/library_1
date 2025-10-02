#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("BAI1.INP", "r", stdin);
    freopen("BA1.OUT", "w", stdout);
    string s;
    cin >> s;
    string tmp = "virus";
    string cnt = "";
    int res = 0, j = 0;
    for (char c : s)
    {
        if (c == tmp[j])
        {
            j++;
            if (j == tmp.size())
            {
                res++;
                j = 0;
            }
        }
        else
        {
            if (c == tmp[0])
            {
                j = 1; // trường hợp tmp = 'viruvirus'
            }
            else
            {
                j = 0;
            }
        }
    }

    cout << res;

    return 0;
}
