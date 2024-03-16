#include <iostream>
using namespace std;
int main()
{
    int i;
    cin >> i;
    char a[150];
    while (i--)
    {
        int n, k;
        cin >> n >> k;
        cin >> a;
        int x = 0, y = 0, z = 0;
        for (int j = 0; j < n; j++)
        {
            if (a[j] == 'B')
            {
                x++;
            }
        }
        if (k > x)
        {
            int j = 0;
            for (int i = 0; j < n && i < k - x; j++)
            {
                if (a[j] == 'A')
                    i++;
            }
            cout << "1\n"
                 << j << " "
                 << "B\n";
        }
        else if (x > k)
        {
            int j = n - 1;
            for (int i = 0; j >= 0 && i < k; j--)
            {
                if (a[j] == 'B')
                    i++;
            }
            cout << "1\n"
                 << j + 1 << " "
                 << "A\n";
        }
        else
            cout << "0\n";
    }
}