#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long x,n,ans;

    while(scanf("%lld",&n) == 1)
    {
        x = (n - 1) / 2;
        x++;
        x = (2*x*x) + 1;
        ans = x - 2 + x - 4 + x - 6;

        cout << ans << endl;
    }
    return 0;
}
