#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <string>

#define endl '\n'

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin.tie(0);

    int n, m;
    int cnt;
    vector<string> v;
    vector<string> v2;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        v.push_back(s);
    }

    for (int i = 0; i < m; i++)
    {
        string s;
        cin >> s;
        cout << cnt << endl;
        if (i >= n+2)
        {
            cout << cnt << endl;
            
        
            if (v[i] == s)
            {
                v2.push_back(s);
                cnt++;
            }
        }
    }

    // for (int i : v.)
    //     cout << endl;
}