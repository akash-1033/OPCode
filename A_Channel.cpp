#include <stdio.h>
char s[1000001];
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, a, q, b;
        scanf("%d%d%d%s", &n, &a, &q, s), b = a;
        bool f = a == n;
        for (int i = 0; i < q; i++)
            a += s[i] == '+' ? 1 : -1, b += s[i] == '+', f |= a == n;
        puts(b >= n ? f ? "YES" : "MAYBE" : "NO");
    }
    return 0;
}