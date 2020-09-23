#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long x,y,j,n,m,ans;
    double i;

    cin >> n >> m;
    ans = 0;

    for(x = 1 ; x <= n ; x++)
    {
      ans += m/5;
      y = 5 - (x%5);
      if(y != 0 && y <= m%5) ans++;
    }

    cout << ans;

    return 0;
}

