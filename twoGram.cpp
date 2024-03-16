#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n,c=0;
    cin>>n;
    string s;
    cin>>s;
    for(ll i=0; i<n-1; i++)
    {
        string str = s[i]+s[i+1];
        if(s.find(str) >= 0)
        {
            c++;
            i = i+2;
        }
    }
}