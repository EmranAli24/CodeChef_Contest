#include <bits/stdc++.h>
using namespace std;
int main()
{

    int T;
    cin >> T;

    while (T--)
    {

        string str;
        cin >> str;
        string str2 = "ADVITIYA";
        int cnt = 0;

        for (int i = 0; i < str.length(); i++)
        {

            char m = str2[i];
            char n = str[i];

            if (n < m)
            {
                cnt += (m - n);
            }

            else if (n > m)
            {

                cnt += (26 - n) + m;
            }
        }
        cout << cnt << endl;
    }
}