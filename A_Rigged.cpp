#include <iostream>
using namespace std;
int t, a, b, c, d, n, i;
int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n >> a >> b;
        i = n - 1;
        while (i--)
        {
            cin >> c >> d;
            if (c >= a && d >= b)
            {
                a = -1;
            }
        }
        cout << a << endl;
    }
}