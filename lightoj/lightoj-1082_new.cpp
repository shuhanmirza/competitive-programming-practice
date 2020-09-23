#include <bits/stdc++.h>

using namespace std;

#define LL long long

LL input[100050],segT[400200];

LL min(LL a , LL b)
{
    if(a < b) return a;
    else return b;
}

void con_tree(LL low , LL high , LL pos)
{
    if(low == high )
    {
        segT[pos] = input[low];
        return;
    }

     LL mid = (low + high)/2;

     con_tree(low,mid,2*pos+1);
     con_tree(mid+1,high,2*pos+2);

    segT[pos] = min(segT[2*pos+1] , segT[2*pos+2]);
}

LL min_query(LL qLow,LL qHigh,LL low , LL high,LL pos)
{
    if(qLow <= low && qHigh >= high )
    {
        return segT[pos];
    }

    if(qLow > high || qHigh < low ) return 100050;

    LL mid = (low + high)/2;
    LL a = min_query(qLow,qHigh,low,mid,2*pos+1);
    LL b = min_query(qLow,qHigh,mid+1,high,2*pos+2);

    return min(a,b);
}

int main()
{
    LL cas,t,n,q,i,a,b;

    scanf("%lld",&t);

    for(cas = 1 ; cas <= t ; cas++)
    {
        scanf("%lld %lld",&n,&q);

        for(i = 0 ; i < 4*n ; i++) segT[i] = 213516;

        for(i = 0 ; i < n ; i++)
        {
            scanf("%lld",&input[i]);
        }

       printf("Case %lld:\n",cas);

       con_tree(0,n-1,0);

       while(q--)
       {
          scanf("%lld %lld",&a,&b);
          printf("%lld\n",min_query(a-1,b-1,0,n-1,0));
       }
    }
    return 0;
}
