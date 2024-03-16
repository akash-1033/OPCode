#include <bits/stdc++.h>
using namespace std;

#define LL long long

bool func(string str, LL i)
{
    if (str[i] == str[i + 1])
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    string str;
    LL c = 0, k = 0;
    string v1, v2;
    cin >> str;
    sort(str.begin(), str.end());
    char l = str[0], d = '\0';
    for (LL i = 0; i < str.length(); i++)
    {
        if (str[i] == l && ((i == 0 || i == str.length() - 1) ? func(str, i) : true))
        {
            c++;
            if (c % 2 != 0)
            {
                v1 = v1 + str[i];
            }
            else
            {
                v2 = str[i] + v2;
            }
        }

        else
        {
            if (str[i] == str[i + 1])
            {

                l = str[i];
                v1 = v1 + str[i];
                c = 1;
            }
            else
            {
                k++;
                d = str[i];
                c = 0;
                l = str[i];
                if (k > 1)
                {
                    cout << "NO SOLUTION" << endl;
                    return 0;
                }
            }
        }
    }
    string v3 = v2;
    reverse(v3.begin(), v3.end());
    if (v1.compare(v3) == 0)
    {
        if (d != '\0')
        {
            v1 = v1 + d;
        }
        cout << v1 + v2 << endl;
    }
    else
    {
        cout << "NO SOLUTION" << endl;
    }
}
