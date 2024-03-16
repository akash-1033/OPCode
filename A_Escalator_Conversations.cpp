#include <iostream>
using namespace std;

int main()
{
    int n, m, k, h, q, x;
    cin >> q;
    while (q--)
    {
        int s = 0;
        cin >> n >> m >> k >> h;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            if (abs(h - x) % k == 0 && abs(h - x) / k < m && x != h)
            {
                s++;
            }
        }
        cout << s << endl;
    }
}