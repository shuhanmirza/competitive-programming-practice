#include<bits/stdc++.h>

int a, b, c, d, e, f;
int dp[10005];

int fn( int n )
{

    if( n == 0 ) dp[n] = a;
    if( n == 1 ) dp[n] = b;
    if( n == 2 ) dp[n] = c;
    if( n == 3 ) dp[n] = d;
    if( n == 4 ) dp[n] = e;
    if( n == 5 ) dp[n] = f;

    if(dp[n] == -1)
    dp[n] =  fn(n-1) + fn(n-2) + fn(n-3) + fn(n-4) + fn(n-5) + fn(n-6) ;

    return dp[n] % 10000007;
}


int main()
{
    int t,i,n,ans;

    scanf("%d",&t);

   for(i=1;i<=t;i++)
    {
        memset(dp,-1,sizeof dp);

        scanf("%d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&n);

        ans=fn(n);

        printf("Case %d: %d\n",i,ans);


    }
    return 0;
}
