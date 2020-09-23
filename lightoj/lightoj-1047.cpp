#include <bits/stdc++.h>

using namespace std;

#define ll long long

//vector <int>tr[200];
ll house[50][5];
ll dp[50][5];
ll n;

ll rec(ll i , ll j)
{
    if(i > n ) return 0;

    ll pro1,pro2;

     if(dp[i][j] == 0)
     {
        if( j == 1)
        {
            pro1 = rec(i+1,2);
            pro2 = rec(i+1,3);
        }
        else if( j == 2)
        {
            pro1 = rec(i+1,1);
            pro2 = rec(i+1,3);
        }

        else
        {
            pro1 = rec(i+1,1);
            pro2 = rec(i+1,2);
        }

        dp[i][j] = house[i][j] + min(pro1, pro2);
     }

    return dp[i][j];
}

int main()
{
    ll T,cas;

    scanf("%lld",&T);
    cas = 0;
    while(T--)
    {
        cas ++ ;
        scanf("%lld",&n);

        ll i = 1, j = 1;

        for(i = 1 ; i <= n  ; i++)
        {
              scanf("%lld %lld %lld",&house[i][1] , &house[i][2] ,&house[i][3]);
        }
        memset(dp, 0, sizeof dp);
        ll ans = min(rec(1,1),rec(1,2));
        ans = min(rec(1,3),ans);

        printf("Case %lld: %lld\n",cas,ans);
    }

    return 0;
}

