#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n,ara[100006],i,j,cnt;

    cin >> n;

    for(i = 0 ; i < n ; i++)
    {
        cin >> ara[i];
    }

    sort(ara,ara+n);

    cnt = 0;
    for(i = 0 ; i <= n ; i++)
    {
        if(cnt < ara[i])cnt++;
    }

    cout << cnt +1 ;
    return 0;
}
