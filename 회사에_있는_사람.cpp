#include <iostream>
#include <cmath>
#include <string>
#include <map>

#define endl '\n';

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    map<string, bool> mp;

    for(int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        if (s == "enter")
            mp[s] = true;
        else
            mp[s] = false;
    }
}