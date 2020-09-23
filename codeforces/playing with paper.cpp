#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long a,b,c,ans,temp;

    cin >> a >> b;

    ans = a/b;
    c = a - ans*b;

    while( c != 0)
    {
        a = b;
        b = c;

        temp = a/b;
        c = a - temp*b;
        ans += temp;
    }

    cout << ans;
    return 0;
}
