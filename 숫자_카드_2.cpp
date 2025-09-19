#include <iostream>
#include <cmath>
#include <map>

#define endl '\n'

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    map<int, int> mp;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;

        mp[a]++;
    }

    cin >> m;

    for (int i = 0; i < m; i++)
    {
        int a;
        cin >> a;
        cout << mp[a] << ' ';
    }
}