// 숫자 카드_10815.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(0);
    cout.tie(0);

    // map
    int n, m = 0;

    cin >> n;

    map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        int a = 0;
        cin >> a;

        mp[a]++;
    }

    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int a = 0;
        cin >> a;

        mp[a] ? cout << "1 " : cout << "0 ";
    }
}