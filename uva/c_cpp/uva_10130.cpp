#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll w[1005],p[1005],cap,num_prd;
ll dp[1005][1005];

ll rec(ll pos , ll cp)
{
    if(pos >= num_prd) return 0;

    if(dp[pos][cp] != -1) return dp[pos][cp];

    ll ret = rec(pos+1,cp);

    if(cp + w[pos] <= cap)
    {
        ret = max(ret , rec(pos+1,cp+w[pos]) + p[pos] );
    }

    dp[pos][cp] = ret;
    return ret;
}

int main()
{
    ll cas,i,mem,T,mw[200],ans;

    scanf("%lld",&T);

    for(cas = 1 ; cas <= T ; cas++)
    {
        scanf("%lld",&num_prd);

        for( i = 0 ; i < num_prd ; i++ )
        {
            scanf("%lld %lld",&p[i],&w[i]);
        }

        scanf("%lld",&mem);

        ans = 0;
        for(i = 0 ; i < mem ; i++)
        {
            scanf("%lld",&mw[i]);

            memset(dp,-1,sizeof dp);

            cap = mw[i];
            ans += rec(0,0);
        }

        printf("%lld\n",ans);
    }

    return 0;
}


