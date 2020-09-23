#include <bits/stdc++.h>

using namespace std;

#define ll long long

//vector <int>tr[200];
ll tr[202][202];
ll dp[205][205];
ll n;

ll rec(ll i , ll j)
{
    if(i > 2*n - 1) return 0;
    if(j < 1) return 0;
    if(j > 2*n - i + 1 ) return 0;


    ll pro1,pro2;

     if(dp[i][j] == 0)
     {

         pro1 = rec(i+1 , j );

         if(i < n)
         {
             pro2 = rec(i+1 , j+1 );
         }
         else
         {
             pro2 =  rec(i+1 , j-1);
         }

        dp[i][j] = tr[i][j] + max(pro1, pro2);
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
        memset(tr,0,sizeof tr);
        cas ++ ;
        scanf("%lld",&n);

        ll i = 1, j = 1;

        for(i = 1 ; i <= 2*n - 1 ; i++)
        {
            if( i <= n )
            {
                for(j = 1 ; j <= i ; j++)
                {
                    ll x;
                    scanf("%lld",&x);
                    //tr.push_back()
                    tr[i][j] = x;
                }
            }

            else
            {
                for(j = 1 ; j <= 2*n - i ; j++)
                {
                    ll x;
                    scanf("%lld",&x);
                    //tr.push_back()
                    tr[i][j] = x;
                }
            }
        }
        memset(dp, 0, sizeof dp);
        printf("Case %lld: %lld\n",cas,rec(1,1));
    }

    return 0;
}
