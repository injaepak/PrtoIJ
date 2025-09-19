#include <iostream>
#include <cmath>
#include <map>
#include <string>

#define endl '\n'

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    map<int, string> mp1;
    map<string, int> mp2;
    
    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
    {
        string s;
        cin >> s;

        mp1[i] = s;
        mp2[s] = i;
    }

    for (int i = 0; i < m; i++)
    {
        string s;
        cin >> s;
        // string 형에 숫자가 있으면 int로 반환
        // 없으면 0을 반환
        // ex abc = 0, abc123 = 0, 123 = 123, 123abc = 123
        // 그니까 맨 앞에 문자냐 숫자냐로 갈림
        // atoi는 char* 를 받음
        // string을 char*로 변환하기 위해선 c_str을 사용
        // c_str은 string의 첫번째 포인터를 반환

        if (int a = atoi(s.c_str())) // 숫자라면
            cout << mp1[atoi(s.c_str())] << endl; // 문자 반환
        else
            cout << mp2[s] << endl; // 숫자 반환
    }

}