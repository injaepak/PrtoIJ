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
        string s, ss;
        cin >> s >> ss;

        if (ss == "enter")
            mp[s] = true;
        else
            mp[s] = false;
    }
    
    // mp.begin = 처음
    // mp.rbegin = 마지막
    // mp.rend = 뒤에서부터 마지막 = 처음
    // 마지막 부분 부터 -> 
    for(auto it = mp.rbegin(); it != mp.rend(); it++)
    {
        if (it->second == true)
            cout << it->first << endl;
    }
}