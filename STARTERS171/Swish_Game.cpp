#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m, k;
        string str;
        cin >> m >> k;
        cin >> str;
        int cnt = 0;

        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == 'S')
            {
                cnt++;
            }
        }

        if (cnt >= k)
        {
            cout << m << endl;
        }
        else
        {

            cout << m + (k - cnt - 1) << endl;
        }
    }
}