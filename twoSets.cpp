#include <bits/stdc++.h>
using namespace std;

#define LL long long

int main()
{
    LL n, sum, sum1;
    cin >> n;
    vector<LL> v1, v2;
    sum = (n * (n + 1)) / 2;
    sum1 = sum / 2;
    if (sum % 2 == 0)
    {
        for (LL i = n; i > 0; i--)
        {
            if (i <= sum1)
            {
                v1.push_back(i);
                sum1 = sum1 - i;
            }
            else
            {
                v2.push_back(i);
            }
        }
        cout << "YES" << endl;
        cout << v1.size() << endl;
        for (auto i : v1)
        {
            cout << i << " ";
        }
        cout << endl;
        cout << v2.size() << endl;
        for (auto i : v2)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}