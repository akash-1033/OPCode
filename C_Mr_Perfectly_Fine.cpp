#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define In                     \
    for (ll i = 0; i < n; i++) \
    cin >>
#define test  \
    ll t;     \
    cin >> t; \
    while (t--)
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

vector<int> func(vector<int> &a)
{
    stack<int> s;
    s.push(a[0]);
    for (int i = 1; i < a.size(); i++)
    {
        if (s.size() == 0)
        {
            s.push(a[i]);
            continue;
        }
        int top = s.top();
        if ((top > 0 && a[i] > 0) || (top < 0 && a[i] < 0) || (top < 0 && a[i] > 0))
            s.push(a[i]);
        else
        {
            while (!s.empty() && abs(top) < abs(a[i]) && (top > 0 && a[i] < 0))
            {
                s.pop();
                top = s.size() > 0 ? s.top() : 0;
            }
            if (s.empty())
                s.push(a[i]);
            else if (top + a[i] == 0)
                s.pop();
            else if (abs(top) == abs(a[i]) || (top < 0 && a[i] < 0))
                s.push(a[i]);
        }
    }
    vector<int> ans;
    while (!s.empty())
    {
        ans.push_back(s.top());
        s.pop();
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> v, q;
    ll x[n], y[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    for (ll i = 0; i < n; i++)
    {
        cin >> y[i];
    }
    for (ll i = 0; i < n; i++)
    {
        if (x[i] < 0)
        {
            y[i] = 0 - y[i];
        }
    }
    for (ll i : y)
    {
        v.push_back(i);
    }
    q = func(v);
    for (ll i : q)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{
    fast
    solve();
}