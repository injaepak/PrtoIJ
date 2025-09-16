// 문자열 집합_14425.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//
#include <iostream>
#include <algorithm>
#include <cmath>
#include <map>

#define endl '\n';

using namespace std;

// (n + m) * log n
// (10000 + 10000) * log 10000

// n 주어지고 m 주어지고 문자열들어오고, 나머지 문자열들과 카운팅

int n, m;
int cnt;

map<string, bool> mp;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        mp[s] = true;
    }

    for (int i = 0; i < m; i++)
    {
        string s;
        cin >> s;

        if (mp[s])
            cnt++;
    }

    cout << cnt;
}
