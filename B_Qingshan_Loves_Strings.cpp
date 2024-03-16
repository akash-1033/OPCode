#include <cstdio>

const int N = 55;
char s[N], t[N];

int main()
{
    int T, n, m, i;
    bool f;
    scanf("%d", &T);
    while (T--)
    {
        f = 1;
        scanf("%d%d%s%s", &n, &m, s, t);
        for (i = 1; i < m; ++i)
        {
            if (t[i] == t[i - 1])
            {
                f = 0;
                break;
            }
        }
        for (i = 1; i < n; ++i)
        {
            if (s[i] == s[i - 1])
            {
                if (!f || s[i - 1] == t[0] || s[i] == t[m - 1])
                {
                    puts("NO");
                    goto lp;
                }
            }
        }
        puts("YES");
    lp:;
    }
    return 0;
}
