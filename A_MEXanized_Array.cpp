#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, k, x;
        cin >> n >> k >> x;
        cout << (x + 1 < k || k > n ? -1 : (k * k - k) / 2 + (k == x ? x - 1 : x) * (n - k)) << endl;
    }
    return 0;
}
